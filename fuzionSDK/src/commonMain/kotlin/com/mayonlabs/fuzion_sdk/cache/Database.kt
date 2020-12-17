package com.mayonlabs.fuzion_sdk.cache

import com.mayonlabs.fuzion.fuzion_sdk.entity.*
import com.mayonlabs.fuzion.fuzion_sdk.entity.CartItem
import com.mayonlabs.fuzion.fuzion_sdk.entity.FavoritesItem
import com.mayonlabs.fuzion.fuzion_sdk.entity.Kiosk
import com.mayonlabs.fuzion.fuzion_sdk.entity.MenuItem
import com.mayonlabs.fuzion.fuzion_sdk.entity.Order
import com.squareup.sqldelight.ColumnAdapter
import io.ktor.util.date.*
import kotlinx.serialization.decodeFromString
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonObject
import kotlin.random.Random

internal class Database(databaseDriverFactory: DatabaseDriverFactory) {

    private val imagesAdapter = object : ColumnAdapter<List<String>, String> {
        override fun decode(databaseValue: String) = databaseValue.split(",")
        override fun encode(value: List<String>) = value.joinToString(separator = ",")
    }

    private val variationsAdapter = object : ColumnAdapter<List<String>, String> {
        override fun decode(databaseValue: String) = databaseValue.split(",")
        override fun encode(value: List<String>) = value.joinToString(separator = ",")
    }

    private val addonOptionsAdapter = object : ColumnAdapter<List<AddOn>, String> {
        override fun decode(databaseValue: String): List<AddOn> = Json.decodeFromString(databaseValue)
        override fun encode(value: List<AddOn>): String = Json.encodeToString(value)
    }

    private val mixtureSettingsAdapter = object : ColumnAdapter<List<MixtureSetting>, String> {
        override fun decode(databaseValue: String): List<MixtureSetting> = Json.decodeFromString(databaseValue)
        override fun encode(value: List<MixtureSetting>): String = Json.encodeToString(value)
    }

    private val addonOptionsStringAdapter = object : ColumnAdapter<List<String>, String> {
        override fun decode(databaseValue: String): List<String> = Json.decodeFromString(databaseValue)
        override fun encode(value: List<String>): String = Json.encodeToString(value)
    }

    private val mixtureSettingsStringAdapter = object : ColumnAdapter<List<String>, String> {
        override fun decode(databaseValue: String): List<String> = Json.decodeFromString(databaseValue)
        override fun encode(value: List<String>): String = Json.encodeToString(value)
    }

    private val mixtureAdapter = object : ColumnAdapter<JsonObject, String> {
        override fun decode(databaseValue: String): JsonObject = Json.decodeFromString(databaseValue)
        override fun encode(value: JsonObject): String = Json.encodeToString(value)
    }

    private val menuAdapter = object : ColumnAdapter<JsonObject, String> {
        override fun decode(databaseValue: String): JsonObject = Json.decodeFromString(databaseValue)
        override fun encode(value: JsonObject): String = Json.encodeToString(value)
    }

    private val lineItemAdapter = object : ColumnAdapter<List<CartItem>, String> {
        override fun decode(databaseValue: String): List<CartItem> = Json.decodeFromString(databaseValue)
        override fun encode(value: List<CartItem>): String = Json.encodeToString(value)
    }

    private val kioskOrderAdapter = object : ColumnAdapter<Kiosk, String> {
        override fun decode(databaseValue: String): Kiosk = Json.decodeFromString(databaseValue)
        override fun encode(value: Kiosk): String = Json.encodeToString(value)
    }

    private val orderStatusAdapter = object : ColumnAdapter<Status, String> {
        override fun decode(databaseValue: String): Status = Json.decodeFromString(databaseValue)
        override fun encode(value: Status): String = Json.encodeToString(value)
    }

    private val orderAdapter = com.mayonlabs.fuzion.fuzion_sdk.cache.OrderItem.Adapter(orderStatusAdapter, lineItemAdapter, kioskOrderAdapter)
    private val kioskAdapter = com.mayonlabs.fuzion.fuzion_sdk.cache.Kiosk.Adapter(menuAdapter)
    private val cartItemAdapter = com.mayonlabs.fuzion.fuzion_sdk.cache.CartItem.Adapter(addonOptionsStringAdapter, mixtureSettingsStringAdapter)
    private val favoritesItemAdapter = com.mayonlabs.fuzion.fuzion_sdk.cache.FavoritesItem.Adapter(imagesAdapter, variationsAdapter, addonOptionsAdapter, mixtureSettingsAdapter)
    private val menuItemAdapter = com.mayonlabs.fuzion.fuzion_sdk.cache.MenuItem.Adapter(imagesAdapter, variationsAdapter, addonOptionsAdapter, mixtureSettingsAdapter)
    private val database = AppDatabase(databaseDriverFactory.createDriver(), cartItemAdapter, favoritesItemAdapter, kioskAdapter, menuItemAdapter, orderAdapter)
    private val dbQuery = database.appDatabaseQueries

//    internal fun clearDatabase() {
//        dbQuery.transaction {
//            dbQuery.removeAllMenuItems()
//        }
//    }

