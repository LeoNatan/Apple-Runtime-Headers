//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPInterval : NSObject
{
    float left;
    float right;
}

- (_Bool)contains:(id)arg1;
- (float)right;
- (float)left;
- (void)add:(id)arg1;
- (_Bool)intersects:(id)arg1;
- (id)initLeft:(float)arg1 right:(float)arg2;

@end

