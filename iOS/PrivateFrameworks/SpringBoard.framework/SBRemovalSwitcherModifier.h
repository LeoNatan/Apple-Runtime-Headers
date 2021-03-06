//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;
@protocol SBFluidSwitcherScrollProviding;

@interface SBRemovalSwitcherModifier : SBSwitcherModifier
{
    SBAppLayout *_appLayout;
    long long _reason;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
    _Bool _simulatingPostRemovalState;
    unsigned long long _indexToScrollToAfterRemoval;
    unsigned long long _indexOfAppLayoutPriorToRemoval;
    unsigned long long _phase;
}

- (void).cxx_destruct;
- (id)topMostAppLayouts;
- (id)appLayoutsForInsertionOrRemoval;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(CDUnknownBlockType)arg1;
- (long long)layoutUpdateMode;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (struct CGPoint)scrollViewContentOffset;
- (id)appLayouts;
- (id)handleRemovalEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1 reason:(long long)arg2 multitaskingModifier:(id)arg3;

@end

