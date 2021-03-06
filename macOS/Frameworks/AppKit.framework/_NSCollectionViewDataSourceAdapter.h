//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCollectionViewDataSource-Protocol.h>

@class NSCollectionView, NSCollectionViewIndexMapper, NSMapTable, NSMutableArray, NSMutableIndexSet, NSString, _NSCollectionViewCachedWorldInfo;
@protocol NSCollectionViewDataSource;

__attribute__((visibility("hidden")))
@interface _NSCollectionViewDataSourceAdapter : NSObject <NSCollectionViewDataSource>
{
    NSCollectionView *_collectionView;
    id <NSCollectionViewDataSource> _dataSource;
    BOOL _dataSourceImplementsObjectMethods;
    BOOL _flushCacheAtNextLayoutBecauseReloadDataWasInvoked;
    _NSCollectionViewCachedWorldInfo *_committedState;
    _NSCollectionViewCachedWorldInfo *_incomingState;
    NSCollectionViewIndexMapper *_sectionIndexMapper;
    BOOL _reportPostBatchUpdateState;
    BOOL _finishingBatchUpdate;
    id _representedObjectForCurrentDataSourceInvocation;
    NSMapTable *_pushedSectionIndexesToRepresentedObjectsMap;
    NSMapTable *_pushedSectionObjectsToItemObjectsMap;
    NSMapTable *_sectionRepresentedObjectToQueuedInsertionIndexesMap;
    NSMutableIndexSet *_queuedSectionDeleteIndexes;
    NSMutableArray *_queuedSectionMoveIndexPairs;
    NSMutableIndexSet *_queuedSectionInsertIndexes;
}

- (void).cxx_destruct;
@property NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)dealloc;
@property(readonly, copy) NSString *debugDescription;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)_queueInsertItemsAtIndexes:(id)arg1 inSectionObject:(id)arg2;
- (void)_queueDeleteItemsAtIndexPaths:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)_noteMoveSection:(long long)arg1 toSection:(long long)arg2;
- (void)_noteDeleteSections:(id)arg1;
- (void)_noteInsertSections:(id)arg1;
- (void)_insertSections:(id)arg1 representedObjects:(id)arg2;
- (void)_stashPushedRepresentedObjects:(id)arg1 forSectionInsertsAtIndexes:(id)arg2;
- (id)_indexPathForRepresentedObject:(id)arg1;
- (id)_indexPathOfItemWithRepresentedObject:(id)arg1;
- (void)_rebuildRepresentedObjectToIndexPathMap;
- (void)_clearRepresentedObjectToIndexPathMap;
- (void)_setRepresentedObjects:(id)arg1 forInsertedSection:(id)arg2;
- (id)_representedObjectForSectionAtIndex:(unsigned long long)arg1;
- (void)_setRepresentedObject:(id)arg1 forSectionAtIndex:(unsigned long long)arg2;
- (id)_representedObjectForIndexPath:(id)arg1;
- (id)_representedObjectForItemAtIndexPath:(id)arg1;
- (id)_representedObjectForCurrentDataSourceInvocation;
- (void)_invalidateEverythingNowOrLater;
- (void)_invalidateEverything;
- (unsigned long long)_indexOfSectionWithRepresentedObject:(id)arg1 inBatchUpdateAfterState:(BOOL)arg2;
- (unsigned long long)_indexOfSectionWithRepresentedObject:(id)arg1;
@property __weak id <NSCollectionViewDataSource> dataSource;
- (void)_endBatchUpdate;
- (void)_finishBatchUpdateWithUpdateItems:(id)arg1 newSectionCount:(long long)arg2 newSectionSourceIndexes:(long long *)arg3 newSectionItemCounts:(long long *)arg4 newGlobalItemCount:(long long)arg5 newGlobalItemSourceIndexes:(long long *)arg6;
- (void)_processQueuedInsertsInSectionObjects;
- (void)_prepareForBatchUpdate;
- (void)_beginReportingPostBatchUpdateState;
- (void)_flushCacheIfScheduled;
- (void)_scheduleFlushCacheAtNextLayoutBecauseReloadDataWasInvoked;
@property(readonly) long long committedSectionCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

