//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AFSiriTether : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    BOOL _isAttached;
    CDUnknownBlockType _attachmentStatusChangedHandler;
    NSMutableArray *_pendingEvents;
    int _notifyToken;
}

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1;
- (void)_listenForLaunchNotification;
- (void)_attachmentStatusUpdate:(BOOL)arg1;
- (void)_attach:(CDUnknownBlockType)arg1;
- (void)_connectionInvalid:(id)arg1;
- (void)_connectionInterrupted:(id)arg1;
- (id)_connection;
- (void)setAttachmentStatusChangedHandler:(CDUnknownBlockType)arg1;
- (void)waitForAttachment:(double)arg1;
- (void)attach:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

