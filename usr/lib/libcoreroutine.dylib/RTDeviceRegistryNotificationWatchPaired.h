/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSUUID;

@interface RTDeviceRegistryNotificationWatchPaired : RTNotification {

	NSUUID* _pairingIdentifier;

}

@property (nonatomic,retain) NSUUID * pairingIdentifier;              //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
-(NSUUID *)pairingIdentifier;
-(id)initWithPairingIdentifier:(id)arg1 ;
-(void)setPairingIdentifier:(NSUUID *)arg1 ;
@end

