//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIGiftDashView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftConfirmLabeledValue : UIView
{
    SKUIGiftDashView *_dashView;
    UILabel *_labelLabel;
    long long _style;
    UILabel *_valueLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long giftConfirmLabelStyle; // @synthesize giftConfirmLabelStyle=_style;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *subtitleLabel;
@property(copy, nonatomic) NSString *label;
- (id)initWithGiftConfirmLabelStyle:(long long)arg1;

@end

