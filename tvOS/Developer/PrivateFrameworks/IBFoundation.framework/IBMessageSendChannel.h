//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBMessageChannel.h>

@interface IBMessageSendChannel : IBMessageChannel
{
    // Error parsing type: Ai, name: _concurrentWriters
}

- (_Bool)sendMessage:(SEL)arg1 returnValue:(id *)arg2 context:(id)arg3 error:(id *)arg4 arguments:(int)arg5;
- (void)shutdown;

@end

