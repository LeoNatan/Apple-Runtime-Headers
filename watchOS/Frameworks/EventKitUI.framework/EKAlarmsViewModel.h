//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendarItem, NSMutableArray;

@interface EKAlarmsViewModel : NSObject
{
    _Bool _canHaveLeaveNowAlarm;
    _Bool _hasLeaveNowAlarm;
    _Bool _needsUpdate;
    EKCalendarItem *_calendarItem;
    NSMutableArray *_uiAlarms;
}

+ (id)labelTextForIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uiAlarms; // @synthesize uiAlarms=_uiAlarms;
@property(retain, nonatomic) EKCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
- (id)createAlarmEditItemViewControllerWithFrame:(struct CGRect)arg1 forAlarmAtIndex:(unsigned int)arg2;
@property(readonly, nonatomic) _Bool hasLeaveNowAlarm;
@property(readonly, nonatomic) _Bool canHaveLeaveNowAlarm;
- (void)_updateLeaveNowFlags;
- (void)_updateAlarms;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (_Bool)_hasUIAlarmChangedFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2;
- (void)updatedUIAlarmFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 atIndex:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithCalendarItem:(id)arg1;
- (id)init;

@end

