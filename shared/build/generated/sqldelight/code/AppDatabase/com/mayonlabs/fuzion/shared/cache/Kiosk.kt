package com.mayonlabs.fuzion.shared.cache

import com.squareup.sqldelight.ColumnAdapter
import kotlin.String
import kotlinx.serialization.json.JsonObject

data class Kiosk(
  val ref_id: String?,
  val coordinates: String?,
  val description: String?,
  val menu: JsonObject?,
  val location: String?
) {
  override fun toString(): String = """
  |Kiosk [
  |  ref_id: $ref_id
  |  coordinates: $coordinates
  |  description: $description
  |  menu: $menu
  |  location: $location
  |]
  """.trimMargin()

  class Adapter(
    val menuAdapter: ColumnAdapter<JsonObject, String>
  )
}
