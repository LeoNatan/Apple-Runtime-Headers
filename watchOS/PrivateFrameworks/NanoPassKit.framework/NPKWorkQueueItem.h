//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPKOSTransaction;

@interface NPKWorkQueueItem : NSObject
{
    NPKOSTransaction *_transaction;
    CDUnknownBlockType _workBlock;
}

+ (id)itemWithTransaction:(id)arg1 work:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType workBlock; // @synthesize workBlock=_workBlock;
@property(readonly, nonatomic) NPKOSTransaction *transaction; // @synthesize transaction=_transaction;
- (id)initWithTransaction:(id)arg1 work:(CDUnknownBlockType)arg2;

@end

