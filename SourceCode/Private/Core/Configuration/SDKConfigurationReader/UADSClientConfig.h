#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class UADSConfigurationExperiments;

@protocol UADSClientConfig <NSObject>
- (NSString *)  gameID;
- (NSString *)  sdkVersionName;
- (NSString *)  sdkVersion;

- (BOOL)        isSwiftInitEnabled;
@end

@interface UADSCClientConfigBase : NSObject<UADSClientConfig>
+ (instancetype)newWithExperiments: (UADSConfigurationExperiments *)experiments
                         andGameID: (NSString *)gameID
                    andVersionName: (NSString *)versionName
                        andVersion: (NSNumber *)version;

+ (instancetype)defaultWithExperiments: (UADSConfigurationExperiments *)experiments;
@end

NS_ASSUME_NONNULL_END
