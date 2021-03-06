//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LaunchServices/LSCodeEvaluationClientProtocol-Protocol.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSCodeEvaluationClientManager : NSObject <LSCodeEvaluationClientProtocol>
{
    struct os_unfair_lock_s _propertiesLock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_connMap;
    NSMutableDictionary *_opMap;
    NSMutableSet *_evaluations;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property struct os_unfair_lock_s propertiesLock; // @synthesize propertiesLock=_propertiesLock;
@property(retain) NSMutableSet *evaluations; // @synthesize evaluations=_evaluations;
@property(retain) NSMutableDictionary *opMap; // @synthesize opMap=_opMap;
@property(retain) NSMutableDictionary *connMap; // @synthesize connMap=_connMap;
@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)handleProgressCancelForIdentifier:(id)arg1;
- (void)handlePromptResponse:(long long)arg1 info:(id)arg2 identifier:(id)arg3;
- (void)showSecurityPreferencesForInfo:(id)arg1 anchor:(id)arg2;
- (void)showOriginForInfo:(id)arg1;
- (void)ejectVolumeForInfo:(id)arg1;
- (void)moveItemToTrashForInfo:(id)arg1;
- (void)registerWithLaunchServicesForInfo:(id)arg1;
- (BOOL)updateQuarantineFlagsForInfo:(id)arg1 setFlags:(int)arg2 clearFlags:(int)arg3;
- (BOOL)presentPromptOfType:(long long)arg1 options:(long long)arg2 info:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_checkAllowed32BitHostProcess:(id)arg1;
- (void)finishProgress:(id)arg1;
- (void)updateProgress:(id)arg1;
- (void)startProgress:(id)arg1;
- (id)fetchOperationWithIdentifier:(id)arg1;
- (void)unregisterOperation:(id)arg1;
- (void)registerOperation:(id)arg1;
- (void)unregisterEvaluation:(id)arg1;
- (void)registerEvaluation:(id)arg1;
- (void)_unregisterConnectionForUID:(unsigned int)arg1;
- (id)connectionForUID:(unsigned int)arg1;
- (void)_cleanUpConnectionForUID:(unsigned int)arg1;
- (BOOL)getUIDForSystemProcessAlerts:(unsigned int *)arg1;
- (id)opMapCopy;
- (void)unlockProperties;
- (void)lockProperties;
- (void)dealloc;
- (id)init;

@end

