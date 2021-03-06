//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class NSString;

@interface AMSCardEnrollmentPaymentSessionTask : AMSTask <AMSBagConsumer>
{
}

+ (id)_paymentServiceURLStringForMerchantURL:(id)arg1;
+ (id)_bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)performPaymentSessionEnrollmentWithBag:(id)arg1;
+ (id)performPaymentSessionEnrollment;
+ (void)paymentSessionWithBag:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)paymentSessionWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

