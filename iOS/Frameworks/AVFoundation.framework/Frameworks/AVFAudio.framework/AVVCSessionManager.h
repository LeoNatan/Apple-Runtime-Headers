//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVVCSessionManager : NSObject
{
    _Bool mShouldDuckOthers;
    _Bool mIsMiniDuckingEnabled;
    _Bool mShouldEnableMiniDucking;
    _Bool mShouldDisableMiniDucking;
    _Bool mSessionNeedsVolumeControl;
    _Bool mSessionNeedsRoutingControl;
    _Bool mSessionOutputIsWirelessSplitter;
    _Bool mIsOtherAudioPlaying;
    _Bool mRouteHasDoAPSupport;
    _Bool mOutputSupportsSWVolume;
    _Bool mDeviceIsIOSAccessory;
    _Bool mDeviceIsOlderWatch;
    unsigned int mSessionActivationOptions;
    long long mPreviousActivationMode;
}

- (_Bool)isAirplayOneOfTheOutputRoutes:(id)arg1;
- (void)setSessionActivationOptions:(unsigned int)arg1;
- (unsigned int)getSessionActivationOptions;
- (_Bool)isSessionOutputInWirelessSplitterMode;
- (void)changeDuckOthersOption:(_Bool)arg1;
- (int)setSessionBufferSizeForRecordingEngine:(struct AVVCRecordingEngine *)arg1;
- (int)setSessionSampleRateForActivationMode:(long long)arg1;
- (int)setSessionAudioHWControlFlagsForActivationMode:(long long)arg1;
- (int)setSessionCategoryModeOptionsForActivationMode:(long long)arg1;
- (void)getHypotheticalRouteAndUpdateStates;
- (_Bool)isMiniDuckingEnabled;
- (void)shouldEnableMiniDucking:(_Bool)arg1;
- (int)setSessionActivationContext:(id)arg1;
- (int)setupOneTimeSessionSettings;
- (id)init;

@end

