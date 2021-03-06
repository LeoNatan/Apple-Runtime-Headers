//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSEndpointConnection;
@protocol OS_dispatch_queue;

@interface CLSUtilityService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CLSEndpointConnection *_endpointConnection;
}

+ (id)sharedInstance;
+ (Class)endpointClass;
- (void).cxx_destruct;
@property(retain, nonatomic) CLSEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
- (void)setUserDefaultValue:(id)arg1 forDefaultNamed:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getUserDefaultForDefaultNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userDefaultsConfigurationDictionaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)authorizationStatusForContextAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncPushWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncStatsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDevMode:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDevModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)recreateDevelopmentDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)recreateDatabase:(_Bool)arg1 andTerminateDaemonWithCompletion:(CDUnknownBlockType)arg2;
- (void)recreateDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)databasePathWithCompletion:(CDUnknownBlockType)arg1;
- (id)utilityServer:(CDUnknownBlockType)arg1;
- (id)initWithEndpoint:(id)arg1;

@end

