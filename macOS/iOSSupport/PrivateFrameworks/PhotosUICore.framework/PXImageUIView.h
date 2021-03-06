//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXAdjustableContentsView-Protocol.h>

@class NSArray, NSMutableArray, NSString, PXFocusableUIImageView, PXImageViewSpec, PXRoundedCornerOverlayView, UIImage;

@interface PXImageUIView : UIView <PXAdjustableContentsView>
{
    NSMutableArray *_overlayViews;
    UIView *_floatingOverlayView;
    struct UIEdgeInsets _floatingInsets;
    BOOL _hasParallax;
    unsigned long long _animationFlags;
    UIView *_snapshotView;
    BOOL _floatingViewEnabled;
    BOOL _animating;
    BOOL _floatingRotationEnabled;
    UIImage *_image;
    PXImageViewSpec *_spec;
    UIView *_contentView;
    long long _contentMode;
    PXFocusableUIImageView *__imageView;
    PXRoundedCornerOverlayView *__cornerView;
    NSArray *__overlaySpecs;
    struct CGRect _contentsRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setOverlaySpecs:) NSArray *_overlaySpecs; // @synthesize _overlaySpecs=__overlaySpecs;
@property(retain, nonatomic, setter=_setCornerView:) PXRoundedCornerOverlayView *_cornerView; // @synthesize _cornerView=__cornerView;
@property(readonly, nonatomic) PXFocusableUIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic, getter=isFloatingRotationEnabled) BOOL floatingRotationEnabled; // @synthesize floatingRotationEnabled=_floatingRotationEnabled;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) BOOL floatingViewEnabled; // @synthesize floatingViewEnabled=_floatingViewEnabled;
@property(retain, nonatomic) PXImageViewSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setAnimating:(BOOL)arg1 withFlags:(unsigned long long)arg2;
- (void)_updateSubviewsOrdering;
- (void)_updateCorners;
- (void)_updateFloatingOverlay;
- (void)setFloatingOverlay:(id)arg1 withInsets:(struct UIEdgeInsets)arg2 parallax:(BOOL)arg3;
- (void)_PXImageUIViewInitialization;
@property(nonatomic) BOOL allowsFocus;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

