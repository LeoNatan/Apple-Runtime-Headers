//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationBezelView.h>

@class UIView;
@protocol NTKColoringView;

@interface NTKRichComplicationBezelBaseTextView : NTKRichComplicationBezelView
{
    UIView<NTKColoringView> *_label;
    double _labelRotationInDegree;
    double _labelScale;
}

- (void).cxx_destruct;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;
- (void)_editingDidEnd;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_layoutLabel;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (id)_labelFont;
- (id)_createLabelViewWithFont:(id)arg1;
- (id)label;
- (id)init;

@end

