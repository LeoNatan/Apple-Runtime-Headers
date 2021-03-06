//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

@protocol JRSMenuDelegate;

@interface JRSMenu : NSMenu
{
    id <JRSMenuDelegate> _delegate;
    struct OpaqueEventHandlerRef *_menuEventHandler;
    struct OpaqueEventHandlerRef *_mouseEventHandler;
}

@property id <JRSMenuDelegate> _delegate; // @synthesize _delegate;
- (void)finalize;
- (void)dealloc;
- (void)_releaseMenuHandlers;
- (void)installCarbonEventHandlers:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (void)handleJavaMouseEvent:(struct OpaqueEventRef *)arg1;
- (void)handleJavaMenuEvent:(struct OpaqueEventRef *)arg1;

@end

