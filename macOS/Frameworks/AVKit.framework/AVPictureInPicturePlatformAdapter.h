//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVPictureInPictureControlsStyleAppearance-Protocol.h>
#import <AVKit/PIPSafariViewControllerDelegate-Protocol.h>

@class AVObservationController, AVPictureInPictureViewController, AVPlayerController, NSString, PIPViewController;
@protocol AVPictureInPictureContentSource, AVPictureInPicturePlatformAdapterDelegate;

__attribute__((visibility("hidden")))
@interface AVPictureInPicturePlatformAdapter : NSObject <PIPSafariViewControllerDelegate, AVPictureInPictureControlsStyleAppearance>
{
    BOOL _allowsPictureInPicturePlayback;
    BOOL _alwaysStartsAutomaticallyWhenEnteringBackground;
    BOOL _anyPictureInPictureActive;
    id <AVPictureInPicturePlatformAdapterDelegate> _delegate;
    AVPlayerController *_playerController;
    long long _controlsStyle;
    AVPictureInPictureViewController *_pictureInPictureViewController;
    long long _status;
    PIPViewController *_systemPIPViewController;
    id <AVPictureInPictureContentSource> _source;
    AVObservationController *_observationController;
    long long _statusStorage;
}

+ (id)stopPictureInPictureButtonImageName;
+ (id)startPictureInPictureButtonImageName;
+ (BOOL)isPictureInPictureSupported;
- (void).cxx_destruct;
@property(nonatomic) long long statusStorage; // @synthesize statusStorage=_statusStorage;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(readonly, nonatomic) __weak id <AVPictureInPictureContentSource> source; // @synthesize source=_source;
@property(retain, nonatomic) PIPViewController *systemPIPViewController; // @synthesize systemPIPViewController=_systemPIPViewController;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic, getter=isAnyPictureInPictureActive) BOOL anyPictureInPictureActive; // @synthesize anyPictureInPictureActive=_anyPictureInPictureActive;
@property(readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
@property(nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
@property(nonatomic) BOOL alwaysStartsAutomaticallyWhenEnteringBackground; // @synthesize alwaysStartsAutomaticallyWhenEnteringBackground=_alwaysStartsAutomaticallyWhenEnteringBackground;
@property(nonatomic) BOOL allowsPictureInPicturePlayback; // @synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak id <AVPictureInPicturePlatformAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_unsetReplacementRect;
- (void)_updateReplacementRectAndWindow;
- (BOOL)pipShouldClose:(id)arg1;
- (void)pipActionStop:(id)arg1;
- (void)pipActionPause:(id)arg1;
- (void)pipActionPlay:(id)arg1;
- (void)pipDidClose:(id)arg1;
- (void)pipWillClose:(id)arg1;
- (void)updateLayoutDependentBehaviors;
@property(readonly, nonatomic, getter=isSystemPictureInPicturePossible) BOOL systemPictureInPicturePossible;
@property(readonly, nonatomic) BOOL canAnimatePictureInPictureTransition;
- (void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1;
- (void)startPictureInPicture;
- (void)dealloc;
- (id)initWithSource:(id)arg1;
- (void)_updateStatusUsingProposedStatus:(long long)arg1;
- (void)_updateStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

