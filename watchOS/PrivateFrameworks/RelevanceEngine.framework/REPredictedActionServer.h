//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSXPCConnection, REObserverStore, REUpNextScheduler;
@protocol OS_dispatch_queue;

@interface REPredictedActionServer : NSObject
{
    NSXPCConnection *_connection;
    REUpNextScheduler *_scheduler;
    NSArray *_predictions;
    NSArray *_counts;
    NSDate *_firstPerformedDate;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _fetchingData;
    NSDate *_lastFetchedDate;
    NSMutableArray *_fetchCompletionBlocks;
    REObserverStore *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_invalidateConnection;
- (void)_clearConnection;
- (void)_queue_setupConnection;
- (void)_finishProcessingData;
- (void)_notifyObservers;
- (void)_queue_fetchPredicitions;
- (void)_requestPredictions:(id)arg1;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_accessOrEnqueueDataRequest:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)fetchFirstPerformedActionDate:(CDUnknownBlockType)arg1;
- (void)fetchPredictedActions:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

