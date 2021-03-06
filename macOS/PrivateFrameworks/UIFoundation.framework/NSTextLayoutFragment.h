//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>
#import <UIFoundation/NSTextViewportElement-Protocol.h>

@class NSArray, NSLayoutManager, NSOperationQueue, NSString, NSTextElement, NSTextLayoutManager, NSTextRange, NSTextStorage;

@interface NSTextLayoutFragment : NSObject <NSSecureCoding, NSTextViewportElement>
{
    NSTextLayoutManager *_textLayoutManager;
    NSTextElement *_textElement;
    NSTextRange *_rangeInElement;
    struct _NSRange _characterRange;
    unsigned long long _sourceVerticalDelta;
    unsigned long long _sourceRangeDelta;
    struct CGRect _sourceBoundingRect;
    struct CGRect _destinationBoundingRect;
    unsigned long long _animationType;
    NSLayoutManager *_destinationLayoutManager;
    NSTextStorage *_destinationTextStorage;
    double _destinationVerticalDelta;
    struct _NSRange _destinationGlyphRange;
    NSLayoutManager *_layoutManager;
    NSArray *_textLineFragments;
    NSOperationQueue *_layoutQueue;
    unsigned long long _state;
    struct CGPoint _layoutPoint;
    struct CGRect _layoutFragmentFrame;
}

+ (id)layoutFragmentQueue;
+ (BOOL)supportsSecureCoding;
@property unsigned long long state; // @synthesize state=_state;
@property struct CGPoint layoutPoint; // @synthesize layoutPoint=_layoutPoint;
@property struct CGRect layoutFragmentFrame; // @synthesize layoutFragmentFrame=_layoutFragmentFrame;
@property(retain) NSOperationQueue *layoutQueue; // @synthesize layoutQueue=_layoutQueue;
@property(copy) NSArray *textLineFragments; // @synthesize textLineFragments=_textLineFragments;
@property(readonly, copy) NSString *description;
@property(readonly) struct CGRect renderingSurfaceBounds;
- (void)invalidateLayout;
- (void)layout;
- (void)estimateSize;
- (void)_layout;
- (id)representedRangeAtPoint:(struct CGPoint)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1 context:(struct CGContext *)arg2;
@property struct CGPoint layoutFragmentFrameOrigin;
@property(readonly) struct CGSize layoutSize;
@property(readonly) NSTextRange *representedRange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly) NSTextRange *rangeInElement; // @dynamic rangeInElement;
@property __weak NSTextElement *textElement; // @dynamic textElement;
@property __weak NSTextLayoutManager *textLayoutManager;
- (id)init;
- (id)initWithTextElement:(id)arg1 range:(id)arg2;
@property struct CGRect destinationBoundingRect;
@property struct _NSRange destinationGlyphRange; // @dynamic destinationGlyphRange;
@property double destinationVerticalDelta; // @dynamic destinationVerticalDelta;
@property(retain) NSTextStorage *destinationTextStorage; // @dynamic destinationTextStorage;
@property NSLayoutManager *destinationLayoutManager; // @dynamic destinationLayoutManager;
- (id)initWithLayoutManager:(id)arg1 characterRange:(struct _NSRange)arg2 animationType:(unsigned long long)arg3 boundingRect:(struct CGRect)arg4;
@property(readonly) unsigned long long animationType; // @dynamic animationType;
@property(readonly) struct CGRect sourceBoundingRect; // @dynamic sourceBoundingRect;
@property(readonly) struct _NSRange characterRange; // @dynamic characterRange;
@property(readonly) __weak NSLayoutManager *layoutManager; // @dynamic layoutManager;
- (void)drawAtPoint:(struct CGPoint)arg1 contentType:(unsigned long long)arg2;
- (void)_setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

