//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, AMSBiometricsSignatureRequest, NSArray, NSAttributedString, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetRequest : NSObject
{
    _Bool _requiresAuthorization;
    _Bool _shouldUppercaseText;
    ACAccount *_account;
    NSString *_accountHeader;
    AMSBiometricsSignatureRequest *_biometricsRequest;
    int _confirmationTitle;
    NSString *_currencyCode;
    NSString *_countryCode;
    NSString *_displayPrice;
    NSString *_explanation;
    NSArray *_flexList;
    NSArray *_inlineImages;
    NSString *_logKey;
    NSString *_message;
    int _payee;
    NSString *_paymentSession;
    NSString *_paymentSummary;
    NSArray *_preSheetDialog;
    NSNumber *_price;
    NSArray *_priceSectionItems;
    NSString *_ratingHeader;
    NSString *_ratingValue;
    int _salableIcon;
    NSURL *_salableIconURL;
    NSArray *_salableInfo;
    NSAttributedString *_salableInfoLabel;
    NSString *_storeName;
    NSString *_title;
    int _titleType;
}

- (void).cxx_destruct;
@property(nonatomic) int titleType; // @synthesize titleType=_titleType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(nonatomic) _Bool shouldUppercaseText; // @synthesize shouldUppercaseText=_shouldUppercaseText;
@property(nonatomic) _Bool requiresAuthorization; // @synthesize requiresAuthorization=_requiresAuthorization;
@property(copy, nonatomic) NSAttributedString *salableInfoLabel; // @synthesize salableInfoLabel=_salableInfoLabel;
@property(copy, nonatomic) NSArray *salableInfo; // @synthesize salableInfo=_salableInfo;
@property(copy, nonatomic) NSURL *salableIconURL; // @synthesize salableIconURL=_salableIconURL;
@property(nonatomic) int salableIcon; // @synthesize salableIcon=_salableIcon;
@property(copy, nonatomic) NSString *ratingValue; // @synthesize ratingValue=_ratingValue;
@property(copy, nonatomic) NSString *ratingHeader; // @synthesize ratingHeader=_ratingHeader;
@property(copy, nonatomic) NSArray *priceSectionItems; // @synthesize priceSectionItems=_priceSectionItems;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSArray *preSheetDialog; // @synthesize preSheetDialog=_preSheetDialog;
@property(copy, nonatomic) NSString *paymentSummary; // @synthesize paymentSummary=_paymentSummary;
@property(copy, nonatomic) NSString *paymentSession; // @synthesize paymentSession=_paymentSession;
@property(nonatomic) int payee; // @synthesize payee=_payee;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSArray *inlineImages; // @synthesize inlineImages=_inlineImages;
@property(copy, nonatomic) NSArray *flexList; // @synthesize flexList=_flexList;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(copy, nonatomic) NSString *displayPrice; // @synthesize displayPrice=_displayPrice;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) int confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest; // @synthesize biometricsRequest=_biometricsRequest;
@property(copy, nonatomic) NSString *accountHeader; // @synthesize accountHeader=_accountHeader;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (struct CGImage *)_createRGBImageRefForGreyScaleImageRef:(struct CGImage *)arg1 width:(unsigned long)arg2 height:(unsigned long)arg3;
- (struct CGImage *)_createResizedImageWithOriginalImage:(struct CGImage *)arg1 targetHeight:(float)arg2;
- (struct CGImage *)_createRatingImageWithStringValue:(id)arg1 assetScale:(float *)arg2;
- (struct CGImage *)_createMaskedImageRefForImageRef:(struct CGImage *)arg1 withPathRef:(struct CGPath *)arg2 andAdornmentStyle:(int)arg3;
- (struct CGImage *)_createImageRefWithURL:(id)arg1 adornmentStyle:(int)arg2 bag:(id)arg3;
- (struct CGImage *)_createImageRefForImageSource:(struct CGImageSource *)arg1 screenScale:(float)arg2 outAssetScale:(float *)arg3;
- (struct CGImage *)_createImageMaskRefWithSize:(struct CGSize)arg1 andPath:(struct CGPath *)arg2;
- (struct CGImage *)_createImageForResourceName:(id)arg1 outAssetScale:(float *)arg2;
- (struct CGImage *)_createDefaultImageWithImageRef:(struct CGImage *)arg1 size:(struct CGSize)arg2 borderPath:(struct CGPath *)arg3;
- (struct CGPath *)_createBorderPathForAdornmentStyle:(int)arg1 iconWidth:(float)arg2 iconHeight:(float)arg3;
- (id)_replaceImagePlaceholderTagWithImageData:(id)arg1 tag:(id)arg2 data:(id)arg3 scale:(float)arg4 tint:(_Bool)arg5;
- (id)_removeAllImagePlaceholderTags:(id)arg1;
- (int)_imageTypeForURL:(id)arg1;
- (id)_contentItemsForFlexibleList:(id)arg1 cache:(id)arg2 bag:(id)arg3;
- (unsigned int)_countImagePlaceholderTags:(id)arg1;
- (id)ams_createContentItemForSalableInfoWithCache:(id)arg1 bag:(id)arg2;
- (id)ams_createContentItemForRating;
- (id)ams_createContentItemsForPreScreenDialogWithCache:(id)arg1 bag:(id)arg2;
- (id)ams_createContentItemsForFlexibleListWithCache:(id)arg1 bag:(id)arg2;
- (id)ams_createContentItemForAccount;
- (id)ams_createSummaryItems;
@property(readonly, nonatomic) unsigned int ams_paymentRequestorType;
@property(readonly, nonatomic) unsigned int ams_confirmationStyle;

@end

