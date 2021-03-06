// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Retail API (retail/v2)
// Description:
//   Cloud Retail service enables customers to build end-to-end personalized
//   recommendation systems without requiring a high level of expertise in
//   machine learning, recommendation system, or Google Cloud.
// Documentation:
//   https://cloud.google.com/recommendations

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudRetail_GoogleCloudRetailV2Catalog;
@class GTLRCloudRetail_GoogleCloudRetailV2ImportProductsRequest;
@class GTLRCloudRetail_GoogleCloudRetailV2ImportUserEventsRequest;
@class GTLRCloudRetail_GoogleCloudRetailV2PredictRequest;
@class GTLRCloudRetail_GoogleCloudRetailV2Product;
@class GTLRCloudRetail_GoogleCloudRetailV2PurgeUserEventsRequest;
@class GTLRCloudRetail_GoogleCloudRetailV2RejoinUserEventsRequest;
@class GTLRCloudRetail_GoogleCloudRetailV2UserEvent;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Retail query classes.
 */
@interface GTLRCloudRetailQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: retail.projects.locations.catalogs.branches.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesOperationsGet : GTLRCloudRetailQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleLongrunningOperation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a Product.
 *
 *  Method: retail.projects.locations.catalogs.branches.products.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesProductsCreate : GTLRCloudRetailQuery

/**
 *  Required. The parent catalog resource name, such as `projects/ *
 *  /locations/global/catalogs/default_catalog/branches/default_branch`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Required. The ID to use for the Product, which will become the final
 *  component of the Product.name. If the caller does not have permission to
 *  create the Product, regardless of whether or not it exists, a
 *  PERMISSION_DENIED error is returned. This field must be unique among all
 *  Products with the same parent. Otherwise, an ALREADY_EXISTS error is
 *  returned. This field must be a UTF-8 encoded string with a length limit of
 *  128 characters. Otherwise, an INVALID_ARGUMENT error is returned.
 */
@property(nonatomic, copy, nullable) NSString *productId;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleCloudRetailV2Product.
 *
 *  Creates a Product.
 *
 *  @param object The @c GTLRCloudRetail_GoogleCloudRetailV2Product to include
 *    in the query.
 *  @param parent Required. The parent catalog resource name, such as `projects/
 *    * /locations/global/catalogs/default_catalog/branches/default_branch`.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesProductsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudRetail_GoogleCloudRetailV2Product *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a Product.
 *
 *  Method: retail.projects.locations.catalogs.branches.products.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesProductsDelete : GTLRCloudRetailQuery

/**
 *  Required. Full resource name of Product, such as `projects/ *
 *  /locations/global/catalogs/default_catalog/branches/default_branch/products/some_product_id`.
 *  If the caller does not have permission to delete the Product, regardless of
 *  whether or not it exists, a PERMISSION_DENIED error is returned. If the
 *  Product to delete does not exist, a NOT_FOUND error is returned. The Product
 *  to delete can neither be a Product.Type.COLLECTION Product member nor a
 *  Product.Type.PRIMARY Product with more than one variants. Otherwise, an
 *  INVALID_ARGUMENT error is returned. All inventory information for the named
 *  Product will be deleted.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleProtobufEmpty.
 *
 *  Deletes a Product.
 *
 *  @param name Required. Full resource name of Product, such as `projects/ *
 *    /locations/global/catalogs/default_catalog/branches/default_branch/products/some_product_id`.
 *    If the caller does not have permission to delete the Product, regardless
 *    of whether or not it exists, a PERMISSION_DENIED error is returned. If the
 *    Product to delete does not exist, a NOT_FOUND error is returned. The
 *    Product to delete can neither be a Product.Type.COLLECTION Product member
 *    nor a Product.Type.PRIMARY Product with more than one variants. Otherwise,
 *    an INVALID_ARGUMENT error is returned. All inventory information for the
 *    named Product will be deleted.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesProductsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a Product.
 *
 *  Method: retail.projects.locations.catalogs.branches.products.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesProductsGet : GTLRCloudRetailQuery

/**
 *  Required. Full resource name of Product, such as `projects/ *
 *  /locations/global/catalogs/default_catalog/branches/default_branch/products/some_product_id`.
 *  If the caller does not have permission to access the Product, regardless of
 *  whether or not it exists, a PERMISSION_DENIED error is returned. If the
 *  requested Product does not exist, a NOT_FOUND error is returned.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleCloudRetailV2Product.
 *
 *  Gets a Product.
 *
 *  @param name Required. Full resource name of Product, such as `projects/ *
 *    /locations/global/catalogs/default_catalog/branches/default_branch/products/some_product_id`.
 *    If the caller does not have permission to access the Product, regardless
 *    of whether or not it exists, a PERMISSION_DENIED error is returned. If the
 *    requested Product does not exist, a NOT_FOUND error is returned.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesProductsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Bulk import of multiple Products. Request processing may be synchronous. No
 *  partial updating is supported. Non-existing items are created. Note that it
 *  is possible for a subset of the Products to be successfully updated.
 *
 *  Method: retail.projects.locations.catalogs.branches.products.import
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesProductsImport : GTLRCloudRetailQuery

/**
 *  Required.
 *  `projects/1234/locations/global/catalogs/default_catalog/branches/default_branch`
 *  If no updateMask is specified, requires products.create permission. If
 *  updateMask is specified, requires products.update permission.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleLongrunningOperation.
 *
 *  Bulk import of multiple Products. Request processing may be synchronous. No
 *  partial updating is supported. Non-existing items are created. Note that it
 *  is possible for a subset of the Products to be successfully updated.
 *
 *  @param object The @c
 *    GTLRCloudRetail_GoogleCloudRetailV2ImportProductsRequest to include in the
 *    query.
 *  @param parent Required.
 *    `projects/1234/locations/global/catalogs/default_catalog/branches/default_branch`
 *    If no updateMask is specified, requires products.create permission. If
 *    updateMask is specified, requires products.update permission.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesProductsImport
 */
