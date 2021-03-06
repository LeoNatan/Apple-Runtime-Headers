//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDAWDHealthKitGymKitWorkoutEvent : PBCodable <NSCopying>
{
    long long _timeToBeginExperience;
    unsigned long long _timestamp;
    long long _workoutEndErrorCode;
    int _fitnessMachineType;
    NSString *_manufacturer;
    struct {
        unsigned int timeToBeginExperience:1;
        unsigned int timestamp:1;
        unsigned int workoutEndErrorCode:1;
        unsigned int fitnessMachineType:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long workoutEndErrorCode; // @synthesize workoutEndErrorCode=_workoutEndErrorCode;
@property(nonatomic) long long timeToBeginExperience; // @synthesize timeToBeginExperience=_timeToBeginExperience;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasWorkoutEndErrorCode;
@property(nonatomic) _Bool hasTimeToBeginExperience;
@property(readonly, nonatomic) _Bool hasManufacturer;
- (int)StringAsFitnessMachineType:(id)arg1;
- (id)fitnessMachineTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFitnessMachineType;
@property(nonatomic) int fitnessMachineType; // @synthesize fitnessMachineType=_fitnessMachineType;
@property(nonatomic) _Bool hasTimestamp;

@end

