/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@interface IMNetworkReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityForLocalWiFi;
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(long long)currentReachabilityStatus;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
@end
