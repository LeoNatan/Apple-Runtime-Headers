//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDate, NSURL;
@protocol FCAVAssetKeyType;

@protocol FCAVAssetKeyCacheType
- (void)clearKeyServerCertificate;
- (void)saveKeyServerCertificate:(NSData *)arg1;
- (NSData *)keyServerCertificate;
- (void)removeAllAssetKeys;
- (void)saveAssetKeyData:(NSData *)arg1 creationDate:(NSDate *)arg2 expirationDate:(NSDate *)arg3 forURI:(NSURL *)arg4;
- (id <FCAVAssetKeyType>)assetKeyForURI:(NSURL *)arg1;
@end

