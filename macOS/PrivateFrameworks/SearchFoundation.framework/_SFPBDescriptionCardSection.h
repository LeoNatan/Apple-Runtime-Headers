//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBDescriptionCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBText, _SFPBURL;

@interface _SFPBDescriptionCardSection : PBCodable <_SFPBDescriptionCardSection, NSSecureCoding>
{
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _titleNoWrap;
    BOOL _descriptionExpand;
    int _separatorStyle;
    int _titleWeight;
    int _descriptionSize;
    int _descriptionWeight;
    int _imageAlign;
    int _textAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    _SFPBText *_descriptionText;
    NSString *_expandText;
    _SFPBImage *_image;
    NSString *_attributionText;
    _SFPBURL *_attributionURL;
    _SFPBImage *_attributionGlyph;
    NSArray *_richDescriptions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *richDescriptions; // @synthesize richDescriptions=_richDescriptions;
@property(retain, nonatomic) _SFPBImage *attributionGlyph; // @synthesize attributionGlyph=_attributionGlyph;
@property(retain, nonatomic) _SFPBURL *attributionURL; // @synthesize attributionURL=_attributionURL;
@property(copy, nonatomic) NSString *attributionText; // @synthesize attributionText=_attributionText;
@property(nonatomic) int textAlign; // @synthesize textAlign=_textAlign;
@property(nonatomic) int imageAlign; // @synthesize imageAlign=_imageAlign;
@property(nonatomic) BOOL descriptionExpand; // @synthesize descriptionExpand=_descriptionExpand;
@property(nonatomic) int descriptionWeight; // @synthesize descriptionWeight=_descriptionWeight;
@property(nonatomic) int descriptionSize; // @synthesize descriptionSize=_descriptionSize;
@property(nonatomic) int titleWeight; // @synthesize titleWeight=_titleWeight;
@property(nonatomic) BOOL titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property(retain, nonatomic) _SFPBImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *expandText; // @synthesize expandText=_expandText;
@property(retain, nonatomic) _SFPBText *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)richDescriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)richDescriptionsCount;
- (void)addRichDescriptions:(id)arg1;
- (void)clearRichDescriptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

