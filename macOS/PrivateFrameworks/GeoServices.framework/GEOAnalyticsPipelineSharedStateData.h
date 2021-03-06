//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOAnalyticsPipelineStateData.h>

@class geo_isolater;

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData
{
    geo_isolater *_placeIso;
    geo_isolater *_mapViewIso;
}

+ (id)sharedData;
- (void).cxx_destruct;
- (BOOL)hasMapLaunchData;
- (BOOL)hasMapRestoreData;
- (void)clearSuggestionsData;
- (BOOL)hasSuggestionsData;
- (BOOL)hasMapsServerData;
- (BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
- (BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
- (BOOL)hasPlaceCard_PlaceActionDetails;
- (BOOL)hasPlaceCardStateData;
- (void)populateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)populateWithPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)_populateWithGEOTransitDepartureSequenceUsage:(id)arg1;
- (void)_populateWithGEOTransitPlaceCard:(id)arg1;
- (void)populateWithPlaceActionDetails:(id)arg1;
- (void)clearPlaceCardStateData;
- (void)performPlaceCardStateUpdate:(CDUnknownBlockType)arg1;
- (void)performMapViewStateUpdate:(CDUnknownBlockType)arg1;
- (void)_performSyncStateUpdateWithIsolator:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

