package com.mayonlabs.fuzion.shared.network

import com.mayonlabs.fuzion.shared.entity.Kiosk
import com.mayonlabs.fuzion.shared.entity.MenuItem
import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.*
import kotlinx.serialization.json.Json

class FuzionApi {
    private val httpClient = HttpClient {
        install(JsonFeature) {
            val json = Json { ignoreUnknownKeys = true }
            serializer = KotlinxSerializer(json)
        }
    }

    companion object {
        private const val LAUNCHES_ENDPOINT = "https://perfecto.mayonlabs.com"
    }

    suspend fun getAllMenuItems(): List<MenuItem> {
        return httpClient.get("$LAUNCHES_ENDPOINT/menu/items/")
    }

    suspend fun getAllKiosks(): List<Kiosk> {
        return httpClient.get("$LAUNCHES_ENDPOINT/locate/kiosks/")
    }

//    suspend fun getAllCartItems(): CartItems {
//        return httpClient.get("$LAUNCHES_ENDPOINT/cart/")
//    }
//
//    suspend fun addToCart() {
//        return httpClient.post("$LAUNCHES_ENDPOINT/cart/")
//    }
}