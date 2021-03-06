//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotificationDaemon/CLLocationManagerDelegate-Protocol.h>
#import <ExposureNotificationDaemon/ENRegionMonitorSourceDelegate-Protocol.h>

@class CLLocationManager, ENRegion, ENRegionHistory, ENRegionTestDataSource, ENSecureArchiveFileWrapper, NSHashTable, NSString;
@protocol ENRegionMonitorDelegate, OS_dispatch_queue;

@interface ENRegionMonitor : NSObject <CLLocationManagerDelegate, ENRegionMonitorSourceDelegate>
{
    ENRegion *_currentRegion;
    unsigned long long _state;
    id <ENRegionMonitorDelegate> _delegate;
    ENRegionTestDataSource *_testRegionDataSource;
    ENSecureArchiveFileWrapper *_regionHistoryFileWrapper;
    ENRegionHistory *_regionHistory;
    NSString *_regionCachePath;
    NSObject<OS_dispatch_queue> *_regionMonitorQueue;
    NSHashTable *_dataSources;
    CLLocationManager *_locationManager;
}

+ (id)locationAuthorizationStatusToString:(int)arg1;
+ (id)regionMonitorStateToString:(unsigned long long)arg1;
+ (unsigned long long)regionMonitorStateFromAuthorizationStatus:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSHashTable *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *regionMonitorQueue; // @synthesize regionMonitorQueue=_regionMonitorQueue;
@property(retain, nonatomic) NSString *regionCachePath; // @synthesize regionCachePath=_regionCachePath;
@property(retain, nonatomic) ENRegionHistory *regionHistory; // @synthesize regionHistory=_regionHistory;
@property(retain, nonatomic) ENSecureArchiveFileWrapper *regionHistoryFileWrapper; // @synthesize regionHistoryFileWrapper=_regionHistoryFileWrapper;
@property(retain, nonatomic) ENRegionTestDataSource *testRegionDataSource; // @synthesize testRegionDataSource=_testRegionDataSource;
@property(nonatomic) __weak id <ENRegionMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) ENRegion *currentRegion; // @synthesize currentRegion=_currentRegion;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)purgeAllRegionHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (id)getAllRegionsWithError:(id *)arg1;
- (_Bool)purgeRegionsOlderThanDate:(id)arg1 error:(id *)arg2;
- (_Bool)_readRegionHistoryWithError:(id *)arg1;
- (void)_addRegionToCache:(id)arg1;
- (void)cacheExposureNotificationRegion:(id)arg1;
- (void)regionDataSource:(id)arg1 updatedWithRegion:(id)arg2;
- (void)_createLocationManager;
- (void)dealloc;
- (void)removeAllDataSources;
- (void)addDataSource:(id)arg1;
- (void)_resetRegionMonitor;
- (void)resetRegionMonitor;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)setActiveRegion:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

