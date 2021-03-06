//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSManagedObjectContext, NSPersistentContainer, TransparencyManagedDataStore;

@interface TransparencyManagedDataStoreController : NSObject
{
    // Error parsing type: Aq, name: _sequenceId
    BOOL _movedDatabase;
    TransparencyManagedDataStore *_dataStore;
    TransparencyManagedDataStore *_xpcQueueDataStore;
    TransparencyManagedDataStore *_mainQueueDataStore;
    NSPersistentContainer *_persistentContainer;
    NSManagedObjectContext *_topLevelContext;
    NSManagedObjectContext *_mainQueueContext;
    NSHashTable *_mocStore;
}

+ (void)reportCoreDataEventForEntity:(id)arg1 hardFailure:(BOOL)arg2 write:(BOOL)arg3 code:(long long)arg4 underlyingError:(id)arg5;
+ (void)reportCoreDataEventForEntity:(id)arg1 write:(BOOL)arg2 code:(long long)arg3 underlyingError:(id)arg4;
- (void).cxx_destruct;
@property(retain) NSHashTable *mocStore; // @synthesize mocStore=_mocStore;
@property BOOL movedDatabase; // @synthesize movedDatabase=_movedDatabase;
@property(retain) NSManagedObjectContext *mainQueueContext; // @synthesize mainQueueContext=_mainQueueContext;
@property(retain) NSManagedObjectContext *topLevelContext; // @synthesize topLevelContext=_topLevelContext;
@property(retain) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain) TransparencyManagedDataStore *mainQueueDataStore; // @synthesize mainQueueDataStore=_mainQueueDataStore;
@property(retain) TransparencyManagedDataStore *xpcQueueDataStore; // @synthesize xpcQueueDataStore=_xpcQueueDataStore;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(readonly) NSManagedObjectContext *backgroundContext;
// Error parsing type for property sequenceId:
// Property attributes: T^Aq,R

- (void)saveTopLevelContext;
- (BOOL)saveContext:(id)arg1 error:(id *)arg2;
- (void)handleDidSaveNotification:(id)arg1;
- (void)loadPersistentStores;
- (long long)currentSequenceId:(id *)arg1;
- (void)createDataStores;
- (void)createContexts;
- (BOOL)moveAsideDatabase:(id)arg1;
- (BOOL)shouldMoveAsideDatabase:(id)arg1;
@property(readonly) BOOL loadedStore;
- (id)bundleURL;
- (id)init;

@end