    internal fun getAllMenuItems(): List<MenuItem> {
        return dbQuery.selectAllMenuItems(::mapMenuItemSelecting).executeAsList()
    }

    internal fun getAllFavoritesItem(): List<FavoritesItem> {
        return dbQuery.selectAllFavoritesItems(::mapFavoritesItemSelecting).executeAsList()
    }

    internal fun getAllCartItems(): List<CartItem> {
        return dbQuery.selectAllCartItems(::mapCartItemSelecting).executeAsList()
    }

    internal fun getAllKiosks(): List<Kiosk> {
        return dbQuery.selectAllKiosks(::mapKioskSelecting).executeAsList()
    }

    internal fun getAllCartItemsByStatus(status: String): List<CartItem> {
        return dbQuery.selectAllCartItemsByStatus(status, ::mapCartItemSelecting).executeAsList()
    }

    internal fun getAllOrdersByStatus(status: Status): List<Order> {
        return dbQuery.selectAllOrdersByStatus(status, ::mapOrderSelecting).executeAsList()
    }

    internal fun selectOrderById(id: Long): Order {
        return dbQuery.selectOrderItemById(id, ::mapOrderSelecting).executeAsOne()
    }

    internal fun selectFavoriteById(id: Long): FavoritesItem? {
        return dbQuery.selectFavoritesById(id, ::mapFavoritesItemSelecting).executeAsOneOrNull()
    }

//    private fun getAddonOptionById(id: Int): AddonOption? {
//        return dbQuery.selectAddonOptionById(id.toLong(), ::mapAddonOptionSelecting).executeAsOne()
//    }
//
//    private fun getMixtureSettingById(id: Int): MixtureSetting? {
//        return dbQuery.selectMixtureSettingById(id.toLong(), ::mapMixtureSettingSelecting).executeAsOne()
//    }

    private fun mapFavoritesItemSelecting(
        id: Long,
        name: String,
        slug: String?,
        description: String?,
        price: Double?,
        salePrice: Double?,
        images: List<String>?,
        variations: List<String>?,
        addonOptions: List<AddOn>?,
        mixtureSettings: List<MixtureSetting>?
    ): FavoritesItem {
        return FavoritesItem(
            id = id.toInt(),
            name = name,
            slug = slug,
            description = description,
            price = price,
            salePrice = salePrice,
            images = images,
            variations = variations,
            addonOptions = addonOptions,
            mixtureSettings = mixtureSettings
        )
    }


    private fun mapOrderSelecting(
        id: Long,
        email_address: String?,
        status: Status?,
        line_items: List<CartItem>?,
        total_price: Double?,
        total_quantity: Long?,
        kiosk: Kiosk?,
        datetime_created: String?,
        datetime_cancelled: String?,
        datetime_paid: String?,
        datetime_completed: String?,
        pin: String?
    ): Order {
        return Order(
            id = id.toInt(),
            emailAddress = email_address,
            status = status,
            lineItems = line_items,
            totalPrice = total_price,
            totalQuantity = total_quantity!!.toInt(),
            kiosk = kiosk,
            datetimeCreated = datetime_created,
            datetimePaid = datetime_paid,
            datetimeCancelled = datetime_cancelled,
            datetimeCompeted = datetime_completed,
            pin = pin
        )
    }

    private fun mapKioskSelecting(
        ref_id: String?,
        coordinates: String?,
        description: String?,
        menu: JsonObject?,
        location: String?
    ): Kiosk {
        return Kiosk(
            refId = ref_id,
            description = description,
            coordinates = coordinates,
            menu = menu,
            location = location
        )
    }