+ (instancetype)queryWithObject:(GTLRCloudRetail_GoogleCloudRetailV2ImportProductsRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Updates a Product.
 *
 *  Method: retail.projects.locations.catalogs.branches.products.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesProductsPatch : GTLRCloudRetailQuery

/**
 *  If set to true, and the Product is not found, a new Product will be created.
 *  In this situation, `update_mask` is ignored.
 */
@property(nonatomic, assign) BOOL allowMissing;

/**
 *  Immutable. Full resource name of the product, such as `projects/ *
 *  /locations/global/catalogs/default_catalog/branches/default_branch/products/product_id`.
 *  The branch ID must be "default_branch".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Indicates which fields in the provided Product to update. The immutable and
 *  output only fields are NOT supported. If not set, all supported fields (the
 *  fields that are neither immutable nor output only) are updated. If an
 *  unsupported or unknown field is provided, an INVALID_ARGUMENT error is
 *  returned.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleCloudRetailV2Product.
 *
 *  Updates a Product.
 *
 *  @param object The @c GTLRCloudRetail_GoogleCloudRetailV2Product to include
 *    in the query.
 *  @param name Immutable. Full resource name of the product, such as `projects/
 *    *
 *    /locations/global/catalogs/default_catalog/branches/default_branch/products/product_id`.
 *    The branch ID must be "default_branch".
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsBranchesProductsPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudRetail_GoogleCloudRetailV2Product *)object
                           name:(NSString *)name;

@end

/**
 *  Lists all the Catalogs associated with the project.
 *
 *  Method: retail.projects.locations.catalogs.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsList : GTLRCloudRetailQuery

/**
 *  Maximum number of Catalogs to return. If unspecified, defaults to 50. The
 *  maximum allowed value is 1000. Values above 1000 will be coerced to 1000. If
 *  this field is negative, an INVALID_ARGUMENT is returned.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token ListCatalogsResponse.next_page_token, received from a previous
 *  CatalogService.ListCatalogs call. Provide this to retrieve the subsequent
 *  page. When paginating, all other parameters provided to
 *  CatalogService.ListCatalogs must match the call that provided the page
 *  token. Otherwise, an INVALID_ARGUMENT error is returned.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The account resource name with an associated location. If the
 *  caller does not have permission to list Catalogs under this location,
 *  regardless of whether or not this location exists, a PERMISSION_DENIED error
 *  is returned.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleCloudRetailV2ListCatalogsResponse.
 *
 *  Lists all the Catalogs associated with the project.
 *
 *  @param parent Required. The account resource name with an associated
 *    location. If the caller does not have permission to list Catalogs under
 *    this location, regardless of whether or not this location exists, a
 *    PERMISSION_DENIED error is returned.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: retail.projects.locations.catalogs.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsOperationsGet : GTLRCloudRetailQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleLongrunningOperation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  Method: retail.projects.locations.catalogs.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsOperationsList : GTLRCloudRetailQuery

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleLongrunningListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Updates the Catalogs.
 *
 *  Method: retail.projects.locations.catalogs.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsPatch : GTLRCloudRetailQuery

/** Required. Immutable. The fully qualified resource name of the catalog. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Indicates which fields in the provided Catalog to update. If an unsupported
 *  or unknown field is provided, an INVALID_ARGUMENT error is returned.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleCloudRetailV2Catalog.
 *
 *  Updates the Catalogs.
 *
 *  @param object The @c GTLRCloudRetail_GoogleCloudRetailV2Catalog to include
 *    in the query.
 *  @param name Required. Immutable. The fully qualified resource name of the
 *    catalog.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudRetail_GoogleCloudRetailV2Catalog *)object
                           name:(NSString *)name;

@end

/**
 *  Makes a recommendation prediction.
 *
 *  Method: retail.projects.locations.catalogs.placements.predict
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsPlacementsPredict : GTLRCloudRetailQuery

/**
 *  Required. Full resource name of the format: {name=projects/ *
 *  /locations/global/catalogs/default_catalog/placements/ *} The ID of the
 *  Recommendations AI placement. Before you can request predictions from your
 *  model, you must create at least one placement for it. For more information,
 *  see [Managing
 *  placements](https://cloud.google.com/retail/recommendations-ai/docs/manage-placements).
 *  The full list of available placements can be seen at
 *  https://console.cloud.google.com/recommendation/catalogs/default_catalog/placements
 */
@property(nonatomic, copy, nullable) NSString *placement;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleCloudRetailV2PredictResponse.
 *
 *  Makes a recommendation prediction.
 *
 *  @param object The @c GTLRCloudRetail_GoogleCloudRetailV2PredictRequest to
 *    include in the query.
 *  @param placement Required. Full resource name of the format: {name=projects/
 *    * /locations/global/catalogs/default_catalog/placements/ *} The ID of the
 *    Recommendations AI placement. Before you can request predictions from your
 *    model, you must create at least one placement for it. For more
 *    information, see [Managing
 *    placements](https://cloud.google.com/retail/recommendations-ai/docs/manage-placements).
 *    The full list of available placements can be seen at
 *    https://console.cloud.google.com/recommendation/catalogs/default_catalog/placements
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsPlacementsPredict
 */
+ (instancetype)queryWithObject:(GTLRCloudRetail_GoogleCloudRetailV2PredictRequest *)object
                      placement:(NSString *)placement;

@end

/**
 *  Writes a single user event from the browser. This uses a GET request to due
 *  to browser restriction of POST-ing to a 3rd party domain. This method is
 *  used only by the Retail API JavaScript pixel and Google Tag Manager. Users
 *  should not call this method directly.
 *
 *  Method: retail.projects.locations.catalogs.userEvents.collect
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsUserEventsCollect : GTLRCloudRetailQuery

/**
 *  The event timestamp in milliseconds. This prevents browser caching of
 *  otherwise identical get requests. The name is abbreviated to reduce the
 *  payload bytes.
 */
@property(nonatomic, assign) long long ets;

/**
 *  Required. The parent catalog name, such as
 *  `projects/1234/locations/global/catalogs/default_catalog`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  The URL including cgi-parameters but excluding the hash fragment with a
 *  length limit of 5,000 characters. This is often more useful than the referer
 *  URL, because many browsers only send the domain for 3rd party requests.
 */
@property(nonatomic, copy, nullable) NSString *uri;

/**
 *  Required. URL encoded UserEvent proto with a length limit of 2,000,000
 *  characters.
 */
@property(nonatomic, copy, nullable) NSString *userEvent;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleApiHttpBody.
 *
 *  Writes a single user event from the browser. This uses a GET request to due
 *  to browser restriction of POST-ing to a 3rd party domain. This method is
 *  used only by the Retail API JavaScript pixel and Google Tag Manager. Users
 *  should not call this method directly.
 *
 *  @param parent Required. The parent catalog name, such as
 *    `projects/1234/locations/global/catalogs/default_catalog`.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsUserEventsCollect
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Bulk import of User events. Request processing might be synchronous. Events
 *  that already exist are skipped. Use this method for backfilling historical
 *  user events. Operation.response is of type ImportResponse. Note that it is
 *  possible for a subset of the items to be successfully inserted.
 *  Operation.metadata is of type ImportMetadata.
 *
 *  Method: retail.projects.locations.catalogs.userEvents.import
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsUserEventsImport : GTLRCloudRetailQuery

/** Required. `projects/1234/locations/global/catalogs/default_catalog` */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleLongrunningOperation.
 *
 *  Bulk import of User events. Request processing might be synchronous. Events
 *  that already exist are skipped. Use this method for backfilling historical
 *  user events. Operation.response is of type ImportResponse. Note that it is
 *  possible for a subset of the items to be successfully inserted.
 *  Operation.metadata is of type ImportMetadata.
 *
 *  @param object The @c
 *    GTLRCloudRetail_GoogleCloudRetailV2ImportUserEventsRequest to include in
 *    the query.
 *  @param parent Required.
 *    `projects/1234/locations/global/catalogs/default_catalog`
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsUserEventsImport
 */
+ (instancetype)queryWithObject:(GTLRCloudRetail_GoogleCloudRetailV2ImportUserEventsRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes permanently all user events specified by the filter provided.
 *  Depending on the number of events specified by the filter, this operation
 *  could take hours or days to complete. To test a filter, use the list command
 *  first.
 *
 *  Method: retail.projects.locations.catalogs.userEvents.purge
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsUserEventsPurge : GTLRCloudRetailQuery

/**
 *  Required. The resource name of the catalog under which the events are
 *  created. The format is
 *  `projects/${projectId}/locations/global/catalogs/${catalogId}`
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleLongrunningOperation.
 *
 *  Deletes permanently all user events specified by the filter provided.
 *  Depending on the number of events specified by the filter, this operation
 *  could take hours or days to complete. To test a filter, use the list command
 *  first.
 *
 *  @param object The @c
 *    GTLRCloudRetail_GoogleCloudRetailV2PurgeUserEventsRequest to include in
 *    the query.
 *  @param parent Required. The resource name of the catalog under which the
 *    events are created. The format is
 *    `projects/${projectId}/locations/global/catalogs/${catalogId}`
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsUserEventsPurge
 */
+ (instancetype)queryWithObject:(GTLRCloudRetail_GoogleCloudRetailV2PurgeUserEventsRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Triggers a user event rejoin operation with latest product catalog. Events
 *  will not be annotated with detailed product information if product is
 *  missing from the catalog at the time the user event is ingested, and these
 *  events are stored as unjoined events with a limited usage on training and
 *  serving. This API can be used to trigger a 'join' operation on specified
 *  events with latest version of product catalog. It can also be used to
 *  correct events joined with wrong product catalog.
 *
 *  Method: retail.projects.locations.catalogs.userEvents.rejoin
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsUserEventsRejoin : GTLRCloudRetailQuery

/**
 *  Required. The parent catalog resource name, such as
 *  `projects/1234/locations/global/catalogs/default_catalog`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleLongrunningOperation.
 *
 *  Triggers a user event rejoin operation with latest product catalog. Events
 *  will not be annotated with detailed product information if product is
 *  missing from the catalog at the time the user event is ingested, and these
 *  events are stored as unjoined events with a limited usage on training and
 *  serving. This API can be used to trigger a 'join' operation on specified
 *  events with latest version of product catalog. It can also be used to
 *  correct events joined with wrong product catalog.
 *
 *  @param object The @c
 *    GTLRCloudRetail_GoogleCloudRetailV2RejoinUserEventsRequest to include in
 *    the query.
 *  @param parent Required. The parent catalog resource name, such as
 *    `projects/1234/locations/global/catalogs/default_catalog`.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsUserEventsRejoin
 */
+ (instancetype)queryWithObject:(GTLRCloudRetail_GoogleCloudRetailV2RejoinUserEventsRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Writes a single user event.
 *
 *  Method: retail.projects.locations.catalogs.userEvents.write
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsCatalogsUserEventsWrite : GTLRCloudRetailQuery

/**
 *  Required. The parent catalog resource name, such as
 *  `projects/1234/locations/global/catalogs/default_catalog`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleCloudRetailV2UserEvent.
 *
 *  Writes a single user event.
 *
 *  @param object The @c GTLRCloudRetail_GoogleCloudRetailV2UserEvent to include
 *    in the query.
 *  @param parent Required. The parent catalog resource name, such as
 *    `projects/1234/locations/global/catalogs/default_catalog`.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsCatalogsUserEventsWrite
 */
+ (instancetype)queryWithObject:(GTLRCloudRetail_GoogleCloudRetailV2UserEvent *)object
                         parent:(NSString *)parent;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: retail.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsOperationsGet : GTLRCloudRetailQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleLongrunningOperation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  Method: retail.projects.locations.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRetailCloudPlatform
 */
@interface GTLRCloudRetailQuery_ProjectsLocationsOperationsList : GTLRCloudRetailQuery

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudRetail_GoogleLongrunningListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRCloudRetailQuery_ProjectsLocationsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
