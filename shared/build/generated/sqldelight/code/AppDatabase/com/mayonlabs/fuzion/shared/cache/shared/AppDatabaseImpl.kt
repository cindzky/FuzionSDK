package com.mayonlabs.fuzion.shared.cache.shared

import com.mayonlabs.fuzion.shared.cache.AddOns
import com.mayonlabs.fuzion.shared.cache.AppDatabase
import com.mayonlabs.fuzion.shared.cache.AppDatabaseQueries
import com.mayonlabs.fuzion.shared.cache.CartItem
import com.mayonlabs.fuzion.shared.cache.FavoritesItem
import com.mayonlabs.fuzion.shared.cache.Kiosk
import com.mayonlabs.fuzion.shared.cache.MenuItem
import com.mayonlabs.fuzion.shared.cache.OrderItem
import com.mayonlabs.fuzion.shared.entity.AddOn
import com.mayonlabs.fuzion.shared.entity.MixtureSetting
import com.mayonlabs.fuzion.shared.entity.Status
import com.squareup.sqldelight.Query
import com.squareup.sqldelight.TransacterImpl
import com.squareup.sqldelight.db.SqlCursor
import com.squareup.sqldelight.db.SqlDriver
import com.squareup.sqldelight.internal.copyOnWriteList
import kotlin.Any
import kotlin.Double
import kotlin.Int
import kotlin.Long
import kotlin.String
import kotlin.collections.List
import kotlin.collections.MutableList
import kotlin.jvm.JvmField
import kotlin.reflect.KClass
import kotlinx.serialization.json.JsonObject

internal val KClass<AppDatabase>.schema: SqlDriver.Schema
  get() = AppDatabaseImpl.Schema

internal fun KClass<AppDatabase>.newInstance(
  driver: SqlDriver,
  CartItemAdapter: CartItem.Adapter,
  FavoritesItemAdapter: FavoritesItem.Adapter,
  KioskAdapter: Kiosk.Adapter,
  MenuItemAdapter: MenuItem.Adapter,
  OrderItemAdapter: OrderItem.Adapter
): AppDatabase = AppDatabaseImpl(driver, CartItemAdapter, FavoritesItemAdapter, KioskAdapter,
    MenuItemAdapter, OrderItemAdapter)

private class AppDatabaseImpl(
  driver: SqlDriver,
  internal val CartItemAdapter: CartItem.Adapter,
  internal val FavoritesItemAdapter: FavoritesItem.Adapter,
  internal val KioskAdapter: Kiosk.Adapter,
  internal val MenuItemAdapter: MenuItem.Adapter,
  internal val OrderItemAdapter: OrderItem.Adapter
) : TransacterImpl(driver), AppDatabase {
  override val appDatabaseQueries: AppDatabaseQueriesImpl = AppDatabaseQueriesImpl(this, driver)

  object Schema : SqlDriver.Schema {
    override val version: Int
      get() = 1

    override fun create(driver: SqlDriver) {
      driver.execute(null, """
          |CREATE TABLE MenuItem (
          |    id INTEGER NOT NULL PRIMARY KEY,
          |    name TEXT NOT NULL,
          |    slug TEXT,
          |    description TEXT,
          |    price REAL,
          |    salePrice REAL,
          |    images TEXT,
          |    variations TEXT,
          |    addon_options TEXT,
          |    mixture_settings TEXT
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE FavoritesItem (
          |    id INTEGER NOT NULL PRIMARY KEY,
          |    name TEXT NOT NULL,
          |    slug TEXT,
          |    description TEXT,
          |    price REAL,
          |    salePrice REAL,
          |    images TEXT,
          |    variations TEXT,
          |    addon_options TEXT,
          |    mixture_settings TEXT
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE CartItem(
          |    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
          |    item_id INTEGER NOT NULL,
          |    item_ref TEXT NOT NULL,
          |    name TEXT,
          |    image TEXT,
          |    item TEXT,
          |    variation TEXT,
          |    addons TEXT,
          |    mixture TEXT,
          |    price REAL,
          |    quantity INTEGER,
          |    status Text
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE Kiosk(
          |    ref_id TEXT,
          |    coordinates TEXT,
          |    description TEXT,
          |    menu TEXT,
          |    location TEXT
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE AddOns(
          |    id INTEGER NOT NULL PRIMARY KEY,
          |    name TEXT,
          |    addon TEXT,
          |    price REAL,
          |    sale_price REAL
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE OrderItem(
          |    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
          |    email_address TEXT,
          |    status TEXT,
          |    line_items TEXT,
          |    total_price REAL,
          |    total_quantity INTEGER,
          |    kiosk TEXT,
          |    datetime_created TEXT,
          |    datetime_cancelled TEXT,
          |    datetime_paid TEXT,
          |    datetime_completed TEXT,
          |    pin TEXT
          |)
          """.trimMargin(), 0)
    }

    override fun migrate(
      driver: SqlDriver,
      oldVersion: Int,
      newVersion: Int
    ) {
    }
  }
}

