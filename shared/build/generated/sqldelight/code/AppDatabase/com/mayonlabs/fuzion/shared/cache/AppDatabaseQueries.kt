package com.mayonlabs.fuzion.shared.cache

import com.mayonlabs.fuzion.shared.entity.AddOn
import com.mayonlabs.fuzion.shared.entity.MixtureSetting
import com.mayonlabs.fuzion.shared.entity.Status
import com.squareup.sqldelight.Query
import com.squareup.sqldelight.Transacter
import kotlin.Any
import kotlin.Double
import kotlin.Long
import kotlin.String
import kotlin.collections.List
import kotlinx.serialization.json.JsonObject

interface AppDatabaseQueries : Transacter {
  fun <T : Any> selectAllMenuItems(mapper: (
    id: Long,
    name: String,
    slug: String?,
    description: String?,
    price: Double?,
    salePrice: Double?,
    images: List<String>?,
    variations: List<String>?,
    addon_options: List<AddOn>?,
    mixture_settings: List<MixtureSetting>?
  ) -> T): Query<T>

  fun selectAllMenuItems(): Query<MenuItem>

  fun <T : Any> selectCartItemById(id: Long, mapper: (
    id: Long,
    item_id: Long,
    item_ref: String,
    name: String?,
    image: String?,
    item: String?,
    variation: String?,
    addons: List<String>?,
    mixture: List<String>?,
    price: Double?,
    quantity: Long?,
    status: String?
  ) -> T): Query<T>

  fun selectCartItemById(id: Long): Query<CartItem>

  fun <T : Any> selectAllFavoritesItems(mapper: (
    id: Long,
    name: String,
    slug: String?,
    description: String?,
    price: Double?,
    salePrice: Double?,
    images: List<String>?,
    variations: List<String>?,
    addon_options: List<AddOn>?,
    mixture_settings: List<MixtureSetting>?
  ) -> T): Query<T>

  fun selectAllFavoritesItems(): Query<FavoritesItem>

  fun <T : Any> selectFavoritesById(id: Long, mapper: (
    id: Long,
    name: String,
    slug: String?,
    description: String?,
    price: Double?,
    salePrice: Double?,
    images: List<String>?,
    variations: List<String>?,
    addon_options: List<AddOn>?,
    mixture_settings: List<MixtureSetting>?
  ) -> T): Query<T>

  fun selectFavoritesById(id: Long): Query<FavoritesItem>

  fun <T : Any> selectAllCartItems(mapper: (
    id: Long,
    item_id: Long,
    item_ref: String,
    name: String?,
    image: String?,
    item: String?,
    variation: String?,
    addons: List<String>?,
    mixture: List<String>?,
    price: Double?,
    quantity: Long?,
    status: String?
  ) -> T): Query<T>

  fun selectAllCartItems(): Query<CartItem>

  fun <T : Any> selectAllKiosks(mapper: (
    ref_id: String?,
    coordinates: String?,
    description: String?,
    menu: JsonObject?,
    location: String?
  ) -> T): Query<T>

  fun selectAllKiosks(): Query<Kiosk>

  fun <T : Any> selectAllAddOns(mapper: (
    id: Long,
    name: String?,
    addon: String?,
    price: Double?,
    sale_price: Double?
  ) -> T): Query<T>

  fun selectAllAddOns(): Query<AddOns>

  fun <T : Any> selectAllOrdersByStatus(status: Status?, mapper: (
    id: Long,
    email_address: String?,
    status: Status?,
    line_items: List<com.mayonlabs.fuzion.shared.entity.CartItem>?,
    total_price: Double?,
    total_quantity: Long?,
    kiosk: com.mayonlabs.fuzion.shared.entity.Kiosk?,
    datetime_created: String?,
    datetime_cancelled: String?,
    datetime_paid: String?,
    datetime_completed: String?,
    pin: String?
  ) -> T): Query<T>

  fun selectAllOrdersByStatus(status: Status?): Query<OrderItem>

  fun <T : Any> selectAllCartItemsByStatus(status: String?, mapper: (
    id: Long,
    item_id: Long,
    item_ref: String,
    name: String?,
    image: String?,
    item: String?,
    variation: String?,
    addons: List<String>?,
    mixture: List<String>?,
    price: Double?,
    quantity: Long?,
    status: String?
  ) -> T): Query<T>

  fun selectAllCartItemsByStatus(status: String?): Query<CartItem>

  fun <T : Any> selectOrderItemById(id: Long, mapper: (
    id: Long,
    email_address: String?,
    status: Status?,
    line_items: List<com.mayonlabs.fuzion.shared.entity.CartItem>?,
    total_price: Double?,
    total_quantity: Long?,
    kiosk: com.mayonlabs.fuzion.shared.entity.Kiosk?,
    datetime_created: String?,
    datetime_cancelled: String?,
    datetime_paid: String?,
    datetime_completed: String?,
    pin: String?
  ) -> T): Query<T>

  fun selectOrderItemById(id: Long): Query<OrderItem>

  fun lastInsertRowId(): Query<Long>

  fun insertMenuItem(
    id: Long?,
    name: String,
    slug: String?,
    description: String?,
    price: Double?,
    salePrice: Double?,
    images: List<String>?,
    variations: List<String>?,
    addon_options: List<AddOn>?,
    mixture_settings: List<MixtureSetting>?
  )

  fun insertFavoritesItem(
    id: Long?,
    name: String,
    slug: String?,
    description: String?,
    price: Double?,
    salePrice: Double?,
    images: List<String>?,
    variations: List<String>?,
    addon_options: List<AddOn>?,
    mixture_settings: List<MixtureSetting>?
  )

  fun insertCartItem(
    item_id: Long,
    item_ref: String,
    name: String?,
    image: String?,
    item: String?,
    variation: String?,
    addons: List<String>?,
    mixture: List<String>?,
    price: Double?,
    quantity: Long?,
    status: String?
  )

  fun insertKiosk(
    ref_id: String?,
    coordinates: String?,
    description: String?,
    menu: JsonObject?,
    location: String?
  )

  fun insertAddons(
    id: Long?,
    name: String?,
    addon: String?,
    price: Double?,
    sale_price: Double?
  )

  fun insertOrder(
    id: Long?,
    email_address: String?,
    status: Status?,
    line_items: List<com.mayonlabs.fuzion.shared.entity.CartItem>?,
    total_price: Double?,
    total_quantity: Long?,
    kiosk: com.mayonlabs.fuzion.shared.entity.Kiosk?,
    datetime_created: String?,
    datetime_cancelled: String?,
    datetime_paid: String?,
    datetime_completed: String?,
    pin: String?
  )

  fun removeAllMenuItems()

  fun removeAllFavorites()

  fun removeFavoriteById(id: Long)

  fun removeAllCartItems()

  fun removeAllCartItemById(id: Long)

  fun removeOrderItemByID(id: Long)

  fun removeAllKiosks()

  fun removeAllAddOns()

  fun updateOrderStatus(status: Status?, id: Long)

  fun setOrderDateCancelled(datetime_cancelled: String?, id: Long)

  fun setOrderDatePaid(datetime_paid: String?, id: Long)

  fun setOrderDateCompleted(datetime_completed: String?, id: Long)

  fun updateCartItemStatus(status: String?, id: Long)
}
