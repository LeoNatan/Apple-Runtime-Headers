//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLTextureDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLTextureDescriptorInternal : MTLTextureDescriptor
{
    struct MTLTextureDescriptorPrivate _private;
}

- (_Bool)validateWithDevice:(id)arg1;
- (const struct MTLTextureDescriptorPrivate *)descriptorPrivate;
- (_Bool)isDrawable;
- (void)setIsDrawable:(_Bool)arg1;
- (void)setFramebufferOnly:(_Bool)arg1;
- (_Bool)framebufferOnly;
- (void)setCompressionMode:(unsigned int)arg1;
- (unsigned int)compressionMode;
- (_Bool)writeSwizzleEnabled;
- (void)setWriteSwizzleEnabled:(_Bool)arg1;
- (unsigned int)swizzleKey;
- (void)setSwizzleKey:(unsigned int)arg1;
- (CDStruct_a06f635e)swizzle;
- (void)setSwizzle:(CDStruct_a06f635e)arg1;
- (void)setRotation:(unsigned int)arg1;
- (unsigned int)rotation;
- (void)setTextureUsage:(unsigned int)arg1;
- (unsigned int)textureUsage;
- (void)setUsage:(unsigned int)arg1;
- (unsigned int)usage;
- (void)setHazardTrackingMode:(unsigned int)arg1;
- (unsigned int)hazardTrackingMode;
- (void)setResourceOptions:(unsigned int)arg1;
- (unsigned int)resourceOptions;
- (void)setStorageMode:(unsigned int)arg1;
- (unsigned int)storageMode;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (unsigned long long)protectionOptions;
- (void)setCpuCacheMode:(unsigned int)arg1;
- (unsigned int)cpuCacheMode;
- (void)setResourceIndex:(unsigned long long)arg1;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(_Bool)arg1;
- (_Bool)forceResourceIndex;
- (void)setAllowGPUOptimizedContents:(_Bool)arg1;
- (_Bool)allowGPUOptimizedContents;
- (void)setArrayLength:(unsigned int)arg1;
- (unsigned int)arrayLength;
- (void)setSampleCount:(unsigned int)arg1;
- (unsigned int)sampleCount;
- (void)setMipmapLevelCount:(unsigned int)arg1;
- (unsigned int)mipmapLevelCount;
- (void)setDepth:(unsigned int)arg1;
- (unsigned int)depth;
- (void)setHeight:(unsigned int)arg1;
- (unsigned int)height;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;
- (void)setPixelFormat:(unsigned int)arg1;
- (unsigned int)pixelFormat;
- (void)setTextureType:(unsigned int)arg1;
- (unsigned int)textureType;
- (id)description;
- (id)formattedDescription:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

