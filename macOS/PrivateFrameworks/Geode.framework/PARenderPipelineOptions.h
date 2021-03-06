//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Geode/NSCopying-Protocol.h>

@class IPAColorProfile, NSDictionary, PAImageRequestCacheHint;

@interface PARenderPipelineOptions : NSObject <NSCopying>
{
    BOOL _gamutModeSet;
    int _gamutMode;
    BOOL _videoFrame;
    int _renderMode;
    IPAColorProfile *_outputColorProfile;
    NSDictionary *_cgImageProperties;
    long long _sampleMode;
    PAImageRequestCacheHint *_cacheHint;
    IPAColorProfile *_linearOutputColorProfileImpl;
}

+ (void)setGlobalPreserveHueGamutMapOptions:(int)arg1;
- (void).cxx_destruct;
@property(retain) IPAColorProfile *linearOutputColorProfileImpl; // @synthesize linearOutputColorProfileImpl=_linearOutputColorProfileImpl;
@property BOOL videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain) PAImageRequestCacheHint *cacheHint; // @synthesize cacheHint=_cacheHint;
@property(nonatomic) long long sampleMode; // @synthesize sampleMode=_sampleMode;
@property int renderMode; // @synthesize renderMode=_renderMode;
@property(retain) NSDictionary *cgImageProperties; // @synthesize cgImageProperties=_cgImageProperties;
@property(retain) IPAColorProfile *outputColorProfile; // @synthesize outputColorProfile=_outputColorProfile;
@property(retain) IPAColorProfile *linearOutputColorProfile; // @dynamic linearOutputColorProfile;
- (id)_obtainLinearColorProfile:(id)arg1;
@property(nonatomic) int gamutMode;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

