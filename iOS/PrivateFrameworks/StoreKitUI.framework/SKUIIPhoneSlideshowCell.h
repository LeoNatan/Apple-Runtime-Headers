//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIIPhoneSlideshowCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_playIcon;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic, getter=isVideo) _Bool video;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) struct CGRect imageFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

