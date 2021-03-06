//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/CRDataType-Protocol.h>

@class CRTTCompatibleDocument, NSHashTable, NSMutableAttributedString, NSString, NSUUID, TTVectorMultiTimestamp;
@protocol TTMergeableStringDelegate;

@interface TTMergeableString : NSObject <CRDataType>
{
    vector_c5c053b6 _startNodes;
    vector_c5c053b6 _endNodes;
    vector_c5c053b6 _orderedSubstrings;
    unsigned int _unserializedClock;
    unsigned int _editCount;
    _Bool _cacheInvalid;
    CDUnknownBlockType _updateRangeBlock;
    _Bool _hasLocalChanges;
    NSUUID *_replicaUUID;
    TTVectorMultiTimestamp *_timestamp;
    NSObject<TTMergeableStringDelegate> *_delegate;
    NSHashTable *_objectsNeedingUpdatedRanges;
    NSMutableAttributedString *_attributedString;
    unsigned int _replicaTextClock;
    unsigned int _replicaStyleClock;
}

+ (id)unserialisedReplicaID;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int replicaStyleClock; // @synthesize replicaStyleClock=_replicaStyleClock;
@property(readonly, nonatomic) unsigned int replicaTextClock; // @synthesize replicaTextClock=_replicaTextClock;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) NSHashTable *objectsNeedingUpdatedRanges; // @synthesize objectsNeedingUpdatedRanges=_objectsNeedingUpdatedRanges;
@property(nonatomic) __weak NSObject<TTMergeableStringDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasLocalChanges; // @synthesize hasLocalChanges=_hasLocalChanges;
@property(retain, nonatomic) TTVectorMultiTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
- (id)dotDescription:(unsigned int)arg1;
@property(readonly) unsigned int hash;
- (_Bool)graphIsEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)traverseUnordered:(CDUnknownBlockType)arg1;
- (void)sortSplitNodes;
- (unsigned int)mergeWithString:(id)arg1 mergeTimestamps:(_Bool)arg2;
- (unsigned int)mergeWithString:(id)arg1;
- (void)dumpMergeData:(id)arg1;
- (void)checkTimestampLogStyleErrors:(_Bool)arg1;
- (_Bool)check:(id *)arg1;
- (void)updateClock;
- (_Bool)canMergeString:(id)arg1;
- (void)generateIdsForLocalChangesSafeForSharedTimestamp:(_Bool)arg1;
- (void)generateIdsForLocalChanges;
- (void)cleanupObjectsNeedingUpdatedRanges;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (void)coalesce;
- (void)updateSubstringIndexes;
- (void)updateAttributedStringAfterMerge;
- (void)invalidateCache;
- (void)updateCache;
- (vector_c5c053b6 *)orderedSubstrings;
- (struct TopoSubstring *)splitTopoSubstring:(struct TopoSubstring *)arg1 atIndex:(unsigned int)arg2;
- (_Bool)selection:(id)arg1 wasModifiedAfter:(id)arg2;
- (_Bool)textEitherSideOfSelectionAnchor:(struct TopoID)arg1 wasModifiedAfter:(id)arg2;
- (void)enumerateRangesModifiedAfter:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (int)substring:(struct TopoSubstring *)arg1 modifiedAfter:(id)arg2;
- (void)enumerateSubstrings:(CDUnknownBlockType)arg1;
- (unsigned int)getCharacterIndexForCharID:(struct TopoID)arg1;
- (void)getCharacterRanges:(vector_7053a16b *)arg1 forSubstrings:(vector_c5c053b6 *)arg2;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;
- (struct TopoSubstring *)getSubstringBeforeTopoID:(struct TopoID)arg1;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 inOrderedSubstrings:(vector_c5c053b6 *)arg2 forCharacterRange:(struct _NSRange)arg3;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)moveRange:(struct _NSRange)arg1 toIndex:(unsigned int)arg2;
- (struct TopoIDRange)insertAttributedString:(id)arg1 after:(struct TopoSubstring *)arg2 before:(struct TopoSubstring *)arg3;
- (void)deleteSubstrings:(vector_c5c053b6 *)arg1 withCharacterRanges:(vector_7053a16b *)arg2;
- (void)updateTimestampsInRange:(struct _NSRange)arg1;
- (vector_c5c053b6 *)endNodes;
- (vector_c5c053b6 *)startNodes;
- (_Bool)isFragment;
- (void)_testSetTextTimestamp:(unsigned int)arg1;
- (void)resetLocalReplicaClocksToTimestampValues;
- (_Bool)shouldInvalidateCachedSubstringsWithTimestamp:(id)arg1;
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(CDUnknownBlockType)arg2;
- (id)characterRangesForSelection:(id)arg1;
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned int)arg2;
- (id)selectionForCharacterRanges:(id)arg1;
- (id)replicaUUIDForCharacterAtIndex:(unsigned int)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned int)arg2;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)length;
- (id)string;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithReplicaID:(id)arg1 asFragment:(_Bool)arg2;
- (id)initWithReplicaID:(id)arg1;
- (id)init;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
@property(retain, nonatomic) CRTTCompatibleDocument *document;
- (id)serializeDeltaSinceTimestamp:(id)arg1;
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(struct String *)arg2;
- (id)i_saveDeltasSinceTimestamp:(id)arg1 toArchive:(struct String *)arg2;
- (id)serialize;
- (void)saveSubstrings:(vector_c5c053b6 *)arg1 archiveSet:(unordered_set_b139f8aa *)arg2 linkSet:(unordered_set_b139f8aa *)arg3 archivedString:(id *)arg4 toArchive:(struct String *)arg5;
- (void)saveToArchive:(struct String *)arg1;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector_c5c053b6 *)arg3 timestamp:(id)arg4;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector_c5c053b6 *)arg3;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 andSharedTimestamp:(id)arg3;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

