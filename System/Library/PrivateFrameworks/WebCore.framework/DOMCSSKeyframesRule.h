/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMCSSRule.h>

@class NSString, DOMCSSRuleList;

@interface DOMCSSKeyframesRule : DOMCSSRule

@property (copy) NSString * name; 
@property (readonly) DOMCSSRuleList * cssRules; 
-(DOMCSSRuleList *)cssRules;
-(void)insertRule:(id)arg1 ;
-(void)appendRule:(id)arg1 ;
-(void)deleteRule:(id)arg1 ;
-(id)findRule:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
