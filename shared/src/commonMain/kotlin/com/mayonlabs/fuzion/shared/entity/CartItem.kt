package com.mayonlabs.fuzion.shared.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

//data class CartItems(
//    @SerialName("items")
//    val items: List<CartItem>?,
//
//    @SerialName("total")
//    val total: Double?,
//
//    @SerialName("quantity")
//    val quantity: Int?
//)
//

@Serializable
data class CartItem(
    @SerialName("id")
    val id: Int? = 0,

    @SerialName("item_id")
    val itemId: Int,

    @SerialName("item_ref")
    val itemRef: String,

    @SerialName("image")
    val image: String?,

    @SerialName("name")
    val name: String?,

    @SerialName("item")
    val item: String?,

    @SerialName("variation")
    val variation: String?,

    @SerialName("addons")
    val addons: List<String>?,

    @SerialName("mixture")
    val mixture: List<String>?,

    @SerialName("price")
    val price: Double?,

    @SerialName("quantity")
    val quantity: Int?,

    @SerialName("status")
    val status: String?
)