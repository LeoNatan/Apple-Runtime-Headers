//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDBypassSettings, DNDSEventBehaviorResolver, DNDState, NSString;

@protocol DNDSEventBehaviorResolverDataSource <NSObject>
- (DNDBypassSettings *)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 bypassSettingsForClientIdentifier:(NSString *)arg2;
- (unsigned long long)currentUILockStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
- (DNDState *)currentStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
@end

