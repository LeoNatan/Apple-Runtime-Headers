//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCUIEventInterpolationStepping-Protocol.h>

@class NSString, XCPointerEvent;
@protocol XCUIEventConverting, XCUIEventInterpolating;

@interface XCUIDiscreteEventInterpolationStepper : NSObject <XCUIEventInterpolationStepping>
{
    id <XCUIEventInterpolating> _interpolationContext;
    unsigned long long _interpolationStep;
    XCPointerEvent *_pointerEvent;
    struct __CGEventSource *_eventSource;
    id <XCUIEventConverting> _eventConverter;
}

- (void).cxx_destruct;
@property(readonly) id <XCUIEventConverting> eventConverter; // @synthesize eventConverter=_eventConverter;
@property(readonly) struct __CGEventSource *eventSource; // @synthesize eventSource=_eventSource;
@property(readonly) XCPointerEvent *pointerEvent; // @synthesize pointerEvent=_pointerEvent;
- (id)nextEventWithError:(id *)arg1;
- (id)initWithPointerEvent:(id)arg1 eventConverter:(id)arg2 eventSource:(struct __CGEventSource *)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

