/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <carkitd/CRAlert.h>

@class CRVehicle;

@interface CRReconnectionEnableWiFiAlert : CRAlert {

	CRVehicle* _vehicle;

}

@property (nonatomic,retain) CRVehicle * vehicle;              //@synthesize vehicle=_vehicle - In the implementation block
-(BOOL)presentAlertWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithVehicle:(id)arg1 ;
-(id)alertAcceptButtonTitle;
-(id)alertDeclineButtonTitle;
-(id)lockscreenMessage;
-(id)alertAcceptedAnalyticsKey;
-(id)alertDeclinedAnalyticsKey;
-(id)alertTitle;
-(id)alertMessage;
-(CRVehicle *)vehicle;
-(void)setVehicle:(CRVehicle *)arg1 ;
@end

