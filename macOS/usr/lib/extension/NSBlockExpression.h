//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExpression.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSBlockExpression : NSExpression
{
    CDUnknownBlockType _block;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)predicateFormat;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)arguments;
- (CDUnknownBlockType)expressionBlock;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2 arguments:(id)arg3;

@end

