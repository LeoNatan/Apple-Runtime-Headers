//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <nfshared/NFAWDEventProtocol-Protocol.h>

@class AWDNFCHCIActivityTimeout, NSString;

@interface NFAWDActivityTimeout : NSObject <NFAWDEventProtocol>
{
    unsigned int _version;
    unsigned int _spid;
    unsigned int _command;
    unsigned int _commandParam1;
    unsigned int _commandResult;
    unsigned int _timeoutValue;
    unsigned int _expressType;
    AWDNFCHCIActivityTimeout *_metric;
}

@property(retain, nonatomic) AWDNFCHCIActivityTimeout *metric; // @synthesize metric=_metric;
@property(nonatomic) unsigned int expressType; // @synthesize expressType=_expressType;
@property(nonatomic) unsigned int timeoutValue; // @synthesize timeoutValue=_timeoutValue;
@property(nonatomic) unsigned int commandResult; // @synthesize commandResult=_commandResult;
@property(nonatomic) unsigned int commandParam1; // @synthesize commandParam1=_commandParam1;
@property(nonatomic) unsigned int command; // @synthesize command=_command;
@property(nonatomic) unsigned int spid; // @synthesize spid=_spid;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (id)getMetric;
- (unsigned int)getMetricId;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

