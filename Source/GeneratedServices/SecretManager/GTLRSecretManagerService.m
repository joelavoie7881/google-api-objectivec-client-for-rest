// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Secret Manager API (secretmanager/v1)
// Description:
//   Stores sensitive data such as API keys, passwords, and certificates.
//   Provides convenience while improving security.
// Documentation:
//   https://cloud.google.com/secret-manager/

#import "GTLRSecretManager.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeSecretManagerCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRSecretManagerService
//

@implementation GTLRSecretManagerService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://secretmanager.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end