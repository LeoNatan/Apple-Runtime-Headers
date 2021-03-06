//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSURL;

@interface CKDeviceToDeviceShareInvitationToken : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_sharingInvitationData;
    NSURL *_shareURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(retain, nonatomic) NSData *sharingInvitationData; // @synthesize sharingInvitationData=_sharingInvitationData;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSharingInvitationData:(id)arg1 shareURL:(id)arg2;
- (id)initWithSharingInvitationData:(id)arg1;
- (id)init;

@end

