//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAccessibilityIndexedMockUIElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSAccessibilityImageMockUIElement : NSAccessibilityIndexedMockUIElement
{
    struct CGRect _bounds;
    NSString *_description;
    NSString *_help;
}

- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityHelpAttribute;
- (id)accessibilitySizeAttribute;
- (id)accessibilityPositionAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityAttributeNames;
- (struct CGRect)bounds;
- (void)dealloc;
- (id)initWithParent:(id)arg1 index:(long long)arg2 bounds:(struct CGRect)arg3 description:(id)arg4 help:(id)arg5;

@end

