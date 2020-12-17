package com.mayonlabs.fuzion.shared.cache

import com.mayonlabs.fuzion.shared.entity.AddOn
import com.mayonlabs.fuzion.shared.entity.MixtureSetting
import com.squareup.sqldelight.ColumnAdapter
import kotlin.Double
import kotlin.Long
import kotlin.String
import kotlin.collections.List

data class FavoritesItem(
  val id: Long,
  val name: String,
  val slug: String?,
  val description: String?,
  val price: Double?,
  val salePrice: Double?,
  val images: List<String>?,
  val variations: List<String>?,
  val addon_options: List<AddOn>?,
  val mixture_settings: List<MixtureSetting>?
) {
  override fun toString(): String = """
  |FavoritesItem [
  |  id: $id
  |  name: $name
  |  slug: $slug
  |  description: $description
  |  price: $price
  |  salePrice: $salePrice
  |  images: $images
  |  variations: $variations
  |  addon_options: $addon_options
  |  mixture_settings: $mixture_settings
  |]
  """.trimMargin()

  class Adapter(
    val imagesAdapter: ColumnAdapter<List<String>, String>,
    val variationsAdapter: ColumnAdapter<List<String>, String>,
    val addon_optionsAdapter: ColumnAdapter<List<AddOn>, String>,
    val mixture_settingsAdapter: ColumnAdapter<List<MixtureSetting>, String>
  )
}
