//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEvent : NSObject
{
    NSArray *_eventData;
    NSDictionary *_rawData;
    NSArray *_sortedPageKeys;
    NSArray *_sortedPrimaryKeys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sortedPrimaryKeys; // @synthesize sortedPrimaryKeys=_sortedPrimaryKeys;
@property(retain, nonatomic) NSArray *sortedPageKeys; // @synthesize sortedPageKeys=_sortedPageKeys;
@property(retain, nonatomic) NSDictionary *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, nonatomic) NSString *pageContext;
@property(readonly, nonatomic) NSString *eventType;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSDictionary *rawEvent;
- (id)_sortKeys:(id)arg1;
- (id)initWithEventDictionary:(id)arg1 termCollater:(id)arg2;

@end

