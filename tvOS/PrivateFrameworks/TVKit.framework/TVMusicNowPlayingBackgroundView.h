//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface TVMusicNowPlayingBackgroundView : UIView
{
    UIImage *_artworkImage;
    UIImageView *_animatedView1;
    UIImageView *_animatedView2;
}

- (void).cxx_destruct;
- (id)_resizeImage:(struct CGImage *)arg1 targetSize:(struct CGSize)arg2 shouldDither:(_Bool)arg3;
- (id)_blurredImageWithImage:(id)arg1 targetSize:(struct CGSize)arg2;
- (void)_setupAnimatedViews;
- (void)_setupAnimationForView:(id)arg1 duration:(double)arg2;
- (void)_setupAnimations;
- (void)didMoveToSuperview;
- (id)initWithImage:(id)arg1;

@end

