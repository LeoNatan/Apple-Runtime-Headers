//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSBox, NSLayoutConstraint;
@protocol PRSTableRowDelegate;

@interface PRSTableRowView : NSTableRowView
{
    NSBox *_lineView;
    NSLayoutConstraint *_cellWidth;
    BOOL _gridlinedBelow;
    double _inset;
    double _additionalInset;
    id <PRSTableRowDelegate> _tableRowDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PRSTableRowDelegate> tableRowDelegate; // @synthesize tableRowDelegate=_tableRowDelegate;
@property double additionalInset; // @synthesize additionalInset=_additionalInset;
@property double inset; // @synthesize inset=_inset;
@property(nonatomic) BOOL gridlinedBelow; // @synthesize gridlinedBelow=_gridlinedBelow;
- (BOOL)accessibilityPerformPress;
- (void)updateConstraints;
- (void)layout;

@end

