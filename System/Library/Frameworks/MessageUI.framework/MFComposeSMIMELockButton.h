/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface MFComposeSMIMELockButton : UIButton {

	UIImageView* _lockedImageView;
	UIImageView* _unlockedImageView;
	BOOL _wantsEncryption;
	BOOL _canEncrypt;
	UIEdgeInsets touchInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchInsets; 
@property (assign,nonatomic) BOOL wantsEncryption;                  //@synthesize wantsEncryption=_wantsEncryption - In the implementation block
@property (assign,nonatomic) BOOL canEncrypt;                       //@synthesize canEncrypt=_canEncrypt - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setWantsEncryption:(BOOL)arg1 canEncrypt:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(void)_updateButtonAppearance;
-(void)_updateButtonAppearanceAnimated:(BOOL)arg1 ;
-(BOOL)wantsEncryption;
-(BOOL)canEncrypt;
-(void)_closeLock;
-(void)_openLock;
-(UIEdgeInsets)touchInsets;
-(void)setWantsEncryption:(BOOL)arg1 ;
-(void)setCanEncrypt:(BOOL)arg1 ;
@end
