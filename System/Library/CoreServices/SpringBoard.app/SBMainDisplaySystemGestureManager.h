/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSystemGestureManager.h>

@class SBGestureDefaults;

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager {

	SBGestureDefaults* _gestureDefaults;
	BOOL _multitaskingGesturesEnabled;

}

@property (assign,setter=_setMultitaskingGesturesEnabled:,getter=_isMultitaskingGesturesEnabled,nonatomic) BOOL multitaskingGesturesEnabled;              //@synthesize multitaskingGesturesEnabled=_multitaskingGesturesEnabled - In the implementation block
-(void)_evaluateEnablement;
-(BOOL)_isMultitaskingGesturesEnabled;
-(void)_updateUserPreferences;
-(BOOL)_isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(void)_setMultitaskingGesturesEnabled:(BOOL)arg1 ;
-(BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(BOOL)_isTouchGestureWithType:(unsigned long long)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

