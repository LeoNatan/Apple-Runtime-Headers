//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/CSLUIIconView.h>

@class NTKClockIconView, UIView;
@protocol NCClockIconViewZoomController;

@interface NCClockIconView : CSLUIIconView
{
    NTKClockIconView *_circleView;
    _Bool _circleViewBorrowed;
    _Bool _paused;
    id <NCClockIconViewZoomController> _zoomController;
    UIView *_zoomView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <NCClockIconViewZoomController> zoomController; // @synthesize zoomController=_zoomController;
- (id)description;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)setDiameter:(float)arg1;
- (void)cleanupAfterZoom;
- (void)prepareToZoom;
- (void)restoreCircleView;
- (id)borrowCircleView;
- (void)applyLayoutAttributes:(CDStruct_727cf631)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

