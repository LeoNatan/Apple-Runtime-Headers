//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UILabelContentAttributesProvider;

__attribute__((visibility("hidden")))
@interface _UILabelContent : NSObject
{
    id <_UILabelContentAttributesProvider> _defaultAttributesProvider;
}

+ (id)emptyContentWithDefaultAttributesProvider:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)_isContentEqualToContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (id)attributedString;
- (id)string;
- (_Bool)isNil;
- (_Bool)isWidthVariant;
- (_Bool)isAttributed;
- (long long)length;
- (id)defaultValueForAttribute:(id)arg1;
- (_Bool)isAttribute:(id)arg1 uniformlyEqualToValue:(id)arg2;
- (void)_mergeDefaultAttributes:(id)arg1;
- (id)_defaultAttributesForString:(id)arg1;
- (id)attributedStringContent;
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange)arg3;
- (id)contentByApplyingAttributeToEntireRange:(id)arg1 value:(id)arg2;
- (id)widthVariantContentForView:(id)arg1;
- (id)contentWithAttributedString:(id)arg1;
- (id)contentWithString:(id)arg1;
- (id)initWithDefaultAttributesProvider:(id)arg1;

@end

