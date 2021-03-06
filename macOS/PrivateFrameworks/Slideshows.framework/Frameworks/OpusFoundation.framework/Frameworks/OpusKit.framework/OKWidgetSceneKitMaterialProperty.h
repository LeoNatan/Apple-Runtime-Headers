//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/OKSettingsSupport-Protocol.h>

@class NSMutableDictionary, NSString, OKWidgetView;

@interface OKWidgetSceneKitMaterialProperty : NSObject <OKSettingsSupport>
{
    NSMutableDictionary *_materialProperties;
    OKWidgetView *_widgetView;
}

+ (id)supportedSettings;
- (void)setSettingIntensity:(double)arg1;
- (double)settingIntensity;
- (void)setSettingWrapT:(long long)arg1;
- (long long)settingWrapT;
- (void)setSettingWrapS:(long long)arg1;
- (long long)settingWrapS;
- (void)setSettingMipFilter:(long long)arg1;
- (long long)settingMipFilter;
- (void)setSettingMinificationFilter:(long long)arg1;
- (long long)settingMinificationFilter;
- (void)setSettingMappingChannel:(long long)arg1;
- (long long)settingMappingChannel;
- (void)setSettingMagnificationFilter:(long long)arg1;
- (long long)settingMagnificationFilter;
- (void)setSettingLayerContent:(id)arg1;
- (id)settingLayerContent;
- (void)setSettingURLContent:(id)arg1;
- (id)settingURLContent;
- (struct SCNVector3)settingContentsTransform;
- (void)setSettingContentsTransform:(struct SCNVector3)arg1;
- (void)setSettingColorContents:(id)arg1;
- (id)settingColorContents;
- (void)setSettingBorderColor:(id)arg1;
- (id)settingBorderColor;
- (void)applyPropertyOnMaterial:(id)arg1 withSceneKitView:(id)arg2;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

