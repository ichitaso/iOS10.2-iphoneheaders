/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _MPMeCardGeocoderPreferences : NSObject {

	NSDictionary* _defaultValues;
	NSDictionary* _currentValues;

}
+(id)sharedPreferences;
-(id)init;
-(void)dealloc;
-(double)activeUsagePeriodLength;
-(double)periodLength;
-(BOOL)hasValidNetworkPreferences;
-(void)_networkDefaultsRegistrationComplete:(id)arg1 ;
-(id)_constructCurrentValues;
-(double)_bestTimeIntervalForKey:(id)arg1 ;
@end