    private fun mapCartItemSelecting(
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
    ): CartItem {
        return CartItem(
                id = id.toInt(),
                itemId = item_id.toInt(),
                itemRef = item_ref,
                name = name,
                image = image,
                item = item,
                variation = variation,
                addons = addons,
                mixture = mixture,
                price = price,
                quantity = quantity?.toInt(),
                status = status
            )
    }

//    private fun mapMixtureSettingSelecting(
//        id: Long,
//        name: String,
//        slug: String?,
//        description: String?,
//        defaultValue: Int?,
//        maxValue: Int?
//    ): MixtureSetting {
//        return MixtureSetting(
//            id = id.toInt(),
//            name = name,
//            slug = slug,
//            description = description,
//            defaultValue = defaultValue,
//            maxValue = maxValue
//        )
//    }
//
//    private fun mapAddonOptionSelecting(
//        id: Long,
//        name: String,
//        addon: String?,
//        description: String?,
//        price: Double?,
//        salePrice: Double?
//    ): AddonOption {
//        return AddonOption(
//            id = id.toInt(),
//            name = name,
//            addon = addon,
//            description = description,
//            price = price,
//            salePrice = salePrice
//        )
//    }

    private fun mapMenuItemSelecting(
        id: Long,
        name: String,
        slug: String?,
        description: String?,
        price: Double?,
        salePrice: Double?,
        images: List<String>?,
        variations: List<String>?,
        addonOptions: List<AddOn>?,
        mixtureSettings: List<MixtureSetting>?
    ): MenuItem {
//        val addonOptionsList = arrayListOf<AddonOption>()
//        val mixtureSettingsList = arrayListOf<MixtureSetting>()

//        if(!addonOptions.isNullOrEmpty()) {
//            for(addonId in addonOptions) {
//                val res = getAddonOptionById(addonId)
//                if(res != null) addonOptionsList.add(res)
//            }
//        }
//
//        if(!mixtureSettings.isNullOrEmpty()) {
//            for(mixtureSettingId in mixtureSettings) {
//                val res = getMixtureSettingById(mixtureSettingId)
//                if(res != null) mixtureSettingsList.add(res)
//            }
//        }

        return MenuItem(
                id = id.toInt(),
                name = name,
                slug = slug,
                description = description,
                price = price,
                salePrice = salePrice,
                images = images,
                variations = variations,
                addonOptions = addonOptions,
                mixtureSettings = mixtureSettings
        )
    }

    internal fun createMenuItems(items: List<MenuItem>) {
        dbQuery.transaction {
            items.forEach { menuItem ->
//                createAddOnnOptions(menuItem.addonOptions)
//                createMixtureSettings(menuItem.mixtureSettings)
                insertMenuItem(menuItem)
            }
        }
    }

//    private fun createAddOnnOptions(items: List<AddonOption>?) {
//        dbQuery.transaction {
//            items?.forEach { item ->
//                dbQuery.removeAddonOptionById(item.id.toLong())
//                insertAddonOption(item)
//            }
//        }
//    }
//
//    private fun createMixtureSettings(items: List<MixtureSetting>?) {
//        dbQuery.transaction {
//            items?.forEach { item ->
//                dbQuery.removeMixtureSettingById(item.id.toLong())
//                insertMixtureSettings(item)
//            }
//        }
//    }

    private fun insertMenuItem(item: MenuItem) {
//        val addonOptions = arrayListOf<Int>()
//        val mixtureSettings = arrayListOf<Int>()
//
//        if(item.addonOptions?.isNotEmpty()!!) {
//            for(addonOption in item.addonOptions) {
//                addonOptions.add(addonOption.id)
//            }
//        }
//
//        if(item.mixtureSettings?.isNotEmpty()!!) {
//            for(mixtureSetting in item.mixtureSettings) {
//                mixtureSettings.add(mixtureSetting.id)
//            }
//        }

        dbQuery.insertMenuItem(
                id = item.id.toLong(),
                name = item.name,
                slug = item.slug,
                description = item.description,
                price = item.price,
                salePrice = item.salePrice,
                images = item.images,
                variations = item.variations,
                addon_options = item.addonOptions,
                mixture_settings = item.mixtureSettings
        )
    }

//    private fun insertAddonOption(item: AddonOption) {
//        dbQuery.insertAddonOptions(
//            id = item.id.toLong(),
//            name = item.name,
//            addon = item.addon,
//            description = item.description,
//            price = item.price,
//            sale_price = item.salePrice
//        )
//    }
//
//    private fun insertMixtureSettings(item: MixtureSetting) {
//        dbQuery.insertMixtureSettings(
//            id = item.id.toLong(),
//            name = item.name,
//            slug = item.slug,
//            description = item.description,
//            default_value = item.defaultValue,
//            max_value = item.maxValue
//        )
//    }

    internal fun removeFavoritesById(id: Long) {
        dbQuery.transaction {
            dbQuery.removeFavoriteById(id)
        }
    }

