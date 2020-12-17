package com.mayonlabs.fuzion.shared.cache

import com.squareup.sqldelight.ColumnAdapter
import kotlin.Double
import kotlin.Long
import kotlin.String
import kotlin.collections.List

data class CartItem(
  val id: Long,
  val item_id: Long,
  val item_ref: String,
  val name: String?,
  val image: String?,
  val item: String?,
  val variation: String?,
  val addons: List<String>?,
  val mixture: List<String>?,
  val price: Double?,
  val quantity: Long?,
  val status: String?
) {
  override fun toString(): String = """
  |CartItem [
  |  id: $id
  |  item_id: $item_id
  |  item_ref: $item_ref
  |  name: $name
  |  image: $image
  |  item: $item
  |  variation: $variation
  |  addons: $addons
  |  mixture: $mixture
  |  price: $price
  |  quantity: $quantity
  |  status: $status
  |]
  """.trimMargin()

  class Adapter(
    val addonsAdapter: ColumnAdapter<List<String>, String>,
    val mixtureAdapter: ColumnAdapter<List<String>, String>
  )
}
