//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CSLPITimedPowerAssertion : NSObject
{
    unsigned int _assertionID;
    struct __CFString *_assertionType;
    struct __CFString *_assertionName;
    double _timeout;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)relinquish;
- (void)take;
- (id)initWithAssertionType:(struct __CFString *)arg1 assertionName:(struct __CFString *)arg2 timeout:(double)arg3;
- (id)init;

@end

