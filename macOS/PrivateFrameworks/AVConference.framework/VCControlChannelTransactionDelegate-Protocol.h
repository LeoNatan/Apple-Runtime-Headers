//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSData;

@protocol VCControlChannelTransactionDelegate <NSObject>
@property(readonly) BOOL isEncryptionEnabled;
- (NSData *)lastUsedMKIBytes;
- (void)scheduleAfter:(unsigned int)arg1 block:(void (^)(void))arg2;
- (BOOL)isParticipantActive:(unsigned long long)arg1;
- (void)addToReceivedStats:(int)arg1;
- (void)addToSentStats:(int)arg1;
@end

