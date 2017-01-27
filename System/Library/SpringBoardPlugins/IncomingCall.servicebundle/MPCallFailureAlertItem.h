/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class TUCall;

@interface MPCallFailureAlertItem : SBAlertItem {

	TUCall* _call;

}

@property (nonatomic,retain,readonly) TUCall * call;              //@synthesize call=_call - In the implementation block
+(id)alertItemWithCall:(id)arg1 ;
-(id)init;
-(void)_callback;
-(TUCall *)call;
-(id)initWithCall:(id)arg1 ;
-(id)shortLockLabel;
-(void)performUnlockAction;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)lockLabel;
-(BOOL)supportsAlertController;
@end
