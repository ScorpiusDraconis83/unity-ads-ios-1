#import "USRVStorage.h"

@interface USRVStorageManager : NSObject

+ (instancetype) sharedInstance;
+ (USRVStorage *)getStorage: (UnityServicesStorageType)storageType;
+ (void)removeStorage: (UnityServicesStorageType)storageType;
- (void)commit: (NSDictionary *)storageContents;

@end
