//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarouselServices/CSLSBacklightObserver-Protocol.h>

@class NSError, NSString;

@protocol CSLSBacklightXPCClient <CSLSBacklightObserver>
- (void)requestRejectedForError:(NSError *)arg1 shouldRaiseException:(_Bool)arg2;
- (void)backlightDidChangeFrom:(int)arg1 to:(int)arg2 forReason:(unsigned int)arg3;
- (void)assertionTimedOut:(NSString *)arg1;
@end

