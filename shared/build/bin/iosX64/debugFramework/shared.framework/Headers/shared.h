#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedDatabaseDriverFactory, SharedFavoritesItem, SharedKotlinUnit, SharedOrder, SharedCartItem, SharedKiosk, SharedMenuItem, SharedStatus, SharedAddOns, SharedCartItem_Adapter, SharedFavoritesItem_Adapter, SharedKiosk_Adapter, SharedMenuItem_Adapter, SharedOrderItemAdapter, SharedAddOn, SharedMixtureSetting, SharedKotlinx_serialization_coreJsonElement, SharedRuntimeQuery<__covariant RowType>, SharedCartItem_, SharedFavoritesItem_, SharedKiosk_, SharedMenuItem_, SharedOrderItem, SharedAddCartItem, SharedAddCartItems, SharedKotlinEnum<E>, SharedKotlinThrowable, SharedKotlinArray<T>, SharedRuntimeTransacterTransaction, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinByteArray, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing, SharedKotlinx_serialization_coreUpdateMode, SharedKotlinByteIterator;

@protocol SharedAppDatabaseQueries, SharedRuntimeTransactionWithoutReturn, SharedRuntimeTransactionWithReturn, SharedRuntimeTransacter, SharedAppDatabase, SharedRuntimeSqlDriver, SharedRuntimeSqlDriverSchema, SharedRuntimeColumnAdapter, SharedKotlinx_serialization_coreKSerializer, SharedKotlinComparable, SharedRuntimeTransactionCallbacks, SharedRuntimeSqlPreparedStatement, SharedRuntimeSqlCursor, SharedRuntimeCloseable, SharedRuntimeQueryListener, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinIterator, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuzionSDK")))
@interface SharedFuzionSDK : SharedBase
- (instancetype)initWithDatabaseDriverFactory:(SharedDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("init(databaseDriverFactory:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFavoritesItem:(SharedFavoritesItem *)item completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFavorites(item:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addOrderItem:(SharedOrder *)item completionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addOrder(item:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addToCartItem:(SharedCartItem *)item completionHandler:(void (^)(SharedCartItem * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addToCart(item:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteOrderByIdId:(int64_t)id completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteOrderById(id:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllCartItemsByStatusStatus:(NSString *)status completionHandler:(void (^)(NSArray<SharedCartItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllCartItemsByStatus(status:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllFavoritesItemWithCompletionHandler:(void (^)(NSArray<SharedFavoritesItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllFavoritesItem(completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllKiosksForceReload:(BOOL)forceReload completionHandler:(void (^)(NSArray<SharedKiosk *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllKiosks(forceReload:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCartItemsWithCompletionHandler:(void (^)(NSArray<SharedCartItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCartItems(completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMenuItemsForceReload:(BOOL)forceReload completionHandler:(void (^)(NSArray<SharedMenuItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMenuItems(forceReload:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOrderByIdId:(int64_t)id completionHandler:(void (^)(SharedOrder * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOrderById(id:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOrderByStatusStatus:(SharedStatus *)status completionHandler:(void (^)(NSArray<SharedOrder *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOrderByStatus(status:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFromCartId:(int64_t)id completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFromCart(id:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removefavoriteByIdId:(int64_t)id completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removefavoriteById(id:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)selectFavoriteByIdId:(int64_t)id completionHandler:(void (^)(SharedFavoritesItem * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("selectFavoriteById(id:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateCartItemStatusStatus:(NSString *)status id:(int64_t)id completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateCartItemStatus(status:id:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateOrderStatusStatus:(SharedStatus *)status id:(int64_t)id completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateOrderStatus(status:id:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOns")))
@interface SharedAddOns : SharedBase
- (instancetype)initWithId:(int64_t)id name:(NSString * _Nullable)name addon:(NSString * _Nullable)addon price:(SharedDouble * _Nullable)price sale_price:(SharedDouble * _Nullable)sale_price __attribute__((swift_name("init(id:name:addon:price:sale_price:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedAddOns *)doCopyId:(int64_t)id name:(NSString * _Nullable)name addon:(NSString * _Nullable)addon price:(SharedDouble * _Nullable)price sale_price:(SharedDouble * _Nullable)sale_price __attribute__((swift_name("doCopy(id:name:addon:price:sale_price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable addon __attribute__((swift_name("addon")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedDouble * _Nullable sale_price __attribute__((swift_name("sale_price")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol SharedRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AppDatabase")))
@protocol SharedAppDatabase <SharedRuntimeTransacter>
@required
@property (readonly) id<SharedAppDatabaseQueries> appDatabaseQueries __attribute__((swift_name("appDatabaseQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDatabaseCompanion")))
@interface SharedAppDatabaseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedAppDatabase>)invokeDriver:(id<SharedRuntimeSqlDriver>)driver CartItemAdapter:(SharedCartItem_Adapter *)CartItemAdapter FavoritesItemAdapter:(SharedFavoritesItem_Adapter *)FavoritesItemAdapter KioskAdapter:(SharedKiosk_Adapter *)KioskAdapter MenuItemAdapter:(SharedMenuItem_Adapter *)MenuItemAdapter OrderItemAdapter:(SharedOrderItemAdapter *)OrderItemAdapter __attribute__((swift_name("invoke(driver:CartItemAdapter:FavoritesItemAdapter:KioskAdapter:MenuItemAdapter:OrderItemAdapter:)")));
@property (readonly) id<SharedRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("AppDatabaseQueries")))
@protocol SharedAppDatabaseQueries <SharedRuntimeTransacter>
@required
- (void)insertAddonsId:(SharedLong * _Nullable)id name:(NSString * _Nullable)name addon:(NSString * _Nullable)addon price:(SharedDouble * _Nullable)price sale_price:(SharedDouble * _Nullable)sale_price __attribute__((swift_name("insertAddons(id:name:addon:price:sale_price:)")));
- (void)insertCartItemItem_id:(int64_t)item_id item_ref:(NSString *)item_ref name:(NSString * _Nullable)name image:(NSString * _Nullable)image item:(NSString * _Nullable)item variation:(NSString * _Nullable)variation addons:(NSArray<NSString *> * _Nullable)addons mixture:(NSArray<NSString *> * _Nullable)mixture price:(SharedDouble * _Nullable)price quantity:(SharedLong * _Nullable)quantity status:(NSString * _Nullable)status __attribute__((swift_name("insertCartItem(item_id:item_ref:name:image:item:variation:addons:mixture:price:quantity:status:)")));
- (void)insertFavoritesItemId:(SharedLong * _Nullable)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice images:(NSArray<NSString *> * _Nullable)images variations:(NSArray<NSString *> * _Nullable)variations addon_options:(NSArray<SharedAddOn *> * _Nullable)addon_options mixture_settings:(NSArray<SharedMixtureSetting *> * _Nullable)mixture_settings __attribute__((swift_name("insertFavoritesItem(id:name:slug:description:price:salePrice:images:variations:addon_options:mixture_settings:)")));
- (void)insertKioskRef_id:(NSString * _Nullable)ref_id coordinates:(NSString * _Nullable)coordinates description:(NSString * _Nullable)description menu:(NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable)menu location:(NSString * _Nullable)location __attribute__((swift_name("insertKiosk(ref_id:coordinates:description:menu:location:)")));
- (void)insertMenuItemId:(SharedLong * _Nullable)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice images:(NSArray<NSString *> * _Nullable)images variations:(NSArray<NSString *> * _Nullable)variations addon_options:(NSArray<SharedAddOn *> * _Nullable)addon_options mixture_settings:(NSArray<SharedMixtureSetting *> * _Nullable)mixture_settings __attribute__((swift_name("insertMenuItem(id:name:slug:description:price:salePrice:images:variations:addon_options:mixture_settings:)")));
- (void)insertOrderId:(SharedLong * _Nullable)id email_address:(NSString * _Nullable)email_address status:(SharedStatus * _Nullable)status line_items:(NSArray<SharedCartItem *> * _Nullable)line_items total_price:(SharedDouble * _Nullable)total_price total_quantity:(SharedLong * _Nullable)total_quantity kiosk:(SharedKiosk * _Nullable)kiosk datetime_created:(NSString * _Nullable)datetime_created datetime_cancelled:(NSString * _Nullable)datetime_cancelled datetime_paid:(NSString * _Nullable)datetime_paid datetime_completed:(NSString * _Nullable)datetime_completed pin:(NSString * _Nullable)pin __attribute__((swift_name("insertOrder(id:email_address:status:line_items:total_price:total_quantity:kiosk:datetime_created:datetime_cancelled:datetime_paid:datetime_completed:pin:)")));
- (SharedRuntimeQuery<SharedLong *> *)lastInsertRowId __attribute__((swift_name("lastInsertRowId()")));
- (void)removeAllAddOns __attribute__((swift_name("removeAllAddOns()")));
- (void)removeAllCartItemByIdId:(int64_t)id __attribute__((swift_name("removeAllCartItemById(id:)")));
- (void)removeAllCartItems __attribute__((swift_name("removeAllCartItems()")));
- (void)removeAllFavorites __attribute__((swift_name("removeAllFavorites()")));
- (void)removeAllKiosks __attribute__((swift_name("removeAllKiosks()")));
- (void)removeAllMenuItems __attribute__((swift_name("removeAllMenuItems()")));
- (void)removeFavoriteByIdId:(int64_t)id __attribute__((swift_name("removeFavoriteById(id:)")));
- (void)removeOrderItemByIDId:(int64_t)id __attribute__((swift_name("removeOrderItemByID(id:)")));
- (SharedRuntimeQuery<SharedAddOns *> *)selectAllAddOns __attribute__((swift_name("selectAllAddOns()")));
- (SharedRuntimeQuery<id> *)selectAllAddOnsMapper:(id (^)(SharedLong *, NSString * _Nullable, NSString * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable))mapper __attribute__((swift_name("selectAllAddOns(mapper:)")));
- (SharedRuntimeQuery<SharedCartItem_ *> *)selectAllCartItems __attribute__((swift_name("selectAllCartItems()")));
- (SharedRuntimeQuery<id> *)selectAllCartItemsMapper:(id (^)(SharedLong *, SharedLong *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> * _Nullable, NSArray<NSString *> * _Nullable, SharedDouble * _Nullable, SharedLong * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllCartItems(mapper:)")));
- (SharedRuntimeQuery<SharedCartItem_ *> *)selectAllCartItemsByStatusStatus:(NSString * _Nullable)status __attribute__((swift_name("selectAllCartItemsByStatus(status:)")));
- (SharedRuntimeQuery<id> *)selectAllCartItemsByStatusStatus:(NSString * _Nullable)status mapper:(id (^)(SharedLong *, SharedLong *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> * _Nullable, NSArray<NSString *> * _Nullable, SharedDouble * _Nullable, SharedLong * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllCartItemsByStatus(status:mapper:)")));
- (SharedRuntimeQuery<SharedFavoritesItem_ *> *)selectAllFavoritesItems __attribute__((swift_name("selectAllFavoritesItems()")));
- (SharedRuntimeQuery<id> *)selectAllFavoritesItemsMapper:(id (^)(SharedLong *, NSString *, NSString * _Nullable, NSString * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, NSArray<NSString *> * _Nullable, NSArray<NSString *> * _Nullable, NSArray<SharedAddOn *> * _Nullable, NSArray<SharedMixtureSetting *> * _Nullable))mapper __attribute__((swift_name("selectAllFavoritesItems(mapper:)")));
- (SharedRuntimeQuery<SharedKiosk_ *> *)selectAllKiosks __attribute__((swift_name("selectAllKiosks()")));
- (SharedRuntimeQuery<id> *)selectAllKiosksMapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllKiosks(mapper:)")));
- (SharedRuntimeQuery<SharedMenuItem_ *> *)selectAllMenuItems __attribute__((swift_name("selectAllMenuItems()")));
- (SharedRuntimeQuery<id> *)selectAllMenuItemsMapper:(id (^)(SharedLong *, NSString *, NSString * _Nullable, NSString * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, NSArray<NSString *> * _Nullable, NSArray<NSString *> * _Nullable, NSArray<SharedAddOn *> * _Nullable, NSArray<SharedMixtureSetting *> * _Nullable))mapper __attribute__((swift_name("selectAllMenuItems(mapper:)")));
- (SharedRuntimeQuery<SharedOrderItem *> *)selectAllOrdersByStatusStatus:(SharedStatus * _Nullable)status __attribute__((swift_name("selectAllOrdersByStatus(status:)")));
- (SharedRuntimeQuery<id> *)selectAllOrdersByStatusStatus:(SharedStatus * _Nullable)status mapper:(id (^)(SharedLong *, NSString * _Nullable, SharedStatus * _Nullable, NSArray<SharedCartItem *> * _Nullable, SharedDouble * _Nullable, SharedLong * _Nullable, SharedKiosk * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllOrdersByStatus(status:mapper:)")));
- (SharedRuntimeQuery<SharedCartItem_ *> *)selectCartItemByIdId:(int64_t)id __attribute__((swift_name("selectCartItemById(id:)")));
- (SharedRuntimeQuery<id> *)selectCartItemByIdId:(int64_t)id mapper:(id (^)(SharedLong *, SharedLong *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> * _Nullable, NSArray<NSString *> * _Nullable, SharedDouble * _Nullable, SharedLong * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectCartItemById(id:mapper:)")));
- (SharedRuntimeQuery<SharedFavoritesItem_ *> *)selectFavoritesByIdId:(int64_t)id __attribute__((swift_name("selectFavoritesById(id:)")));
- (SharedRuntimeQuery<id> *)selectFavoritesByIdId:(int64_t)id mapper:(id (^)(SharedLong *, NSString *, NSString * _Nullable, NSString * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, NSArray<NSString *> * _Nullable, NSArray<NSString *> * _Nullable, NSArray<SharedAddOn *> * _Nullable, NSArray<SharedMixtureSetting *> * _Nullable))mapper __attribute__((swift_name("selectFavoritesById(id:mapper:)")));
- (SharedRuntimeQuery<SharedOrderItem *> *)selectOrderItemByIdId:(int64_t)id __attribute__((swift_name("selectOrderItemById(id:)")));
- (SharedRuntimeQuery<id> *)selectOrderItemByIdId:(int64_t)id mapper:(id (^)(SharedLong *, NSString * _Nullable, SharedStatus * _Nullable, NSArray<SharedCartItem *> * _Nullable, SharedDouble * _Nullable, SharedLong * _Nullable, SharedKiosk * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectOrderItemById(id:mapper:)")));
- (void)setOrderDateCancelledDatetime_cancelled:(NSString * _Nullable)datetime_cancelled id:(int64_t)id __attribute__((swift_name("setOrderDateCancelled(datetime_cancelled:id:)")));
- (void)setOrderDateCompletedDatetime_completed:(NSString * _Nullable)datetime_completed id:(int64_t)id __attribute__((swift_name("setOrderDateCompleted(datetime_completed:id:)")));
- (void)setOrderDatePaidDatetime_paid:(NSString * _Nullable)datetime_paid id:(int64_t)id __attribute__((swift_name("setOrderDatePaid(datetime_paid:id:)")));
- (void)updateCartItemStatusStatus:(NSString * _Nullable)status id:(int64_t)id __attribute__((swift_name("updateCartItemStatus(status:id:)")));
- (void)updateOrderStatusStatus:(SharedStatus * _Nullable)status id:(int64_t)id __attribute__((swift_name("updateOrderStatus(status:id:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartItem_")))
@interface SharedCartItem_ : SharedBase
- (instancetype)initWithId:(int64_t)id item_id:(int64_t)item_id item_ref:(NSString *)item_ref name:(NSString * _Nullable)name image:(NSString * _Nullable)image item:(NSString * _Nullable)item variation:(NSString * _Nullable)variation addons:(NSArray<NSString *> * _Nullable)addons mixture:(NSArray<NSString *> * _Nullable)mixture price:(SharedDouble * _Nullable)price quantity:(SharedLong * _Nullable)quantity status:(NSString * _Nullable)status __attribute__((swift_name("init(id:item_id:item_ref:name:image:item:variation:addons:mixture:price:quantity:status:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component10 __attribute__((swift_name("component10()")));
- (SharedLong * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<NSString *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<NSString *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedCartItem_ *)doCopyId:(int64_t)id item_id:(int64_t)item_id item_ref:(NSString *)item_ref name:(NSString * _Nullable)name image:(NSString * _Nullable)image item:(NSString * _Nullable)item variation:(NSString * _Nullable)variation addons:(NSArray<NSString *> * _Nullable)addons mixture:(NSArray<NSString *> * _Nullable)mixture price:(SharedDouble * _Nullable)price quantity:(SharedLong * _Nullable)quantity status:(NSString * _Nullable)status __attribute__((swift_name("doCopy(id:item_id:item_ref:name:image:item:variation:addons:mixture:price:quantity:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable addons __attribute__((swift_name("addons")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable item __attribute__((swift_name("item")));
@property (readonly) int64_t item_id __attribute__((swift_name("item_id")));
@property (readonly) NSString *item_ref __attribute__((swift_name("item_ref")));
@property (readonly) NSArray<NSString *> * _Nullable mixture __attribute__((swift_name("mixture")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedLong * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable variation __attribute__((swift_name("variation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartItem_.Adapter")))
@interface SharedCartItem_Adapter : SharedBase
- (instancetype)initWithAddonsAdapter:(id<SharedRuntimeColumnAdapter>)addonsAdapter mixtureAdapter:(id<SharedRuntimeColumnAdapter>)mixtureAdapter __attribute__((swift_name("init(addonsAdapter:mixtureAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedRuntimeColumnAdapter> addonsAdapter __attribute__((swift_name("addonsAdapter")));
@property (readonly) id<SharedRuntimeColumnAdapter> mixtureAdapter __attribute__((swift_name("mixtureAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface SharedDatabaseDriverFactory : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritesItem_")))
@interface SharedFavoritesItem_ : SharedBase
- (instancetype)initWithId:(int64_t)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice images:(NSArray<NSString *> * _Nullable)images variations:(NSArray<NSString *> * _Nullable)variations addon_options:(NSArray<SharedAddOn *> * _Nullable)addon_options mixture_settings:(NSArray<SharedMixtureSetting *> * _Nullable)mixture_settings __attribute__((swift_name("init(id:name:slug:description:price:salePrice:images:variations:addon_options:mixture_settings:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedMixtureSetting *> * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<NSString *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<SharedAddOn *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedFavoritesItem_ *)doCopyId:(int64_t)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice images:(NSArray<NSString *> * _Nullable)images variations:(NSArray<NSString *> * _Nullable)variations addon_options:(NSArray<SharedAddOn *> * _Nullable)addon_options mixture_settings:(NSArray<SharedMixtureSetting *> * _Nullable)mixture_settings __attribute__((swift_name("doCopy(id:name:slug:description:price:salePrice:images:variations:addon_options:mixture_settings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedAddOn *> * _Nullable addon_options __attribute__((swift_name("addon_options")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> * _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSArray<SharedMixtureSetting *> * _Nullable mixture_settings __attribute__((swift_name("mixture_settings")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedDouble * _Nullable salePrice __attribute__((swift_name("salePrice")));
@property (readonly) NSString * _Nullable slug __attribute__((swift_name("slug")));
@property (readonly) NSArray<NSString *> * _Nullable variations __attribute__((swift_name("variations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritesItem_.Adapter")))
@interface SharedFavoritesItem_Adapter : SharedBase
- (instancetype)initWithImagesAdapter:(id<SharedRuntimeColumnAdapter>)imagesAdapter variationsAdapter:(id<SharedRuntimeColumnAdapter>)variationsAdapter addon_optionsAdapter:(id<SharedRuntimeColumnAdapter>)addon_optionsAdapter mixture_settingsAdapter:(id<SharedRuntimeColumnAdapter>)mixture_settingsAdapter __attribute__((swift_name("init(imagesAdapter:variationsAdapter:addon_optionsAdapter:mixture_settingsAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedRuntimeColumnAdapter> addon_optionsAdapter __attribute__((swift_name("addon_optionsAdapter")));
@property (readonly) id<SharedRuntimeColumnAdapter> imagesAdapter __attribute__((swift_name("imagesAdapter")));
@property (readonly) id<SharedRuntimeColumnAdapter> mixture_settingsAdapter __attribute__((swift_name("mixture_settingsAdapter")));
@property (readonly) id<SharedRuntimeColumnAdapter> variationsAdapter __attribute__((swift_name("variationsAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kiosk_")))
@interface SharedKiosk_ : SharedBase
- (instancetype)initWithRef_id:(NSString * _Nullable)ref_id coordinates:(NSString * _Nullable)coordinates description:(NSString * _Nullable)description menu:(NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable)menu location:(NSString * _Nullable)location __attribute__((swift_name("init(ref_id:coordinates:description:menu:location:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedKiosk_ *)doCopyRef_id:(NSString * _Nullable)ref_id coordinates:(NSString * _Nullable)coordinates description:(NSString * _Nullable)description menu:(NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable)menu location:(NSString * _Nullable)location __attribute__((swift_name("doCopy(ref_id:coordinates:description:menu:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable coordinates __attribute__((swift_name("coordinates")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable menu __attribute__((swift_name("menu")));
@property (readonly) NSString * _Nullable ref_id __attribute__((swift_name("ref_id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kiosk_.Adapter")))
@interface SharedKiosk_Adapter : SharedBase
- (instancetype)initWithMenuAdapter:(id<SharedRuntimeColumnAdapter>)menuAdapter __attribute__((swift_name("init(menuAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedRuntimeColumnAdapter> menuAdapter __attribute__((swift_name("menuAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItem_")))
@interface SharedMenuItem_ : SharedBase
- (instancetype)initWithId:(int64_t)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice images:(NSArray<NSString *> * _Nullable)images variations:(NSArray<NSString *> * _Nullable)variations addon_options:(NSArray<SharedAddOn *> * _Nullable)addon_options mixture_settings:(NSArray<SharedMixtureSetting *> * _Nullable)mixture_settings __attribute__((swift_name("init(id:name:slug:description:price:salePrice:images:variations:addon_options:mixture_settings:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedMixtureSetting *> * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<NSString *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<SharedAddOn *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedMenuItem_ *)doCopyId:(int64_t)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice images:(NSArray<NSString *> * _Nullable)images variations:(NSArray<NSString *> * _Nullable)variations addon_options:(NSArray<SharedAddOn *> * _Nullable)addon_options mixture_settings:(NSArray<SharedMixtureSetting *> * _Nullable)mixture_settings __attribute__((swift_name("doCopy(id:name:slug:description:price:salePrice:images:variations:addon_options:mixture_settings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedAddOn *> * _Nullable addon_options __attribute__((swift_name("addon_options")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> * _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSArray<SharedMixtureSetting *> * _Nullable mixture_settings __attribute__((swift_name("mixture_settings")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedDouble * _Nullable salePrice __attribute__((swift_name("salePrice")));
@property (readonly) NSString * _Nullable slug __attribute__((swift_name("slug")));
@property (readonly) NSArray<NSString *> * _Nullable variations __attribute__((swift_name("variations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItem_.Adapter")))
@interface SharedMenuItem_Adapter : SharedBase
- (instancetype)initWithImagesAdapter:(id<SharedRuntimeColumnAdapter>)imagesAdapter variationsAdapter:(id<SharedRuntimeColumnAdapter>)variationsAdapter addon_optionsAdapter:(id<SharedRuntimeColumnAdapter>)addon_optionsAdapter mixture_settingsAdapter:(id<SharedRuntimeColumnAdapter>)mixture_settingsAdapter __attribute__((swift_name("init(imagesAdapter:variationsAdapter:addon_optionsAdapter:mixture_settingsAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedRuntimeColumnAdapter> addon_optionsAdapter __attribute__((swift_name("addon_optionsAdapter")));
@property (readonly) id<SharedRuntimeColumnAdapter> imagesAdapter __attribute__((swift_name("imagesAdapter")));
@property (readonly) id<SharedRuntimeColumnAdapter> mixture_settingsAdapter __attribute__((swift_name("mixture_settingsAdapter")));
@property (readonly) id<SharedRuntimeColumnAdapter> variationsAdapter __attribute__((swift_name("variationsAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrderItem")))
@interface SharedOrderItem : SharedBase
- (instancetype)initWithId:(int64_t)id email_address:(NSString * _Nullable)email_address status:(SharedStatus * _Nullable)status line_items:(NSArray<SharedCartItem *> * _Nullable)line_items total_price:(SharedDouble * _Nullable)total_price total_quantity:(SharedLong * _Nullable)total_quantity kiosk:(SharedKiosk * _Nullable)kiosk datetime_created:(NSString * _Nullable)datetime_created datetime_cancelled:(NSString * _Nullable)datetime_cancelled datetime_paid:(NSString * _Nullable)datetime_paid datetime_completed:(NSString * _Nullable)datetime_completed pin:(NSString * _Nullable)pin __attribute__((swift_name("init(id:email_address:status:line_items:total_price:total_quantity:kiosk:datetime_created:datetime_cancelled:datetime_paid:datetime_completed:pin:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedStatus * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedCartItem *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedLong * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedKiosk * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedOrderItem *)doCopyId:(int64_t)id email_address:(NSString * _Nullable)email_address status:(SharedStatus * _Nullable)status line_items:(NSArray<SharedCartItem *> * _Nullable)line_items total_price:(SharedDouble * _Nullable)total_price total_quantity:(SharedLong * _Nullable)total_quantity kiosk:(SharedKiosk * _Nullable)kiosk datetime_created:(NSString * _Nullable)datetime_created datetime_cancelled:(NSString * _Nullable)datetime_cancelled datetime_paid:(NSString * _Nullable)datetime_paid datetime_completed:(NSString * _Nullable)datetime_completed pin:(NSString * _Nullable)pin __attribute__((swift_name("doCopy(id:email_address:status:line_items:total_price:total_quantity:kiosk:datetime_created:datetime_cancelled:datetime_paid:datetime_completed:pin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable datetime_cancelled __attribute__((swift_name("datetime_cancelled")));
@property (readonly) NSString * _Nullable datetime_completed __attribute__((swift_name("datetime_completed")));
@property (readonly) NSString * _Nullable datetime_created __attribute__((swift_name("datetime_created")));
@property (readonly) NSString * _Nullable datetime_paid __attribute__((swift_name("datetime_paid")));
@property (readonly) NSString * _Nullable email_address __attribute__((swift_name("email_address")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) SharedKiosk * _Nullable kiosk __attribute__((swift_name("kiosk")));
@property (readonly) NSArray<SharedCartItem *> * _Nullable line_items __attribute__((swift_name("line_items")));
@property (readonly) NSString * _Nullable pin __attribute__((swift_name("pin")));
@property (readonly) SharedStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) SharedDouble * _Nullable total_price __attribute__((swift_name("total_price")));
@property (readonly) SharedLong * _Nullable total_quantity __attribute__((swift_name("total_quantity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrderItem.Adapter")))
@interface SharedOrderItemAdapter : SharedBase
- (instancetype)initWithStatusAdapter:(id<SharedRuntimeColumnAdapter>)statusAdapter line_itemsAdapter:(id<SharedRuntimeColumnAdapter>)line_itemsAdapter kioskAdapter:(id<SharedRuntimeColumnAdapter>)kioskAdapter __attribute__((swift_name("init(statusAdapter:line_itemsAdapter:kioskAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedRuntimeColumnAdapter> kioskAdapter __attribute__((swift_name("kioskAdapter")));
@property (readonly) id<SharedRuntimeColumnAdapter> line_itemsAdapter __attribute__((swift_name("line_itemsAdapter")));
@property (readonly) id<SharedRuntimeColumnAdapter> statusAdapter __attribute__((swift_name("statusAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddCartItem")))
@interface SharedAddCartItem : SharedBase
- (instancetype)initWithItemId:(SharedInt * _Nullable)itemId itemRef:(SharedInt * _Nullable)itemRef name:(NSString * _Nullable)name item:(NSString * _Nullable)item variation:(NSString * _Nullable)variation mixture:(NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable)mixture price:(SharedDouble * _Nullable)price quantity:(SharedInt * _Nullable)quantity __attribute__((swift_name("init(itemId:itemRef:name:item:variation:mixture:price:quantity:)"))) __attribute__((objc_designated_initializer));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedAddCartItem *)doCopyItemId:(SharedInt * _Nullable)itemId itemRef:(SharedInt * _Nullable)itemRef name:(NSString * _Nullable)name item:(NSString * _Nullable)item variation:(NSString * _Nullable)variation mixture:(NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable)mixture price:(SharedDouble * _Nullable)price quantity:(SharedInt * _Nullable)quantity __attribute__((swift_name("doCopy(itemId:itemRef:name:item:variation:mixture:price:quantity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable item __attribute__((swift_name("item")));
@property (readonly) SharedInt * _Nullable itemId __attribute__((swift_name("itemId")));
@property (readonly) SharedInt * _Nullable itemRef __attribute__((swift_name("itemRef")));
@property (readonly) NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable mixture __attribute__((swift_name("mixture")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedInt * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) NSString * _Nullable variation __attribute__((swift_name("variation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddCartItems")))
@interface SharedAddCartItems : SharedBase
- (instancetype)initWithItems:(NSArray<SharedAddCartItem *> * _Nullable)items total:(SharedDouble * _Nullable)total quantity:(SharedInt * _Nullable)quantity __attribute__((swift_name("init(items:total:quantity:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedAddCartItem *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedAddCartItems *)doCopyItems:(NSArray<SharedAddCartItem *> * _Nullable)items total:(SharedDouble * _Nullable)total quantity:(SharedInt * _Nullable)quantity __attribute__((swift_name("doCopy(items:total:quantity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedAddCartItem *> * _Nullable items __attribute__((swift_name("items")));
@property (readonly) SharedInt * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) SharedDouble * _Nullable total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOn")))
@interface SharedAddOn : SharedBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name addon:(NSString * _Nullable)addon description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice __attribute__((swift_name("init(id:name:addon:description:price:salePrice:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedAddOn *)doCopyId:(int32_t)id name:(NSString *)name addon:(NSString * _Nullable)addon description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice __attribute__((swift_name("doCopy(id:name:addon:description:price:salePrice:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable addon __attribute__((swift_name("addon")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedDouble * _Nullable salePrice __attribute__((swift_name("salePrice")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOn.Companion")))
@interface SharedAddOnCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartItem")))
@interface SharedCartItem : SharedBase
- (instancetype)initWithId:(SharedInt * _Nullable)id itemId:(int32_t)itemId itemRef:(NSString *)itemRef image:(NSString * _Nullable)image name:(NSString * _Nullable)name item:(NSString * _Nullable)item variation:(NSString * _Nullable)variation addons:(NSArray<NSString *> * _Nullable)addons mixture:(NSArray<NSString *> * _Nullable)mixture price:(SharedDouble * _Nullable)price quantity:(SharedInt * _Nullable)quantity status:(NSString * _Nullable)status __attribute__((swift_name("init(id:itemId:itemRef:image:name:item:variation:addons:mixture:price:quantity:status:)"))) __attribute__((objc_designated_initializer));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component10 __attribute__((swift_name("component10()")));
- (SharedInt * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<NSString *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<NSString *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedCartItem *)doCopyId:(SharedInt * _Nullable)id itemId:(int32_t)itemId itemRef:(NSString *)itemRef image:(NSString * _Nullable)image name:(NSString * _Nullable)name item:(NSString * _Nullable)item variation:(NSString * _Nullable)variation addons:(NSArray<NSString *> * _Nullable)addons mixture:(NSArray<NSString *> * _Nullable)mixture price:(SharedDouble * _Nullable)price quantity:(SharedInt * _Nullable)quantity status:(NSString * _Nullable)status __attribute__((swift_name("doCopy(id:itemId:itemRef:image:name:item:variation:addons:mixture:price:quantity:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable addons __attribute__((swift_name("addons")));
@property (readonly) SharedInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable item __attribute__((swift_name("item")));
@property (readonly) int32_t itemId __attribute__((swift_name("itemId")));
@property (readonly) NSString *itemRef __attribute__((swift_name("itemRef")));
@property (readonly) NSArray<NSString *> * _Nullable mixture __attribute__((swift_name("mixture")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedInt * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable variation __attribute__((swift_name("variation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartItem.Companion")))
@interface SharedCartItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritesItem")))
@interface SharedFavoritesItem : SharedBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice images:(NSArray<NSString *> * _Nullable)images variations:(NSArray<NSString *> * _Nullable)variations addonOptions:(NSArray<SharedAddOn *> * _Nullable)addonOptions mixtureSettings:(NSArray<SharedMixtureSetting *> * _Nullable)mixtureSettings __attribute__((swift_name("init(id:name:slug:description:price:salePrice:images:variations:addonOptions:mixtureSettings:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedMixtureSetting *> * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<NSString *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<SharedAddOn *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedFavoritesItem *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice images:(NSArray<NSString *> * _Nullable)images variations:(NSArray<NSString *> * _Nullable)variations addonOptions:(NSArray<SharedAddOn *> * _Nullable)addonOptions mixtureSettings:(NSArray<SharedMixtureSetting *> * _Nullable)mixtureSettings __attribute__((swift_name("doCopy(id:name:slug:description:price:salePrice:images:variations:addonOptions:mixtureSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedAddOn *> * _Nullable addonOptions __attribute__((swift_name("addonOptions")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> * _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSArray<SharedMixtureSetting *> * _Nullable mixtureSettings __attribute__((swift_name("mixtureSettings")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedDouble * _Nullable salePrice __attribute__((swift_name("salePrice")));
@property (readonly) NSString * _Nullable slug __attribute__((swift_name("slug")));
@property (readonly) NSArray<NSString *> * _Nullable variations __attribute__((swift_name("variations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritesItem.Companion")))
@interface SharedFavoritesItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kiosk")))
@interface SharedKiosk : SharedBase
- (instancetype)initWithRefId:(NSString * _Nullable)refId coordinates:(NSString * _Nullable)coordinates description:(NSString * _Nullable)description menu:(NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable)menu location:(NSString * _Nullable)location __attribute__((swift_name("init(refId:coordinates:description:menu:location:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedKiosk *)doCopyRefId:(NSString * _Nullable)refId coordinates:(NSString * _Nullable)coordinates description:(NSString * _Nullable)description menu:(NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable)menu location:(NSString * _Nullable)location __attribute__((swift_name("doCopy(refId:coordinates:description:menu:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable coordinates __attribute__((swift_name("coordinates")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSDictionary<NSString *, SharedKotlinx_serialization_coreJsonElement *> * _Nullable menu __attribute__((swift_name("menu")));
@property (readonly) NSString * _Nullable refId __attribute__((swift_name("refId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kiosk.Companion")))
@interface SharedKioskCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItem")))
@interface SharedMenuItem : SharedBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice images:(NSArray<NSString *> * _Nullable)images variations:(NSArray<NSString *> * _Nullable)variations addonOptions:(NSArray<SharedAddOn *> * _Nullable)addonOptions mixtureSettings:(NSArray<SharedMixtureSetting *> * _Nullable)mixtureSettings __attribute__((swift_name("init(id:name:slug:description:price:salePrice:images:variations:addonOptions:mixtureSettings:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedMixtureSetting *> * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<NSString *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<SharedAddOn *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedMenuItem *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description price:(SharedDouble * _Nullable)price salePrice:(SharedDouble * _Nullable)salePrice images:(NSArray<NSString *> * _Nullable)images variations:(NSArray<NSString *> * _Nullable)variations addonOptions:(NSArray<SharedAddOn *> * _Nullable)addonOptions mixtureSettings:(NSArray<SharedMixtureSetting *> * _Nullable)mixtureSettings __attribute__((swift_name("doCopy(id:name:slug:description:price:salePrice:images:variations:addonOptions:mixtureSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedAddOn *> * _Nullable addonOptions __attribute__((swift_name("addonOptions")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> * _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSArray<SharedMixtureSetting *> * _Nullable mixtureSettings __attribute__((swift_name("mixtureSettings")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedDouble * _Nullable salePrice __attribute__((swift_name("salePrice")));
@property (readonly) NSString * _Nullable slug __attribute__((swift_name("slug")));
@property (readonly) NSArray<NSString *> * _Nullable variations __attribute__((swift_name("variations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItem.Companion")))
@interface SharedMenuItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MixtureSetting")))
@interface SharedMixtureSetting : SharedBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description defaultValue:(SharedInt * _Nullable)defaultValue maxValue:(SharedInt * _Nullable)maxValue __attribute__((swift_name("init(id:name:slug:description:defaultValue:maxValue:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedMixtureSetting *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString * _Nullable)slug description:(NSString * _Nullable)description defaultValue:(SharedInt * _Nullable)defaultValue maxValue:(SharedInt * _Nullable)maxValue __attribute__((swift_name("doCopy(id:name:slug:description:defaultValue:maxValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable defaultValue __attribute__((swift_name("defaultValue")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) SharedInt * _Nullable maxValue __attribute__((swift_name("maxValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable slug __attribute__((swift_name("slug")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MixtureSetting.Companion")))
@interface SharedMixtureSettingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Order")))
@interface SharedOrder : SharedBase
- (instancetype)initWithId:(SharedInt * _Nullable)id emailAddress:(NSString * _Nullable)emailAddress status:(SharedStatus * _Nullable)status lineItems:(NSArray<SharedCartItem *> * _Nullable)lineItems totalPrice:(SharedDouble * _Nullable)totalPrice totalQuantity:(SharedInt * _Nullable)totalQuantity kiosk:(SharedKiosk * _Nullable)kiosk datetimeCreated:(NSString * _Nullable)datetimeCreated datetimePaid:(NSString * _Nullable)datetimePaid datetimeCancelled:(NSString * _Nullable)datetimeCancelled datetimeCompeted:(NSString * _Nullable)datetimeCompeted pin:(NSString * _Nullable)pin __attribute__((swift_name("init(id:emailAddress:status:lineItems:totalPrice:totalQuantity:kiosk:datetimeCreated:datetimePaid:datetimeCancelled:datetimeCompeted:pin:)"))) __attribute__((objc_designated_initializer));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedStatus * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedCartItem *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedKiosk * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedOrder *)doCopyId:(SharedInt * _Nullable)id emailAddress:(NSString * _Nullable)emailAddress status:(SharedStatus * _Nullable)status lineItems:(NSArray<SharedCartItem *> * _Nullable)lineItems totalPrice:(SharedDouble * _Nullable)totalPrice totalQuantity:(SharedInt * _Nullable)totalQuantity kiosk:(SharedKiosk * _Nullable)kiosk datetimeCreated:(NSString * _Nullable)datetimeCreated datetimePaid:(NSString * _Nullable)datetimePaid datetimeCancelled:(NSString * _Nullable)datetimeCancelled datetimeCompeted:(NSString * _Nullable)datetimeCompeted pin:(NSString * _Nullable)pin __attribute__((swift_name("doCopy(id:emailAddress:status:lineItems:totalPrice:totalQuantity:kiosk:datetimeCreated:datetimePaid:datetimeCancelled:datetimeCompeted:pin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable datetimeCancelled __attribute__((swift_name("datetimeCancelled")));
@property (readonly) NSString * _Nullable datetimeCompeted __attribute__((swift_name("datetimeCompeted")));
@property (readonly) NSString * _Nullable datetimeCreated __attribute__((swift_name("datetimeCreated")));
@property (readonly) NSString * _Nullable datetimePaid __attribute__((swift_name("datetimePaid")));
@property (readonly) NSString * _Nullable emailAddress __attribute__((swift_name("emailAddress")));
@property (readonly) SharedInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedKiosk * _Nullable kiosk __attribute__((swift_name("kiosk")));
@property (readonly) NSArray<SharedCartItem *> * _Nullable lineItems __attribute__((swift_name("lineItems")));
@property (readonly) NSString * _Nullable pin __attribute__((swift_name("pin")));
@property (readonly) SharedStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) SharedDouble * _Nullable totalPrice __attribute__((swift_name("totalPrice")));
@property (readonly) SharedInt * _Nullable totalQuantity __attribute__((swift_name("totalQuantity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Order.Companion")))
@interface SharedOrderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status")))
@interface SharedStatus : SharedKotlinEnum<SharedStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedStatus *created __attribute__((swift_name("created")));
@property (class, readonly) SharedStatus *paid __attribute__((swift_name("paid")));
@property (class, readonly) SharedStatus *completed __attribute__((swift_name("completed")));
@property (class, readonly) SharedStatus *cancelled __attribute__((swift_name("cancelled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Companion")))
@interface SharedStatusCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuzionApi")))
@interface SharedFuzionApi : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllKiosksWithCompletionHandler:(void (^)(NSArray<SharedKiosk *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllKiosks(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllMenuItemsWithCompletionHandler:(void (^)(NSArray<SharedMenuItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllMenuItems(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuzionApi.Companion")))
@interface SharedFuzionApiCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol SharedRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol SharedRuntimeTransactionWithoutReturn <SharedRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol SharedRuntimeTransactionWithReturn <SharedRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol SharedRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol SharedRuntimeSqlDriver <SharedRuntimeCloseable>
@required
- (SharedRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(SharedInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SharedRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<SharedRuntimeSqlCursor>)executeQueryIdentifier:(SharedInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SharedRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (SharedRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol SharedRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<SharedRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreJsonElement")))
@interface SharedKotlinx_serialization_coreJsonElement : SharedBase
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface SharedRuntimeQuery<__covariant RowType> : SharedBase
- (instancetype)initWithQueries:(NSMutableArray<SharedRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<SharedRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<SharedRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<SharedRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("RuntimeColumnAdapter")))
@protocol SharedRuntimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)"))) __attribute__((unavailable("Patch function is deprecated for removal since this functionality is no longer supported by serializer.Some formats may provide implementation-specific patching in their Decoders.")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface SharedRuntimeTransacterTransaction : SharedBase <SharedRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) SharedRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol SharedRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(SharedKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(SharedDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(SharedLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol SharedRuntimeSqlCursor <SharedRuntimeCloseable>
@required
- (SharedKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (SharedDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (SharedLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol SharedRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginCollection method with two arguments.")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor typeSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor typeParams:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
- (id _Nullable)updateSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) SharedKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<SharedKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
- (id _Nullable)updateSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) SharedKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreUpdateMode")))
@interface SharedKotlinx_serialization_coreUpdateMode : SharedKotlinEnum<SharedKotlinx_serialization_coreUpdateMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinx_serialization_coreUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) SharedKotlinx_serialization_coreUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) SharedKotlinx_serialization_coreUpdateMode *update __attribute__((swift_name("update")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
