package com.mayonlabs.fuzion.shared.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class MenuItem(
    @SerialName("id")
    val id: Int,

    @SerialName("name")
    val name: String,

    @SerialName("slug")
    val slug: String?,

    @SerialName("description")
    val description: String?,

    @SerialName("price")
    val price: Double?,

    @SerialName("sale_price")
    val salePrice: Double?,

    @SerialName("images")
    val images: List<String>?,

    @SerialName("variations")
    val variations: List<String>?,

    @SerialName("addon_options")
    val addonOptions: List<AddOn>?,

    @SerialName("mixture_settings")
    val mixtureSettings: List<MixtureSetting>?
)