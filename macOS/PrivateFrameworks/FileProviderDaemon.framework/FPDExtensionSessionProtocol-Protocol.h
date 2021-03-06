//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProviderDaemon/NSObject-Protocol.h>

@class FPCTLTermDumper;
@protocol FPDLifetimeExtender, FPXPCAutomaticErrorProxy><FPXVendor;

@protocol FPDExtensionSessionProtocol <NSObject>
@property(nonatomic) BOOL hasFileProviderPresenceTCCAccess;
- (void)dumpStateTo:(FPCTLTermDumper *)arg1;
- (void)invalidate;
- (void)start;
- (void)asyncUnregisterLifetimeExtensionForObject:(id <FPDLifetimeExtender>)arg1;
- (void)unregisterLifetimeExtensionForObject:(id <FPDLifetimeExtender>)arg1;
- (void)registerLifetimeExtensionForObject:(id <FPDLifetimeExtender>)arg1;
- (void)updatePresenceTCCWithAuditToken:(CDStruct_6ad76789)arg1;
- (id <FPXPCAutomaticErrorProxy><FPXVendor>)existingFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2;
- (id <FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg1;
- (id <FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithoutPID;
- (id <FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2;
- (id <FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithPID:(int)arg1;
@end

