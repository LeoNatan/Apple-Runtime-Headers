//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKDisplayType.h>

@interface HKDisplayType (WDDataProviders)
- (id)wd_detailViewControllerWithProfile:(id)arg1 displayDate:(id)arg2;
- (long long)_heartRoomDisplayTypeContext:(long long)arg1;
- (id)wd_contextDetailViewControllerWithProfile:(id)arg1 displayDate:(id)arg2;
- (Class)_wd_addDataViewControllerClass;
- (Class)_wd_listViewControllerDataProviderClass:(_Bool)arg1;
- (id)wd_defaultValueForAddDataViewController;
- (id)wd_valueOrderForAddDataViewController;
- (id)wd_addDataViewControllerWithProfile:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3;
- (id)wd_dataListViewControllerWithProfile:(id)arg1 unitController:(id)arg2;
- (id)wd_dataListViewControllerWithProfile:(id)arg1;
- (id)wd_listViewControllerDataProviderWithProfile:(id)arg1 unitController:(id)arg2 isHierarchical:(_Bool)arg3;
- (id)wd_listViewControllerDataProviderWithProfile:(id)arg1 unitController:(id)arg2;
- (id)wd_outOfRangeAlertDisplayName;
@property(readonly) long long wd_heartRateDisplayTypeContext;
@end

