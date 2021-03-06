//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOETAServiceResponseSummary;

__attribute__((visibility("hidden")))
@interface GEOETATrafficUpdateResponseExtension : PBCodable <NSCopying>
{
    unsigned long long _debugServerLatencyMs;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    CDStruct_8a83bcf8 _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasDebugServerLatencyMs;
@property(nonatomic) unsigned long long debugServerLatencyMs;
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) _Bool hasEtaServiceSummary;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

