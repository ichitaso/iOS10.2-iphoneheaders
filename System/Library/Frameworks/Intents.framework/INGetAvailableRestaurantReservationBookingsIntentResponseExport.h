/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INTermsAndConditions, NSArray;


@protocol INGetAvailableRestaurantReservationBookingsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * localizedRestaurantDescriptionText; 
@property (nonatomic,copy) NSString * localizedBookingAdvisementText; 
@property (nonatomic,copy) INTermsAndConditions * termsAndConditions; 
@property (nonatomic,readonly) NSArray * availableBookings; 
@required
-(id)init;
-(long long)code;
-(NSString *)localizedBookingAdvisementText;
-(NSString *)localizedRestaurantDescriptionText;
-(NSArray *)availableBookings;
-(void)setLocalizedRestaurantDescriptionText:(id)arg1;
-(void)setLocalizedBookingAdvisementText:(id)arg1;
-(INTermsAndConditions *)termsAndConditions;
-(void)setTermsAndConditions:(id)arg1;

@end

