//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@class NSArray;
@protocol NSCollectionLayoutContainer, _NSCollectionLayoutSupplementaryEnrolling, _NSCollectionPreferredSizes;

@protocol _NSCollectionLayoutAuxiliaryHosting <NSObject>
- (id <_NSCollectionPreferredSizes>)auxiliaryHostPreferredSizes;
- (id <_NSCollectionLayoutSupplementaryEnrolling>)auxiliaryHostSupplementaryEnroller;
- (long long)auxiliaryHostAuxiliaryKind;
- (int)auxiliaryHostLayoutAxis;
- (BOOL)auxiliaryHostShouldLayoutRTL;
- (NSArray *)auxiliaryHostAuxiliaryItems;
- (id <NSCollectionLayoutContainer>)auxiliaryHostContainer;
- (struct CGSize)auxiliaryHostPinningContentSize;
- (struct CGSize)auxiliaryHostContentSize;

@optional
- (struct CGPoint)auxiliaryHostAdditionalFrameOffset;
@end

