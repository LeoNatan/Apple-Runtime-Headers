//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class PBSPictureInPictureController;

@protocol PBSPictureInPictureControllerObserver <NSObject>

@optional
- (void)pictureInPictureController:(PBSPictureInPictureController *)arg1 didUpdatePresentationState:(unsigned long long)arg2;
- (void)pictureInPictureControllerDidDestroyPictureInPicture:(PBSPictureInPictureController *)arg1;
- (void)pictureInPictureControllerDidActivatePictureInPicture:(PBSPictureInPictureController *)arg1;
@end

