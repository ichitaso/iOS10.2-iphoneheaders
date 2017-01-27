/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SASyncAnchor, NSString;

@interface SASyncDebugInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * objectIds; 
@property (nonatomic,retain) SASyncAnchor * syncAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)debugInfoWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)debugInfo;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)objectIds;
-(void)setObjectIds:(NSArray *)arg1 ;
-(SASyncAnchor *)syncAnchor;
-(void)setSyncAnchor:(SASyncAnchor *)arg1 ;
@end
