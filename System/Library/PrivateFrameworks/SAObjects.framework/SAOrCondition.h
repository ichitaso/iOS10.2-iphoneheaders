/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASupportCondition.h>

@class NSArray, NSString;

@interface SAOrCondition : AceObject <SASupportCondition>

@property (nonatomic,copy) NSArray * conditions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)orCondition;
+(id)orConditionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
@end
