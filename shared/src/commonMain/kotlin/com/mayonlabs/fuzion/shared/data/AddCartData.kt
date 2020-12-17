package com.mayonlabs.fuzion.shared.data

import kotlinx.serialization.json.JsonObject

data class AddCartItems(
    val items: List<AddCartItem>?,
    val total: Double?,
    val quantity: Int?
)

data class AddCartItem(
    val itemId: Int?,
    val itemRef: Int?,
    val name: String?,
    val item: String?,
    val variation: String?,
//    val addons: List<AddonOption>?,
    val mixture: JsonObject?,
    val price: Double?,
    val quantity: Int?
)