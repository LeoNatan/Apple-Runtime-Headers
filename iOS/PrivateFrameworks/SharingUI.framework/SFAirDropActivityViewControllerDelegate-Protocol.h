//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SharingUI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol SFAirDropActivityViewControllerDelegate <NSObject>
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityRequestingSharedItemsWithCompletionHandler:(void (^)(void))arg1;

@optional
- (void)airDropActivityDidReceiveInitialPeopleList;
- (void)nodePressedWithRecipients:(NSArray *)arg1;
- (void)nodePressedWithGUID:(NSString *)arg1 groupName:(NSString *)arg2 recipients:(NSArray *)arg3;
- (void)airDropActivityDidFailToStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)airDropActivityDoneButtonPressed;
@end

