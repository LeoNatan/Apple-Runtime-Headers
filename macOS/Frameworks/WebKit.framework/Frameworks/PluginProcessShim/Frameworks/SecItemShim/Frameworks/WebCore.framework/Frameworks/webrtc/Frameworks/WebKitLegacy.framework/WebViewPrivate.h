//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSPasteboard, NSString, NSWindow, WebFullScreenController, WebImmediateActionController, WebInspector, WebNodeHighlight, WebPluginDatabase, WebPreferences, WebVideoFullscreenController;
@protocol WebDeviceOrientationProvider, WebFormDelegate, WebGeolocationProvider, WebNotificationProvider;

__attribute__((visibility("hidden")))
@interface WebViewPrivate : NSObject
{
    struct Page *page;
    struct RefPtr<WebViewGroup, WTF::DumbPtrTraits<WebViewGroup>> group;
    id UIDelegate;
    id UIDelegateForwarder;
    id resourceProgressDelegate;
    id downloadDelegate;
    id policyDelegate;
    id policyDelegateForwarder;
    id frameLoadDelegate;
    id frameLoadDelegateForwarder;
    id <WebFormDelegate> formDelegate;
    id editingDelegate;
    id editingDelegateForwarder;
    id scriptDebugDelegate;
    id historyDelegate;
    WebInspector *inspector;
    WebNodeHighlight *currentNodeHighlight;
    WebImmediateActionController *immediateActionController;
    struct RetainPtr<NSTouchBar> _currentTouchBar;
    struct RetainPtr<NSTouchBar> _plainTextTouchBar;
    struct RetainPtr<NSTouchBar> _richTextTouchBar;
    struct RetainPtr<NSTouchBar> _passwordTextTouchBar;
    struct RetainPtr<WebTextTouchBarItemController> _textTouchBarItemController;
    struct RetainPtr<NSCandidateListTouchBarItem> _richTextCandidateListTouchBarItem;
    struct RetainPtr<NSCandidateListTouchBarItem> _plainTextCandidateListTouchBarItem;
    struct RetainPtr<NSCandidateListTouchBarItem> _passwordTextCandidateListTouchBarItem;
    struct RetainPtr<AVTouchBarPlaybackControlsProvider> mediaTouchBarProvider;
    struct RetainPtr<AVTouchBarScrubber> mediaPlaybackControlsView;
    BOOL _canCreateTouchBars;
    BOOL _isUpdatingTextTouchBar;
    BOOL _startedListeningToCustomizationEvents;
    BOOL _isCustomizingTouchBar;
    BOOL _isDeferringTextTouchBarUpdates;
    BOOL _needsDeferredTextTouchBarUpdate;
    struct unique_ptr<WebCore::TextIndicatorWindow, std::__1::default_delete<WebCore::TextIndicatorWindow>> textIndicatorWindow;
    BOOL hasInitializedLookupObserver;
    struct RetainPtr<WebWindowVisibilityObserver> windowVisibilityObserver;
    BOOL windowOcclusionDetectionEnabled;
    struct RetainPtr<NSEvent> pressureEvent;
    struct RefPtr<WebCore::ValidationBubble, WTF::DumbPtrTraits<WebCore::ValidationBubble>> formValidationBubble;
    BOOL shouldMaintainInactiveSelection;
    BOOL allowsUndo;
    float zoomMultiplier;
    BOOL zoomsTextOnly;
    NSString *applicationNameForUserAgent;
    struct String userAgent;
    BOOL userAgentOverridden;
    WebPreferences *preferences;
    BOOL useSiteSpecificSpoofing;
    NSWindow *hostWindow;
    int programmaticFocusCount;
    struct WebResourceDelegateImplementationCache resourceLoadDelegateImplementations;
    struct WebFrameLoadDelegateImplementationCache frameLoadDelegateImplementations;
    struct WebScriptDebugDelegateImplementationCache scriptDebugDelegateImplementations;
    struct WebHistoryDelegateImplementationCache historyDelegateImplementations;
    BOOL closed;
    BOOL shouldCloseWithWindow;
    BOOL mainFrameDocumentReady;
    BOOL drawsBackground;
    BOOL tabKeyCyclesThroughElementsChanged;
    BOOL becomingFirstResponder;
    BOOL becomingFirstResponderFromOutside;
    BOOL usesPageCache;
    NSColor *backgroundColor;
    NSString *mediaStyle;
    BOOL hasSpellCheckerDocumentTag;
    long long spellCheckerDocumentTag;
    WebPluginDatabase *pluginDatabase;
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>> identifierMap;
    BOOL _keyboardUIModeAccessed;
    int _keyboardUIMode;
    BOOL shouldUpdateWhileOffscreen;
    BOOL needsOneShotDrawingSynchronization;
    BOOL postsAcceleratedCompositingNotifications;
    struct RefPtr<LayerFlushController, WTF::DumbPtrTraits<LayerFlushController>> layerFlushController;
    NSPasteboard *insertionPasteboard;
    struct RetainPtr<NSImage> _mainFrameIcon;
    struct CGSize lastLayoutSize;
    WebVideoFullscreenController *fullscreenController;
    struct RefPtr<WebCore::PlaybackSessionModelMediaElement, WTF::DumbPtrTraits<WebCore::PlaybackSessionModelMediaElement>> playbackSessionModel;
    struct RefPtr<WebCore::PlaybackSessionInterfaceMac, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceMac>> playbackSessionInterface;
    WebFullScreenController *newFullscreenController;
    id <WebGeolocationProvider> _geolocationProvider;
    id <WebDeviceOrientationProvider> m_deviceOrientationProvider;
    id <WebNotificationProvider> _notificationProvider;
    struct unique_ptr<WebSelectionServiceController, std::__1::default_delete<WebSelectionServiceController>> _selectionServiceController;
    BOOL interactiveFormValidationEnabled;
    int validationMessageTimerMagnification;
    float customDeviceScaleFactor;
    struct unique_ptr<WebCore::AlternativeTextUIController, std::__1::default_delete<WebCore::AlternativeTextUIController>> m_alternativeTextUIController;
    struct RetainPtr<NSData> sourceApplicationAuditData;
    BOOL _didPerformFirstNavigation;
    struct unique_ptr<WebMediaPlaybackTargetPicker, std::__1::default_delete<WebMediaPlaybackTargetPicker>> m_playbackTargetPicker;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

