/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression, NSArray, NSString;

@interface GKRoute : NSObject {

	NSRegularExpression* _regex;
	NSArray* _parameterNames;
	NSString* _scheme;

}
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(BOOL)matchesURL:(id)arg1 ;
-(id)initWithString:(id)arg1 scheme:(id)arg2 ;
-(id)nonParameterCharacterSet;
-(BOOL)matchesURL:(id)arg1 parameters:(id*)arg2 ;
@end

