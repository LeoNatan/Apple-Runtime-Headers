//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKCertificate-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class CRKIdentityConfiguration, NSArray, NSData, NSDateInterval, NSString;

@interface CRKInMemoryCertificate : NSObject <NSSecureCoding, CRKCertificate>
{
    NSDateInterval *_validityDateInterval;
    CRKIdentityConfiguration *_configuration;
}

+ (_Bool)supportsSecureCoding;
+ (id)certificateWithData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CRKIdentityConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDateInterval *validityDateInterval; // @synthesize validityDateInterval=_validityDateInterval;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) long long keySizeInBits;
@property(readonly, nonatomic) unsigned int hashingAlgorithm;
@property(readonly, nonatomic, getter=isCertificateAuthority) _Bool certificateAuthority;
@property(readonly, nonatomic, getter=isTemporallyValid) _Bool temporallyValid;
@property(readonly, nonatomic) struct __SecCertificate *underlyingCertificate;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
@property(readonly, copy, nonatomic) NSString *fingerprint;
@property(readonly, copy, nonatomic) NSArray *commonNames;
- (id)initWithConfiguration:(id)arg1 validityDateInterval:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

