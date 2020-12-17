import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget
import java.io.*
import java.util.*

plugins {
//    kotlin("jvm")
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    id("kotlin-android-extensions")
    id("com.squareup.sqldelight")

    id("maven-publish")
    id("com.jfrog.bintray")
//    `maven-publish`

//    id("com.soywiz.korge")
    id("org.jetbrains.dokka")
}

group = "com.mayonlabs.fuzion"
version = "1.0-SNAPSHOT"

val githubProperties = Properties()
githubProperties.load(FileInputStream(rootProject.file("github.properties"))) //Set env variable GPR_USER & GPR_API_KEY if not adding a properties file

val versionName = "0.1.0"
val artifactId = "FuzionSDK"

repositories {
    gradlePluginPortal()
    google()
    jcenter()
    mavenCentral()
}

kotlin {
    android()
    ios {
        binaries {
            framework {
                baseName = "shared"
            }
        }
    }

//    val onPhone = System.getenv("SDK_NAME")?.startsWith("iphoneos") ?: false
//    if (onPhone) {
//        iosArm64("ios")
//    } else {
//        iosX64("ios")
//    }

    val coroutinesVersion = "1.3.9-native-mt"
    val serializationVersion = "1.0.0-RC"
    val ktorVersion = "1.4.0"
    val sqlDelightVersion: String by project

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:$coroutinesVersion")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:$serializationVersion")
                implementation("io.ktor:ktor-client-core:$ktorVersion")
                implementation("io.ktor:ktor-client-serialization:$ktorVersion")
                implementation("com.squareup.sqldelight:runtime:$sqlDelightVersion")
                implementation("com.benasher44:uuid:0.2.3")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidMain by getting {
            dependencies {
                implementation("com.google.android.material:material:1.2.1")
                implementation("io.ktor:ktor-client-android:$ktorVersion")
                implementation("com.squareup.sqldelight:android-driver:$sqlDelightVersion")
            }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13")
            }
        }
        val iosMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-ios:$ktorVersion")
                implementation("com.squareup.sqldelight:native-driver:$sqlDelightVersion")
            }
        }
        val iosTest by getting
    }
}

android {
    compileSdkVersion(29)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdkVersion(23)
        targetSdkVersion(29)
        versionCode = 1
        versionName = "1.0"
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}

sqldelight {
    database("AppDatabase") {
        packageName = "com.mayonlabs.fuzion.shared.cache"
    }
}

val packForXcode by tasks.creating(Sync::class) {
    group = "build"
    val mode = System.getenv("CONFIGURATION") ?: "DEBUG"
    val sdkName = System.getenv("SDK_NAME") ?: "iphonesimulator"
    val targetName = "ios" + if (sdkName.startsWith("iphoneos")) "Arm64" else "X64"
    val framework = kotlin.targets.getByName<KotlinNativeTarget>(targetName).binaries.getFramework(mode)
    inputs.property("mode", mode)
    dependsOn(framework.linkTask)
    val targetDir = File(buildDir, "xcode-frameworks")
    from({ framework.outputDirectory })
    into(targetDir)
}
tasks.getByName("build").dependsOn(packForXcode)


publishing {
    fun getGprUser(): String {
        return if (githubProperties.contains("gpr.user")) {
            githubProperties["gpr.user"].toString()
        } else {
            System.getenv("GPR_USER") ?: ""
        }
    }

    fun getGprKey(): String {
        return if (githubProperties.contains("gpr.key")) {
            githubProperties["gpr.key"].toString()
        } else {
            System.getenv("GPR_KEY") ?: ""
        }
    }

    repositories {
        maven {
            name = "GitHubPackages"
            url = uri("https://maven.pkg.github.com/cindzky/FuzionSDK")
            credentials {
                username = getGprUser()
                password = getGprKey()
            }
        }
    }

    publications {
        register("gprRelease", MavenPublication::class) {
            groupId = "com.mayonlabs.fuzion"
            artifactId = project.name
            version = "0.1.0"
            artifact("$buildDir/outputs/aar/${artifactId}")
        }
    }
//    publications {
//        register("gpr") {
//            from(project.components["java"])
//        }
//    }
}