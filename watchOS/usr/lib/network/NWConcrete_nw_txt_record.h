//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_txt_record-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_txt_record : NSObject <OS_nw_txt_record>
{
    char *buffer;
    unsigned long data_len;
    unsigned long max_data_len;
    struct os_unfair_lock_s lock;
    unsigned int is_dictionary:1;
    unsigned int __pad_bits:7;
}

@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

