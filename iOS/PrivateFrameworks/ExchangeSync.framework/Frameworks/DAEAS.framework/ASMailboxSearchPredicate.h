//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface ASMailboxSearchPredicate : NSObject
{
    NSPredicate *_predicate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (id)getString;
- (id)getStringForPredicate:(id)arg1;
- (id)getStringForCompoundPredicate:(id)arg1;
- (id)getStringForComparisonPredicate:(id)arg1;
- (_Bool)isValid;
- (id)initWithPredicate:(id)arg1;

@end

