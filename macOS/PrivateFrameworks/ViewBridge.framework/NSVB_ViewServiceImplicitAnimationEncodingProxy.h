//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ViewBridge/NSVB_TargetedProxy.h>

__attribute__((visibility("hidden")))
@interface NSVB_ViewServiceImplicitAnimationEncodingProxy : NSVB_TargetedProxy
{
    id _controlMessageTarget;
    unsigned int _windowFrameAnimationInProgress:1;
}

+ (id)proxyEncodingAnimationsForTarget:(id)arg1 controlMessageTarget:(id)arg2 windowFrameAnimationInProgress:(BOOL)arg3;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end

