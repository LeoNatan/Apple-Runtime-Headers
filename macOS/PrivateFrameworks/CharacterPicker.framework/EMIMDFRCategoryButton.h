//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSBox.h>

@class NSButton, NSImage;

__attribute__((visibility("hidden")))
@interface EMIMDFRCategoryButton : NSBox
{
    NSButton *_imageButton;
    BOOL _enabled;
    BOOL _highlighted;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) NSImage *image;
- (void)setImageAlpha:(double)arg1;
- (void)showHideImage:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

