/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKTransitionParallaxPush.h>

@class CATransition;

@interface OKTransitionCATransition : OKTransitionParallaxPush {

	CATransition* _transition;

}
-(void)dealloc;
-(id)animation;
-(void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(BOOL)arg4 duration:(double)arg5 doEaseIn:(BOOL)arg6 doEaseOut:(BOOL)arg7 isCompleting:(BOOL)arg8 wasCancelled:(BOOL)arg9 fromProgress:(double)arg10 completionHandler:(/*^block*/id)arg11 ;
-(void)prepareInView:(id)arg1 ;
@end
