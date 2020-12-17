buildscript {
    repositories {
        gradlePluginPortal()
        jcenter()
        google()
        mavenCentral()
        maven { url = uri("https://dl.bintray.com/korlibs/korlibs") }
        maven { url = uri("https://plugins.gradle.org/m2/") }
    }

    val kotlinVersion = "1.4.10"
    val sqlDelightVersion: String by project

    dependencies {
        classpath("org.jetbrains.kotlin:kotlin-gradle-plugin:1.4.10")
        classpath("com.android.tools.build:gradle:4.0.1")
        classpath("org.jetbrains.kotlin:kotlin-serialization:$kotlinVersion")
        classpath("com.squareup.sqldelight:gradle-plugin:$sqlDelightVersion")

        classpath("com.jfrog.bintray.gradle:gradle-bintray-plugin:1.8.4")
        classpath("org.jetbrains.dokka:dokka-gradle-plugin:0.10.0")
        classpath("com.soywiz.korlibs.korge.plugins:korge-gradle-plugin:1.10.0.0")
        classpath("org.jfrog.buildinfo:build-info-extractor-gradle:4.13.0")
    }
}

group = "com.mayonlabs.fuzion"
version = "0.3-SNAPSHOT"

repositories {
    mavenCentral()
    jcenter()
}
