package com.mayonlabs.fuzion.shared.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class MixtureSetting(
    @SerialName("id")
    val id: Int,

    @SerialName("name")
    val name: String,

    @SerialName("slug")
    val slug: String?,

    @SerialName("description")
    val description: String?,

    @SerialName("default_value")
    val defaultValue: Int?,

    @SerialName("max_value")
    val maxValue: Int?
)