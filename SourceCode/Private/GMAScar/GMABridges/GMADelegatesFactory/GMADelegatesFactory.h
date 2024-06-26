#import <Foundation/Foundation.h>
#import "GMAInterstitialAdDelegateProxy.h"
#import "GMARewardedAdDelegateProxy.h"
#import "UADSTimerFactory.h"

NS_ASSUME_NONNULL_BEGIN

@protocol GMADelegatesFactory <NSObject>
- (GMAInterstitialAdDelegateProxy *)interstitialDelegate: (GMAAdMetaData *)meta
                                           andCompletion: (UADSAnyCompletion *)completion;
- (GMARewardedAdDelegateProxy *)rewardedDelegate: (GMAAdMetaData *)meta;

@end

@interface GMADelegatesBaseFactory : NSObject<GMADelegatesFactory>

+ (instancetype)newWithEventSender: (id<UADSWebViewEventSender>)eventSender
                      errorHandler: (id<UADSErrorHandler>)errorHandler;

+ (instancetype)newWithEventSender: (id<UADSWebViewEventSender>)eventSender
                      errorHandler: (id<UADSErrorHandler>)errorHandler
                      timerFactory: (id<UADSTimerFactory>)timerFactory;

@end

NS_ASSUME_NONNULL_END
