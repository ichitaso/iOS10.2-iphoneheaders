/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedElement.h>

@class NSString;

@interface FCFeedViewportPersistenceGap : NSObject <FCFeedElement> {

	NSString* _identifier;
	NSString* _firstGroupID;
	NSString* _lastGroupID;

}

@property (nonatomic,copy,readonly) NSString * firstGroupID;              //@synthesize firstGroupID=_firstGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastGroupID;               //@synthesize lastGroupID=_lastGroupID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)firstGroupID;
-(NSString *)lastGroupID;
-(long long)feedElementType;
-(id)initWithFirstGroupID:(id)arg1 lastGroupID:(id)arg2 ;
-(id)copyWithIdentifier:(id)arg1 ;
-(BOOL)isGap;
-(id)initWithIdentifier:(id)arg1 firstGroupID:(id)arg2 lastGroupID:(id)arg3 ;
@end

