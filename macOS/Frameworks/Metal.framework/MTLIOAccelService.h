//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLIOAccelDevice;
@protocol MTLDeviceSPI;

__attribute__((visibility("hidden")))
@interface MTLIOAccelService : NSObject
{
    unsigned int _acceleratorPort;
    struct IONotificationPort *_notifyPort;
    unsigned int _notifyObject;
    MTLIOAccelDevice<MTLDeviceSPI> *_weakDevice;
    unsigned long long _registryID;
}

+ (void)registerService:(unsigned int)arg1;
- (void).cxx_destruct;
@property(readonly) unsigned long long registryID; // @synthesize registryID=_registryID;
@property(readonly) unsigned int acceleratorPort; // @synthesize acceleratorPort=_acceleratorPort;
- (void)dealloc;
- (void)_wasTerminated;
- (void)_safeEjectCancelled;
- (void)_safeEjectRequested;
- (id)weakDevice;
- (void)_setDevice:(id)arg1;
- (id)initWithAcceleratorPort:(unsigned int)arg1;

@end

