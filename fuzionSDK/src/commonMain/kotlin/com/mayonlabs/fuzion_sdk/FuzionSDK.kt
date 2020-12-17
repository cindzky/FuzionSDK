package com.mayonlabs.fuzion_sdk

import com.mayonlabs.fuzion.fuzion_sdk.cache.Database
import com.mayonlabs.fuzion.fuzion_sdk.cache.DatabaseDriverFactory
import com.mayonlabs.fuzion.fuzion_sdk.entity.*
import com.mayonlabs.fuzion.fuzion_sdk.network.FuzionApi

class FuzionSDK (databaseDriverFactory: DatabaseDriverFactory) {
    private val database = Database(databaseDriverFactory)
    private val api = FuzionApi()

    @Throws(Exception::class) suspend fun getMenuItems(forceReload: Boolean): List<MenuItem> {
        val cachedLaunches = database.getAllMenuItems()
        return if (cachedLaunches.isNotEmpty() && !forceReload) {
            cachedLaunches
        } else {
            api.getAllMenuItems().also {
                if(it.isNotEmpty()) {
                    database.removeAllMenuItems()
                    database.createMenuItems(it)
                }
            }
        }
    }

    @Throws(Exception::class) suspend fun getAllFavoritesItem(): List<FavoritesItem> {
        return database.getAllFavoritesItem()
    }

    @Throws(Exception::class) suspend fun getCartItems(): List<CartItem> {
        return database.getAllCartItems()
    }

    @Throws(Exception::class) suspend fun addToCart(item: CartItem): CartItem {
        return database.createCartItem(item)
    }

    @Throws(Exception::class) suspend fun removeFromCart(id: Long) {
        database.removeFromCart(id)
    }

    @Throws(Exception::class) suspend fun addOrder(item: Order): Long {
        return database.createOrder(item)
    }

    @Throws(Exception::class) suspend fun updateOrderStatus(status: Status, id: Long) {
        database.updateOrderStatus(status, id)
    }

    @Throws(Exception::class) suspend fun getOrderByStatus(status: Status): List<Order> {
        return database.getAllOrdersByStatus(status)
    }

    @Throws(Exception::class) suspend fun updateCartItemStatus(status: String, id: Long) {
        database.updateCartItem(status, id)
    }

    @Throws(Exception::class) suspend fun getAllCartItemsByStatus(status: String): List<CartItem>  {
        return database.getAllCartItemsByStatus(status)
    }

    @Throws(Exception::class) suspend fun getOrderById(id: Long): Order  {
        return database.selectOrderById(id)
    }

    @Throws(Exception::class) suspend fun deleteOrderById(id: Long) {
        database.removeOrderItemById(id)
    }

    @Throws(Exception::class) suspend fun addFavorites(item: FavoritesItem) {
        database.createFavorites(item)
    }

    @Throws(Exception::class) suspend fun selectFavoriteById(id: Long): FavoritesItem? {
        return database.selectFavoriteById(id)
    }

    @Throws(Exception::class) suspend fun removefavoriteById(id: Long) {
        database.removeFavoritesById(id)
    }

    @Throws(Exception::class) suspend fun getAllKiosks(forceReload: Boolean): List<Kiosk> {
        val cachedLaunches = database.getAllKiosks()
        return if (cachedLaunches.isNotEmpty() && !forceReload) {
            cachedLaunches
        } else {
            api.getAllKiosks().also {
                database.removeAllKiosks()
                database.createKiosk(it)
            }
        }
    }
}
