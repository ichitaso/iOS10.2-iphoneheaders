/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKTransitionCATransition.h>

@interface OKTransitionFlip : OKTransitionCATransition {

	unsigned long long _direction;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(id)init;
-(id)initWithSettings:(id)arg1 ;
-(void)setSettingDirection:(unsigned long long)arg1 ;
-(void)prepareInView:(id)arg1 ;
-(unsigned long long)settingDirection;
-(BOOL)needsToBeFront;
@end

