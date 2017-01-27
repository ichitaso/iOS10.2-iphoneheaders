/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying> {

	NSNumber* _wantsDeliveryStatus;
	NSDictionary* _deliveryStatusContext;
	NSNumber* _version;

}

@property (copy) NSNumber * wantsDeliveryStatus;                    //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (copy) NSDictionary * deliveryStatusContext;              //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (copy) NSNumber * version;                                //@synthesize version=_version - In the implementation block
-(id)messageBody;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(NSNumber *)wantsDeliveryStatus;
-(NSDictionary *)deliveryStatusContext;
-(BOOL)wantsAPSRetries;
-(BOOL)wantsHTTPHeaders;
-(id)userAgentHeaderString;
-(BOOL)wantsUserAgentInHeaders;
-(void)setWantsDeliveryStatus:(NSNumber *)arg1 ;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
@end
