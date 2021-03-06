/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSSet, NSString;

@interface FCFeedTransformationPaywallFilter : NSObject <FCFeedTransforming> {

	NSSet* _purchasedTagIDs;

}

@property (nonatomic,copy) NSSet * purchasedTagIDs;                 //@synthesize purchasedTagIDs=_purchasedTagIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(NSSet *)purchasedTagIDs;
-(void)setPurchasedTagIDs:(NSSet *)arg1 ;
-(id)initWithPurchasedTagIDs:(id)arg1 ;
@end

