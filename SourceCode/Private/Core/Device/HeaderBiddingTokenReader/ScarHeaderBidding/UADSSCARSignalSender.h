#ifndef UADSSCARSignalSender_h
#define UADSSCARSignalSender_h

#import "UADSHeaderBiddingTokenReaderSCARSignalsConfig.h"

@protocol UADSSCARSignalSender

- (void)sendSCARSignalsWithUUIDString:(NSString* _Nonnull)uuidString signals:(UADSSCARSignals * _Nonnull) signals;

@end

#endif /* UADSSCARSignalSender_h */
