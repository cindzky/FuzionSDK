package com.mayonlabs.fuzion.shared.cache

import com.mayonlabs.fuzion.shared.entity.CartItem
import com.mayonlabs.fuzion.shared.entity.Kiosk
import com.mayonlabs.fuzion.shared.entity.Status
import com.squareup.sqldelight.ColumnAdapter
import kotlin.Double
import kotlin.Long
import kotlin.String
import kotlin.collections.List

data class OrderItem(
  val id: Long,
  val email_address: String?,
  val status: Status?,
  val line_items: List<CartItem>?,
  val total_price: Double?,
  val total_quantity: Long?,
  val kiosk: Kiosk?,
  val datetime_created: String?,
  val datetime_cancelled: String?,
  val datetime_paid: String?,
  val datetime_completed: String?,
  val pin: String?
) {
  override fun toString(): String = """
  |OrderItem [
  |  id: $id
  |  email_address: $email_address
  |  status: $status
  |  line_items: $line_items
  |  total_price: $total_price
  |  total_quantity: $total_quantity
  |  kiosk: $kiosk
  |  datetime_created: $datetime_created
  |  datetime_cancelled: $datetime_cancelled
  |  datetime_paid: $datetime_paid
  |  datetime_completed: $datetime_completed
  |  pin: $pin
  |]
  """.trimMargin()

  class Adapter(
    val statusAdapter: ColumnAdapter<Status, String>,
    val line_itemsAdapter: ColumnAdapter<List<CartItem>, String>,
    val kioskAdapter: ColumnAdapter<Kiosk, String>
  )
}
