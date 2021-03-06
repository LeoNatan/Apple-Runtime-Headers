//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLDevice, MTLFunction;

__attribute__((visibility("hidden")))
@interface CIMetalConverter : NSObject
{
    id <MTLDevice> _device;
    id <MTLFunction> _convertToTexture;
    id <MTLFunction> _convertToBuffer;
}

- (void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceRowBytes:(unsigned int)arg3 destinationBuffer:(id)arg4 destinationRowBytes:(unsigned int)arg5 destinationSize:(CDStruct_32a7f38a)arg6;
- (void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceRowBytes:(unsigned int)arg3 destinationTexture:(id)arg4;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 kernelName:(id)arg2;

@end

