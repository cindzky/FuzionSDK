package com.mayonlabs.fuzion_sdk.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class Order(
    @SerialName("id")
    val id: Int?,

    @SerialName("email_address")
    val emailAddress: String?,

    @SerialName("status")
    val status: Status?,

    @SerialName("line_items")
    val lineItems: List<CartItem>?,

    @SerialName("total_price")
    val totalPrice: Double?,

    @SerialName("total_quantity")
    val totalQuantity: Int?,

    @SerialName("kiosk")
    val kiosk: Kiosk?,

    @SerialName("datetime")
    val datetimeCreated: String?,

    @SerialName("datetime_paid")
    val datetimePaid: String? = "",

    @SerialName("datetime_cancelled")
    val datetimeCancelled: String? = "",

    @SerialName("datetime_completed")
    val datetimeCompeted: String? = "",

    @SerialName("pin")
    val pin: String? = ""
)