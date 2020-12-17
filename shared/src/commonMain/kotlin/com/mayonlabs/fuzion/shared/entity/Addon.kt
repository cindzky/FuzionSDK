package com.mayonlabs.fuzion.shared.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class AddOn(
    @SerialName("id")
    val id: Int,

    @SerialName("name")
    val name: String,

    @SerialName("addon")
    val addon: String?,

    @SerialName("description")
    val description: String?,

    @SerialName("price")
    val price: Double?,

    @SerialName("sale_price")
    val salePrice: Double?
)