    internal fun removeOrderItemById(id: Long) {
        dbQuery.transaction {
            dbQuery.removeOrderItemByID(id)
        }
    }

    internal fun removeAllMenuItems() {
        dbQuery.transaction {
            dbQuery.removeAllMenuItems()
        }
    }

    internal fun removeFromCart(id: Long) {
        dbQuery.transaction {
            dbQuery.removeAllCartItemById(id)
        }
    }

    internal fun removeAllCartItem() {
        dbQuery.transaction {
            dbQuery.removeAllCartItems()
        }
    }

    internal fun removeAllKiosks() {
        dbQuery.transaction {
            dbQuery.removeAllKiosks()
        }
    }

    internal fun createCartItem(item: CartItem): CartItem {
        lateinit var myItem: CartItem
        dbQuery.transaction {
            myItem = insertCartItem(item)
        }
        return myItem
    }

    internal fun createKiosk(items: List<Kiosk>) {
        dbQuery.transaction {
            items.forEach { item ->
                insertKiosk(item)
            }
        }
    }

    internal fun createOrder(item: Order): Long {
        var id:Long = -1
        dbQuery.transaction {
            id = insertOrder(item)
        }
        return id
    }

    private fun insertOrder(item: Order): Long {
        val dateTime = "${GMTDate().month.value} ${GMTDate().dayOfMonth}, ${GMTDate().year} ${GMTDate().hours}:${GMTDate().minutes}"
        dbQuery.insertOrder(
            id = item.id?.toLong(),
            email_address = item.emailAddress,
            status = item.status,
            line_items = item.lineItems,
            total_price = item.totalPrice,
            total_quantity = item.totalQuantity?.toLong(),
            kiosk = item.kiosk,
            datetime_created = dateTime,
            datetime_cancelled = "",
            datetime_paid = "",
            datetime_completed  = "",
            pin = Random.nextLong(10000, 99999).toString()
        )

        return dbQuery.lastInsertRowId().executeAsOne()
    }

    fun updateOrderStatus(status: Status, id: Long) {
        dbQuery.updateOrderStatus(status, id)
        val dateTime = "${GMTDate().month.value} ${GMTDate().dayOfMonth}, ${GMTDate().year} ${GMTDate().hours}:${GMTDate().minutes}"
        if(status == Status.CANCELLED) {
            updateOrderDateCancelled(dateTime, id)
        } else if(status == Status.COMPLETED) {
            updateOrderDateCompleted(dateTime, id)
        } else if(status == Status.PAID) {
            updateOrderDatePaid(dateTime, id)
        }
    }

    private fun updateOrderDateCancelled(datetime: String, id: Long) {
        dbQuery.setOrderDateCancelled(datetime, id)
    }

    private fun updateOrderDateCompleted(datetime: String, id: Long) {
        dbQuery.setOrderDateCompleted(datetime, id)
    }

    private fun updateOrderDatePaid(datetime: String, id: Long) {
        dbQuery.setOrderDatePaid(datetime, id)
    }

    fun updateCartItem(status: String, id: Long) {
        dbQuery.updateCartItemStatus(status, id)
    }

    fun createFavorites(item: com.mayonlabs.fuzion.fuzion_sdk.entity.FavoritesItem) {
        dbQuery.transaction {
            insertFavorite(item)
        }
    }

    private fun insertFavorite(item: com.mayonlabs.fuzion.fuzion_sdk.entity.FavoritesItem) {
        dbQuery.insertFavoritesItem(
            id = item.id.toLong(),
            name = item.name,
            slug = item.slug,
            description = item.description,
            price = item.price,
            salePrice = item.salePrice,
            images = item.images,
            variations = item.variations,
            addon_options = item.addonOptions,
            mixture_settings = item.mixtureSettings
        )
    }

    private fun insertKiosk(item: Kiosk) {
        dbQuery.insertKiosk(
            ref_id  = item.refId,
            coordinates = item.coordinates,
            description = item.description,
            menu = item.menu!!,
            location = item.location
        )
    }

    private fun insertCartItem(item: CartItem): CartItem {
        dbQuery.insertCartItem(
                item_id = item.itemId.toLong(),
                item_ref = item.itemRef,
                name = item.name,
                image = item.image,
                item = item.item,
                variation = item.variation,
                addons = item.addons,
                mixture = item.mixture, //Json.decodeFromString(item.mixture!!),
                price = item.price,
                quantity = item.quantity?.toLong(),
                status = item.status
            )

        val myId =  dbQuery.lastInsertRowId().executeAsOne()
        return dbQuery.selectCartItemById(myId, ::mapCartItemSelecting).executeAsOne()
    }

}