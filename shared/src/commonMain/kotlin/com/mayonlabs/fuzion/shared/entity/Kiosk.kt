package com.mayonlabs.fuzion.shared.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonObject

@Serializable
data class Kiosk(
    @SerialName("ref_id")
    val refId: String?,

    @SerialName("coordinates")
    val coordinates: String?,

    @SerialName("description")
    val description: String?,

    @SerialName("menu")
    val menu: JsonObject?,

    @SerialName("location")
    val location: String?
)