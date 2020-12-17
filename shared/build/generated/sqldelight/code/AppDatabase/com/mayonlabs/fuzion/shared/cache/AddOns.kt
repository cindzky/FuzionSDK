package com.mayonlabs.fuzion.shared.cache

import kotlin.Double
import kotlin.Long
import kotlin.String

data class AddOns(
  val id: Long,
  val name: String?,
  val addon: String?,
  val price: Double?,
  val sale_price: Double?
) {
  override fun toString(): String = """
  |AddOns [
  |  id: $id
  |  name: $name
  |  addon: $addon
  |  price: $price
  |  sale_price: $sale_price
  |]
  """.trimMargin()
}