private class AppDatabaseQueriesImpl(
  private val database: AppDatabaseImpl,
  private val driver: SqlDriver
) : TransacterImpl(driver), AppDatabaseQueries {
  internal val selectAllMenuItems: MutableList<Query<*>> = copyOnWriteList()

  internal val selectCartItemById: MutableList<Query<*>> = copyOnWriteList()

  internal val selectAllFavoritesItems: MutableList<Query<*>> = copyOnWriteList()

  internal val selectFavoritesById: MutableList<Query<*>> = copyOnWriteList()

  internal val selectAllCartItems: MutableList<Query<*>> = copyOnWriteList()

  internal val selectAllKiosks: MutableList<Query<*>> = copyOnWriteList()

  internal val selectAllAddOns: MutableList<Query<*>> = copyOnWriteList()

  internal val selectAllOrdersByStatus: MutableList<Query<*>> = copyOnWriteList()

  internal val selectAllCartItemsByStatus: MutableList<Query<*>> = copyOnWriteList()

  internal val selectOrderItemById: MutableList<Query<*>> = copyOnWriteList()

  internal val lastInsertRowId: MutableList<Query<*>> = copyOnWriteList()

  override fun <T : Any> selectAllMenuItems(mapper: (
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
  ) -> T): Query<T> = Query(657740549, selectAllMenuItems, driver, "AppDatabase.sq",
      "selectAllMenuItems", "SELECT * FROM MenuItem") { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1)!!,
      cursor.getString(2),
      cursor.getString(3),
      cursor.getDouble(4),
      cursor.getDouble(5),
      cursor.getString(6)?.let(database.MenuItemAdapter.imagesAdapter::decode),
      cursor.getString(7)?.let(database.MenuItemAdapter.variationsAdapter::decode),
      cursor.getString(8)?.let(database.MenuItemAdapter.addon_optionsAdapter::decode),
      cursor.getString(9)?.let(database.MenuItemAdapter.mixture_settingsAdapter::decode)
    )
  }

  override fun selectAllMenuItems(): Query<MenuItem> = selectAllMenuItems { id, name, slug,
      description, price, salePrice, images, variations, addon_options, mixture_settings ->
    MenuItem(
      id,
      name,
      slug,
      description,
      price,
      salePrice,
      images,
      variations,
      addon_options,
      mixture_settings
    )
  }

  override fun <T : Any> selectCartItemById(id: Long, mapper: (
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
  ) -> T): Query<T> = SelectCartItemByIdQuery(id) { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getLong(1)!!,
      cursor.getString(2)!!,
      cursor.getString(3),
      cursor.getString(4),
      cursor.getString(5),
      cursor.getString(6),
      cursor.getString(7)?.let(database.CartItemAdapter.addonsAdapter::decode),
      cursor.getString(8)?.let(database.CartItemAdapter.mixtureAdapter::decode),
      cursor.getDouble(9),
      cursor.getLong(10),
      cursor.getString(11)
    )
  }

  override fun selectCartItemById(id: Long): Query<CartItem> = selectCartItemById(id) { id_,
      item_id, item_ref, name, image, item, variation, addons, mixture, price, quantity, status ->
    CartItem(
      id_,
      item_id,
      item_ref,
      name,
      image,
      item,
      variation,
      addons,
      mixture,
      price,
      quantity,
      status
    )
  }

  override fun <T : Any> selectAllFavoritesItems(mapper: (
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
  ) -> T): Query<T> = Query(-248431419, selectAllFavoritesItems, driver, "AppDatabase.sq",
      "selectAllFavoritesItems", "SELECT * FROM FavoritesItem") { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1)!!,
      cursor.getString(2),
      cursor.getString(3),
      cursor.getDouble(4),
      cursor.getDouble(5),
      cursor.getString(6)?.let(database.FavoritesItemAdapter.imagesAdapter::decode),
      cursor.getString(7)?.let(database.FavoritesItemAdapter.variationsAdapter::decode),
      cursor.getString(8)?.let(database.FavoritesItemAdapter.addon_optionsAdapter::decode),
      cursor.getString(9)?.let(database.FavoritesItemAdapter.mixture_settingsAdapter::decode)
    )
  }

  override fun selectAllFavoritesItems(): Query<FavoritesItem> = selectAllFavoritesItems { id, name,
      slug, description, price, salePrice, images, variations, addon_options, mixture_settings ->
    FavoritesItem(
      id,
      name,
      slug,
      description,
      price,
      salePrice,
      images,
      variations,
      addon_options,
      mixture_settings
    )
  }

  override fun <T : Any> selectFavoritesById(id: Long, mapper: (
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
  ) -> T): Query<T> = SelectFavoritesByIdQuery(id) { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1)!!,
      cursor.getString(2),
      cursor.getString(3),
      cursor.getDouble(4),
      cursor.getDouble(5),
      cursor.getString(6)?.let(database.FavoritesItemAdapter.imagesAdapter::decode),
      cursor.getString(7)?.let(database.FavoritesItemAdapter.variationsAdapter::decode),
      cursor.getString(8)?.let(database.FavoritesItemAdapter.addon_optionsAdapter::decode),
      cursor.getString(9)?.let(database.FavoritesItemAdapter.mixture_settingsAdapter::decode)
    )
  }

  override fun selectFavoritesById(id: Long): Query<FavoritesItem> = selectFavoritesById(id) { id_,
      name, slug, description, price, salePrice, images, variations, addon_options,
      mixture_settings ->
    FavoritesItem(
      id_,
      name,
      slug,
      description,
      price,
      salePrice,
      images,
      variations,
      addon_options,
      mixture_settings
    )
  }

  override fun <T : Any> selectAllCartItems(mapper: (
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
  ) -> T): Query<T> = Query(-1897439772, selectAllCartItems, driver, "AppDatabase.sq",
      "selectAllCartItems", "SELECT * FROM CartItem ORDER BY id DESC") { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getLong(1)!!,
      cursor.getString(2)!!,
      cursor.getString(3),
      cursor.getString(4),
      cursor.getString(5),
      cursor.getString(6),
      cursor.getString(7)?.let(database.CartItemAdapter.addonsAdapter::decode),
      cursor.getString(8)?.let(database.CartItemAdapter.mixtureAdapter::decode),
      cursor.getDouble(9),
      cursor.getLong(10),
      cursor.getString(11)
    )
  }

  override fun selectAllCartItems(): Query<CartItem> = selectAllCartItems { id, item_id, item_ref,
      name, image, item, variation, addons, mixture, price, quantity, status ->
    CartItem(
      id,
      item_id,
      item_ref,
      name,
      image,
      item,
      variation,
      addons,
      mixture,
      price,
      quantity,
      status
    )
  }

  override fun <T : Any> selectAllKiosks(mapper: (
    ref_id: String?,
    coordinates: String?,
    description: String?,
    menu: JsonObject?,
    location: String?
  ) -> T): Query<T> = Query(1377373638, selectAllKiosks, driver, "AppDatabase.sq",
      "selectAllKiosks", "SELECT * FROM Kiosk") { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2),
      cursor.getString(3)?.let(database.KioskAdapter.menuAdapter::decode),
      cursor.getString(4)
    )
  }

  override fun selectAllKiosks(): Query<Kiosk> = selectAllKiosks { ref_id, coordinates, description,
      menu, location ->
    Kiosk(
      ref_id,
      coordinates,
      description,
      menu,
      location
    )
  }

  override fun <T : Any> selectAllAddOns(mapper: (
    id: Long,
    name: String?,
    addon: String?,
    price: Double?,
    sale_price: Double?
  ) -> T): Query<T> = Query(1086102319, selectAllAddOns, driver, "AppDatabase.sq",
      "selectAllAddOns", "SELECT * FROM AddOns") { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1),
      cursor.getString(2),
      cursor.getDouble(3),
      cursor.getDouble(4)
    )
  }

  override fun selectAllAddOns(): Query<AddOns> = selectAllAddOns { id, name, addon, price,
      sale_price ->
    AddOns(
      id,
      name,
      addon,
      price,
      sale_price
    )
  }

  override fun <T : Any> selectAllOrdersByStatus(status: Status?, mapper: (
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
  ) -> T): Query<T> = SelectAllOrdersByStatusQuery(status) { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1),
      cursor.getString(2)?.let(database.OrderItemAdapter.statusAdapter::decode),
      cursor.getString(3)?.let(database.OrderItemAdapter.line_itemsAdapter::decode),
      cursor.getDouble(4),
      cursor.getLong(5),
      cursor.getString(6)?.let(database.OrderItemAdapter.kioskAdapter::decode),
      cursor.getString(7),
      cursor.getString(8),
      cursor.getString(9),
      cursor.getString(10),
      cursor.getString(11)
    )
  }

  override fun selectAllOrdersByStatus(status: Status?): Query<OrderItem> =
      selectAllOrdersByStatus(status) { id, email_address, status_, line_items, total_price,
      total_quantity, kiosk, datetime_created, datetime_cancelled, datetime_paid,
      datetime_completed, pin ->
    OrderItem(
      id,
      email_address,
      status_,
      line_items,
      total_price,
      total_quantity,
      kiosk,
      datetime_created,
      datetime_cancelled,
      datetime_paid,
      datetime_completed,
      pin
    )
  }

  override fun <T : Any> selectAllCartItemsByStatus(status: String?, mapper: (
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
  ) -> T): Query<T> = SelectAllCartItemsByStatusQuery(status) { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getLong(1)!!,
      cursor.getString(2)!!,
      cursor.getString(3),
      cursor.getString(4),
      cursor.getString(5),
      cursor.getString(6),
      cursor.getString(7)?.let(database.CartItemAdapter.addonsAdapter::decode),
      cursor.getString(8)?.let(database.CartItemAdapter.mixtureAdapter::decode),
      cursor.getDouble(9),
      cursor.getLong(10),
      cursor.getString(11)
    )
  }

  override fun selectAllCartItemsByStatus(status: String?): Query<CartItem> =
      selectAllCartItemsByStatus(status) { id, item_id, item_ref, name, image, item, variation,
      addons, mixture, price, quantity, status_ ->
    CartItem(
      id,
      item_id,
      item_ref,
      name,
      image,
      item,
      variation,
      addons,
      mixture,
      price,
      quantity,
      status_
    )
  }

  override fun <T : Any> selectOrderItemById(id: Long, mapper: (
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
  ) -> T): Query<T> = SelectOrderItemByIdQuery(id) { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1),
      cursor.getString(2)?.let(database.OrderItemAdapter.statusAdapter::decode),
      cursor.getString(3)?.let(database.OrderItemAdapter.line_itemsAdapter::decode),
      cursor.getDouble(4),
      cursor.getLong(5),
      cursor.getString(6)?.let(database.OrderItemAdapter.kioskAdapter::decode),
      cursor.getString(7),
      cursor.getString(8),
      cursor.getString(9),
      cursor.getString(10),
      cursor.getString(11)
    )
  }

  override fun selectOrderItemById(id: Long): Query<OrderItem> = selectOrderItemById(id) { id_,
      email_address, status, line_items, total_price, total_quantity, kiosk, datetime_created,
      datetime_cancelled, datetime_paid, datetime_completed, pin ->
    OrderItem(
      id_,
      email_address,
      status,
      line_items,
      total_price,
      total_quantity,
      kiosk,
      datetime_created,
      datetime_cancelled,
      datetime_paid,
      datetime_completed,
      pin
    )
  }

  override fun lastInsertRowId(): Query<Long> = Query(368739997, lastInsertRowId, driver,
      "AppDatabase.sq", "lastInsertRowId", "SELECT last_insert_rowid()") { cursor ->
    cursor.getLong(0)!!
  }

  override fun insertMenuItem(
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
  ) {
    driver.execute(-859927980, """
    |INSERT INTO MenuItem(id, name, slug, description, price, salePrice, images, variations, addon_options, mixture_settings)
    |VALUES(?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
    """.trimMargin(), 10) {
      bindLong(1, id)
      bindString(2, name)
      bindString(3, slug)
      bindString(4, description)
      bindDouble(5, price)
      bindDouble(6, salePrice)
      bindString(7, images?.let { database.MenuItemAdapter.imagesAdapter.encode(it) })
      bindString(8, variations?.let { database.MenuItemAdapter.variationsAdapter.encode(it) })
      bindString(9, addon_options?.let { database.MenuItemAdapter.addon_optionsAdapter.encode(it) })
      bindString(10, mixture_settings?.let {
          database.MenuItemAdapter.mixture_settingsAdapter.encode(it) })
    }
    notifyQueries(-859927980, {database.appDatabaseQueries.selectAllMenuItems})
  }

  override fun insertFavoritesItem(
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
  ) {
    driver.execute(700908040, """
    |INSERT INTO FavoritesItem(id, name, slug, description, price, salePrice, images, variations, addon_options, mixture_settings)
    |VALUES(?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
    """.trimMargin(), 10) {
      bindLong(1, id)
      bindString(2, name)
      bindString(3, slug)
      bindString(4, description)
      bindDouble(5, price)
      bindDouble(6, salePrice)
      bindString(7, images?.let { database.FavoritesItemAdapter.imagesAdapter.encode(it) })
      bindString(8, variations?.let { database.FavoritesItemAdapter.variationsAdapter.encode(it) })
      bindString(9, addon_options?.let {
          database.FavoritesItemAdapter.addon_optionsAdapter.encode(it) })
      bindString(10, mixture_settings?.let {
          database.FavoritesItemAdapter.mixture_settingsAdapter.encode(it) })
    }
    notifyQueries(700908040, {database.appDatabaseQueries.selectAllFavoritesItems +
        database.appDatabaseQueries.selectFavoritesById})
  }

  override fun insertCartItem(
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
  ) {
    driver.execute(-249616491, """
    |INSERT INTO CartItem(item_id, item_ref, name, image, item, variation, addons, mixture, price, quantity, status)
    |VALUES(?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
    """.trimMargin(), 11) {
      bindLong(1, item_id)
      bindString(2, item_ref)
      bindString(3, name)
      bindString(4, image)
      bindString(5, item)
      bindString(6, variation)
      bindString(7, addons?.let { database.CartItemAdapter.addonsAdapter.encode(it) })
      bindString(8, mixture?.let { database.CartItemAdapter.mixtureAdapter.encode(it) })
      bindDouble(9, price)
      bindLong(10, quantity)
      bindString(11, status)
    }
    notifyQueries(-249616491, {database.appDatabaseQueries.selectCartItemById +
        database.appDatabaseQueries.selectAllCartItems +
        database.appDatabaseQueries.selectAllCartItemsByStatus})
  }

  override fun insertKiosk(
    ref_id: String?,
    coordinates: String?,
    description: String?,
    menu: JsonObject?,
    location: String?
  ) {
    driver.execute(30394087, """
    |INSERT INTO Kiosk(ref_id, coordinates, description, menu, location)
    |VALUES(?, ?, ?, ?, ?)
    """.trimMargin(), 5) {
      bindString(1, ref_id)
      bindString(2, coordinates)
      bindString(3, description)
      bindString(4, menu?.let { database.KioskAdapter.menuAdapter.encode(it) })
      bindString(5, location)
    }
    notifyQueries(30394087, {database.appDatabaseQueries.selectAllKiosks})
  }

  override fun insertAddons(
    id: Long?,
    name: String?,
    addon: String?,
    price: Double?,
    sale_price: Double?
  ) {
    driver.execute(650976245, """
    |INSERT INTO AddOns(id, name, addon, price, sale_price)
    |VALUES(?, ?, ?, ?, ?)
    """.trimMargin(), 5) {
      bindLong(1, id)
      bindString(2, name)
      bindString(3, addon)
      bindDouble(4, price)
      bindDouble(5, sale_price)
    }
    notifyQueries(650976245, {database.appDatabaseQueries.selectAllAddOns})
  }

  override fun insertOrder(
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
  ) {
    driver.execute(34345292, """
    |INSERT INTO OrderItem(id, email_address, status, line_items, total_price, total_quantity, kiosk, datetime_created, datetime_cancelled, datetime_paid, datetime_completed, pin)
    |VALUES(?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
    """.trimMargin(), 12) {
      bindLong(1, id)
      bindString(2, email_address)
      bindString(3, status?.let { database.OrderItemAdapter.statusAdapter.encode(it) })
      bindString(4, line_items?.let { database.OrderItemAdapter.line_itemsAdapter.encode(it) })
      bindDouble(5, total_price)
      bindLong(6, total_quantity)
      bindString(7, kiosk?.let { database.OrderItemAdapter.kioskAdapter.encode(it) })
      bindString(8, datetime_created)
      bindString(9, datetime_cancelled)
      bindString(10, datetime_paid)
      bindString(11, datetime_completed)
      bindString(12, pin)
    }
    notifyQueries(34345292, {database.appDatabaseQueries.selectAllOrdersByStatus +
        database.appDatabaseQueries.selectOrderItemById})
  }

  override fun removeAllMenuItems() {
    driver.execute(-1869673843, """DELETE FROM MenuItem""", 0)
    notifyQueries(-1869673843, {database.appDatabaseQueries.selectAllMenuItems})
  }

  override fun removeAllFavorites() {
    driver.execute(-2107830461, """DELETE FROM FavoritesItem""", 0)
    notifyQueries(-2107830461, {database.appDatabaseQueries.selectAllFavoritesItems +
        database.appDatabaseQueries.selectFavoritesById})
  }

  override fun removeFavoriteById(id: Long) {
    driver.execute(-891804389, """DELETE FROM FavoritesItem WHERE id = ?""", 1) {
      bindLong(1, id)
    }
    notifyQueries(-891804389, {database.appDatabaseQueries.selectAllFavoritesItems +
        database.appDatabaseQueries.selectFavoritesById})
  }

  override fun removeAllCartItems() {
    driver.execute(-129886868, """DELETE FROM CartItem""", 0)
    notifyQueries(-129886868, {database.appDatabaseQueries.selectCartItemById +
        database.appDatabaseQueries.selectAllCartItems +
        database.appDatabaseQueries.selectAllCartItemsByStatus})
  }

  override fun removeAllCartItemById(id: Long) {
    driver.execute(304507993, """DELETE FROM CartItem WHERE id = ?""", 1) {
      bindLong(1, id)
    }
    notifyQueries(304507993, {database.appDatabaseQueries.selectCartItemById +
        database.appDatabaseQueries.selectAllCartItems +
        database.appDatabaseQueries.selectAllCartItemsByStatus})
  }

  override fun removeOrderItemByID(id: Long) {
    driver.execute(2025897702, """DELETE FROM OrderItem WHERE id = ?""", 1) {
      bindLong(1, id)
    }
    notifyQueries(2025897702, {database.appDatabaseQueries.selectAllOrdersByStatus +
        database.appDatabaseQueries.selectOrderItemById})
  }

  override fun removeAllKiosks() {
    driver.execute(-262356162, """DELETE FROM Kiosk""", 0)
    notifyQueries(-262356162, {database.appDatabaseQueries.selectAllKiosks})
  }

  override fun removeAllAddOns() {
    driver.execute(-553627481, """DELETE FROM AddOns""", 0)
    notifyQueries(-553627481, {database.appDatabaseQueries.selectAllAddOns})
  }

  override fun updateOrderStatus(status: Status?, id: Long) {
    driver.execute(82625614, """UPDATE OrderItem SET status = ? WHERE id = ?""", 2) {
      bindString(1, status?.let { database.OrderItemAdapter.statusAdapter.encode(it) })
      bindLong(2, id)
    }
    notifyQueries(82625614, {database.appDatabaseQueries.selectAllOrdersByStatus +
        database.appDatabaseQueries.selectOrderItemById})
  }

  override fun setOrderDateCancelled(datetime_cancelled: String?, id: Long) {
    driver.execute(1483542798, """UPDATE OrderItem SET datetime_cancelled = ? WHERE id = ?""", 2) {
      bindString(1, datetime_cancelled)
      bindLong(2, id)
    }
    notifyQueries(1483542798, {database.appDatabaseQueries.selectAllOrdersByStatus +
        database.appDatabaseQueries.selectOrderItemById})
  }

  override fun setOrderDatePaid(datetime_paid: String?, id: Long) {
    driver.execute(-595404561, """UPDATE OrderItem SET datetime_paid = ? WHERE id = ?""", 2) {
      bindString(1, datetime_paid)
      bindLong(2, id)
    }
    notifyQueries(-595404561, {database.appDatabaseQueries.selectAllOrdersByStatus +
        database.appDatabaseQueries.selectOrderItemById})
  }

  override fun setOrderDateCompleted(datetime_completed: String?, id: Long) {
    driver.execute(-395977208, """UPDATE OrderItem SET datetime_completed = ? WHERE id = ?""", 2) {
      bindString(1, datetime_completed)
      bindLong(2, id)
    }
    notifyQueries(-395977208, {database.appDatabaseQueries.selectAllOrdersByStatus +
        database.appDatabaseQueries.selectOrderItemById})
  }

  override fun updateCartItemStatus(status: String?, id: Long) {
    driver.execute(-31933961, """UPDATE CartItem SET status = ? WHERE id = ?""", 2) {
      bindString(1, status)
      bindLong(2, id)
    }
    notifyQueries(-31933961, {database.appDatabaseQueries.selectCartItemById +
        database.appDatabaseQueries.selectAllCartItems +
        database.appDatabaseQueries.selectAllCartItemsByStatus})
  }

  private inner class SelectCartItemByIdQuery<out T : Any>(
    @JvmField
    val id: Long,
    mapper: (SqlCursor) -> T
  ) : Query<T>(selectCartItemById, mapper) {
    override fun execute(): SqlCursor = driver.executeQuery(-398112054,
        """SELECT * FROM CartItem WHERE id = ?""", 1) {
      bindLong(1, id)
    }

    override fun toString(): String = "AppDatabase.sq:selectCartItemById"
  }

  private inner class SelectFavoritesByIdQuery<out T : Any>(
    @JvmField
    val id: Long,
    mapper: (SqlCursor) -> T
  ) : Query<T>(selectFavoritesById, mapper) {
    override fun execute(): SqlCursor = driver.executeQuery(-792038044,
        """SELECT * FROM FavoritesItem WHERE id = ?""", 1) {
      bindLong(1, id)
    }

    override fun toString(): String = "AppDatabase.sq:selectFavoritesById"
  }

  private inner class SelectAllOrdersByStatusQuery<out T : Any>(
    @JvmField
    val status: Status?,
    mapper: (SqlCursor) -> T
  ) : Query<T>(selectAllOrdersByStatus, mapper) {
    override fun execute(): SqlCursor = driver.executeQuery(null,
        """SELECT * FROM OrderItem WHERE status ${ if (status == null) "IS" else "=" } ? ORDER BY id DESC""",
        1) {
      bindString(1, status?.let { database.OrderItemAdapter.statusAdapter.encode(it) })
    }

    override fun toString(): String = "AppDatabase.sq:selectAllOrdersByStatus"
  }

  private inner class SelectAllCartItemsByStatusQuery<out T : Any>(
    @JvmField
    val status: String?,
    mapper: (SqlCursor) -> T
  ) : Query<T>(selectAllCartItemsByStatus, mapper) {
    override fun execute(): SqlCursor = driver.executeQuery(null,
        """SELECT * FROM CartItem WHERE status ${ if (status == null) "IS" else "=" } ? ORDER BY id DESC""",
        1) {
      bindString(1, status)
    }

    override fun toString(): String = "AppDatabase.sq:selectAllCartItemsByStatus"
  }

  private inner class SelectOrderItemByIdQuery<out T : Any>(
    @JvmField
    val id: Long,
    mapper: (SqlCursor) -> T
  ) : Query<T>(selectOrderItemById, mapper) {
    override fun execute(): SqlCursor = driver.executeQuery(-1228634738,
        """SELECT * FROM OrderItem WHERE id = ?""", 1) {
      bindLong(1, id)
    }

    override fun toString(): String = "AppDatabase.sq:selectOrderItemById"
  }
}
