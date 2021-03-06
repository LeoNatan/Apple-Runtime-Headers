//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFTimerDelegate-Protocol.h>

@class HMFTimer, MovingAverage, NSString;

@interface HMIMemorySampler : HMFObject <HMFTimerDelegate, HMFLogging>
{
    long long _highWaterMark;
    HMFTimer *_tick;
    MovingAverage *_average;
}

+ (id)logCategory;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly) MovingAverage *average; // @synthesize average=_average;
@property(readonly) HMFTimer *tick; // @synthesize tick=_tick;
@property long long highWaterMark; // @synthesize highWaterMark=_highWaterMark;
- (void)timerDidFire:(id)arg1;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

