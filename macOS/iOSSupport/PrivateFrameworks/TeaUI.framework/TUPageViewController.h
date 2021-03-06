//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TeaUI/TUPageViewControllerScrollViewAccessibilityDelegate-Protocol.h>
#import <TeaUI/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSObject, NSString, TUPageViewControllerScrollView;
@protocol OS_dispatch_group, TUPageViewControllerDataSource, TUPageViewControllerDelegate;

@interface TUPageViewController : UIViewController <UIScrollViewDelegate, TUPageViewControllerScrollViewAccessibilityDelegate>
{
    BOOL _cancelScrollViewDidScroll;
    BOOL _isTransitioning;
    BOOL _scrollViewStartedScrolling;
    id <TUPageViewControllerDataSource> _dataSource;
    id <TUPageViewControllerDelegate> _delegate;
    UIViewController *_visibleViewController;
    UIViewController *_secondaryVisibleViewController;
    UIViewController *_previousViewController;
    UIViewController *_nextViewController;
    double _pageGutter;
    TUPageViewControllerScrollView *_scrollView;
    NSObject<OS_dispatch_group> *_idleDispatchGroup;
    UIViewController *_managedForViewController;
    UIViewController *_originalVisibleViewController;
    UIViewController *_appearingViewController;
    UIViewController *_disappearingViewController;
    NSMutableArray *_replayViewTransitions;
    struct CGSize _transitioningSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *replayViewTransitions; // @synthesize replayViewTransitions=_replayViewTransitions;
@property(readonly, nonatomic) BOOL scrollViewStartedScrolling; // @synthesize scrollViewStartedScrolling=_scrollViewStartedScrolling;
@property(readonly, nonatomic) struct CGSize transitioningSize; // @synthesize transitioningSize=_transitioningSize;
@property(readonly, nonatomic) BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) BOOL cancelScrollViewDidScroll; // @synthesize cancelScrollViewDidScroll=_cancelScrollViewDidScroll;
@property(retain, nonatomic) UIViewController *disappearingViewController; // @synthesize disappearingViewController=_disappearingViewController;
@property(retain, nonatomic) UIViewController *appearingViewController; // @synthesize appearingViewController=_appearingViewController;
@property(retain, nonatomic) UIViewController *originalVisibleViewController; // @synthesize originalVisibleViewController=_originalVisibleViewController;
@property(retain, nonatomic) UIViewController *managedForViewController; // @synthesize managedForViewController=_managedForViewController;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *idleDispatchGroup; // @synthesize idleDispatchGroup=_idleDispatchGroup;
@property(readonly, nonatomic) TUPageViewControllerScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double pageGutter; // @synthesize pageGutter=_pageGutter;
@property(retain, nonatomic) UIViewController *nextViewController; // @synthesize nextViewController=_nextViewController;
@property(retain, nonatomic) UIViewController *previousViewController; // @synthesize previousViewController=_previousViewController;
@property(readonly, nonatomic) UIViewController *secondaryVisibleViewController; // @synthesize secondaryVisibleViewController=_secondaryVisibleViewController;
@property(retain, nonatomic) UIViewController *visibleViewController; // @synthesize visibleViewController=_visibleViewController;
@property(nonatomic) __weak id <TUPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TUPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)childViewControllerForStatusBarHidden;
- (BOOL)isTransitioningToViewController;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)transitionToSize:(struct CGSize)arg1;
- (void)accessibilityHandleRequestToGoForewardForPageViewControllerScrollView:(id)arg1;
- (void)accessibilityHandleRequestToGoBackForPageViewControllerScrollView:(id)arg1;
- (void)switchToPreviousViewController;
- (void)keyboardOrActionSwitchToPreviousViewController;
- (void)keyboardOrActionSwitchToNextViewController;
- (void)_keyboardSwitchGoingRight:(BOOL)arg1;
- (BOOL)canSwitchToNextViewController;
- (BOOL)canSwitchToPreviousViewController;
- (void)switchToNextViewController;
- (BOOL)_assistiveTechnologyIsRunning;
- (BOOL)_shouldIgnoreDidScrollWithScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)callLastViewAppearanceMethods;
- (void)handleScrollEnd;
- (void)handleScrollStart;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reindexViewControllers;
- (void)addViewController:(id)arg1 fromScroll:(BOOL)arg2;
- (void)removeViewController:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)updatePositionForViewController:(id)arg1;
- (void)managePreviousAndNextViewController;
- (void)repositionPages;
- (struct CGPoint)centerForIndex:(unsigned long long)arg1;
- (void)setSecondaryVisibleViewController:(id)arg1;
- (void)updateContentOffset;
- (void)updateContentSize;
- (void)updateScrollView;
- (struct CGRect)calculateScrollViewFrameFromViewBounds:(struct CGRect)arg1;
@property(nonatomic) BOOL pagingEnabled;
@property(readonly, nonatomic) struct CGSize pageSize;
- (void)performWhenIdle:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

