//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class BSProcessHandle, NSString, SBApplication;

@interface SBLockScreenUnlockRequest : NSObject <NSCopying>
{
    _Bool _wantsBiometricPresentation;
    _Bool _forceAlertAuthenticationUI;
    _Bool _confirmedNotInPocket;
    int _source;
    int _intent;
    NSString *_name;
    BSProcessHandle *_process;
    SBApplication *_destinationApplication;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool confirmedNotInPocket; // @synthesize confirmedNotInPocket=_confirmedNotInPocket;
@property(nonatomic) _Bool forceAlertAuthenticationUI; // @synthesize forceAlertAuthenticationUI=_forceAlertAuthenticationUI;
@property(nonatomic) _Bool wantsBiometricPresentation; // @synthesize wantsBiometricPresentation=_wantsBiometricPresentation;
@property(retain, nonatomic) SBApplication *destinationApplication; // @synthesize destinationApplication=_destinationApplication;
@property(retain, nonatomic) BSProcessHandle *process; // @synthesize process=_process;
@property(nonatomic) int intent; // @synthesize intent=_intent;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

