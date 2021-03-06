//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSEventListenerObject.h>

#import <ITMLKit/IKJSViewModelLink-Protocol.h>
#import <ITMLKit/_IKJSViewModelLink-Protocol.h>
#import <ITMLKit/_IKJSViewModelLinkProxy-Protocol.h>

@class IKDOMDocument, NSDictionary;
@protocol IKJSViewModelLinkDelegate;

@interface IKJSViewModelLink : IKJSEventListenerObject <IKJSViewModelLink, _IKJSViewModelLinkProxy, _IKJSViewModelLink>
{
    _Bool _isClosed;
    struct {
        _Bool hasDocumentDidChange;
        _Bool hasResponseDictionaryDidChange;
    } _delegateFlags;
    IKDOMDocument *_document;
    NSDictionary *_responseDictionary;
    id <IKJSViewModelLinkDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IKJSViewModelLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain, nonatomic) IKDOMDocument *document; // @synthesize document=_document;
- (void)_unhandled;
- (void)close:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)asPrivateIKJSViewModelLink;

@end

