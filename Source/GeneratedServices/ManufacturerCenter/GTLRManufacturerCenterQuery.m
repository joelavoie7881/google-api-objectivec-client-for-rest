// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Manufacturer Center API (manufacturers/v1)
// Description:
//   Public API for managing Manufacturer Center related data.
// Documentation:
//   https://developers.google.com/manufacturers/

#import "GTLRManufacturerCenterQuery.h"

#import "GTLRManufacturerCenterObjects.h"

@implementation GTLRManufacturerCenterQuery

@dynamic fields;

@end

@implementation GTLRManufacturerCenterQuery_AccountsProductsGet

@dynamic name, parent;

+ (instancetype)queryWithParent:(NSString *)parent
                           name:(NSString *)name {
  NSArray *pathParams = @[
    @"name", @"parent"
  ];
  NSString *pathURITemplate = @"v1/{+parent}/products/{+name}";
  GTLRManufacturerCenterQuery_AccountsProductsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.name = name;
  query.expectedObjectClass = [GTLRManufacturerCenter_Product class];
  query.loggingName = @"manufacturers.accounts.products.get";
  return query;
}

@end

@implementation GTLRManufacturerCenterQuery_AccountsProductsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/products";
  GTLRManufacturerCenterQuery_AccountsProductsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRManufacturerCenter_ListProductsResponse class];
  query.loggingName = @"manufacturers.accounts.products.list";
  return query;
}

@end