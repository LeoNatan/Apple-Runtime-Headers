//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PineBoardServices/PBSAppDepotProxyProtocol-Protocol.h>
#import <PineBoardServices/PBSAppInfoControllerObserver-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface PBSAppDepotProxy : NSObject <PBSAppInfoControllerObserver, PBSAppDepotProxyProtocol>
{
    NSDictionary *_appState;
    NSArray *_provisionedAppIdentifiers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_queue_setProvisionedAppIdentifiers:(id)arg1;
@property(readonly, copy) NSArray *provisionedAppIdentifiers; // @synthesize provisionedAppIdentifiers=_provisionedAppIdentifiers;
@property(readonly, copy) NSDictionary *appState; // @synthesize appState=_appState;
- (id)appStateForAppIdentifier:(id)arg1;
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

