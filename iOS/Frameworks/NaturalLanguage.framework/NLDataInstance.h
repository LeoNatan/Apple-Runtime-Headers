//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NLDataInstance : NSObject
{
}

- (id)subInstanceWithLocator:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (id)locatorsWithIndex:(unsigned long long)arg1 parameters:(struct _NLConstraintParameters)arg2 tagger:(id)arg3 tokenizer:(struct __CFStringTokenizer *)arg4;
- (struct __CFDictionary *)instanceDictionary;
- (id)formattedLineWithLabelMap:(id)arg1 vocabularyMap:(id)arg2;
@property(readonly, copy) NSArray *labels;
@property(readonly, copy) NSString *label;
@property(readonly, copy) NSArray *tokens;
@property(readonly, copy) NSString *string;
- (id)initWithLine:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (id)initWithString:(id)arg1 label:(id)arg2;

@end

