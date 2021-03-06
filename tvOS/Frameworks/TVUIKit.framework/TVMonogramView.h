//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVUIKit/TVLockupView.h>

@class NSPersonNameComponents, NSString, UIImage;

@interface TVMonogramView : TVLockupView
{
    NSPersonNameComponents *_personNameComponents;
    UIImage *_image;
    UIImage *_placeholderImage;
    UIImage *_circularImage;
}

+ (id)imageWithSize:(struct CGSize)arg1 format:(id)arg2 actions:(CDUnknownBlockType)arg3;
+ (Class)_concreteContentViewClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *circularImage; // @synthesize circularImage=_circularImage;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSPersonNameComponents *personNameComponents; // @synthesize personNameComponents=_personNameComponents;
- (id)_defaultFillColor;
- (id)_placeholderImage;
- (void)_updateFocusSizeIncrease;
- (void)_updateContentviewImage:(id)arg1;
- (void)_updateMonogramImage;
- (id)_newCircularImageForImage:(id)arg1;
- (void)_updateAppearanceForFocusUpdateContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_createFooterView;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

