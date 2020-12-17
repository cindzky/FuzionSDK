package com.mayonlabs.fuzion.shared.cache

import com.mayonlabs.fuzion.shared.cache.shared.newInstance
import com.mayonlabs.fuzion.shared.cache.shared.schema
import com.squareup.sqldelight.Transacter
import com.squareup.sqldelight.db.SqlDriver

interface AppDatabase : Transacter {
  val appDatabaseQueries: AppDatabaseQueries

  companion object {
    val Schema: SqlDriver.Schema
      get() = AppDatabase::class.schema

    operator fun invoke(
      driver: SqlDriver,
      CartItemAdapter: CartItem.Adapter,
      FavoritesItemAdapter: FavoritesItem.Adapter,
      KioskAdapter: Kiosk.Adapter,
      MenuItemAdapter: MenuItem.Adapter,
      OrderItemAdapter: OrderItem.Adapter
    ): AppDatabase = AppDatabase::class.newInstance(driver, CartItemAdapter, FavoritesItemAdapter,
        KioskAdapter, MenuItemAdapter, OrderItemAdapter)}
}
