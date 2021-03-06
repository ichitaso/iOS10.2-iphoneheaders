/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIKeyboardAnimatorState.h>

@protocol UIInputViewAnimationHost;
@class UIView, UIInputViewSetPlacement, NSString;

@interface _UIKeyboardAnimatorAnimationStyleControllerContext : NSObject <_UIKeyboardAnimatorState> {

	id<UIInputViewAnimationHost> _host;
	UIInputViewSetPlacement* _start;
	UIInputViewSetPlacement* _end;
	CGRect _startFrame;
	CGRect _endFrame;
	BOOL _hidden;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIView * animatingView; 
@property (assign,nonatomic) BOOL inputViewsHidden;                        //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) CGRect startFrame;                          //@synthesize startFrame=_startFrame - In the implementation block
@property (nonatomic,readonly) CGRect endFrame;                            //@synthesize endFrame=_endFrame - In the implementation block
-(CGRect)endFrame;
-(CGRect)startFrame;
-(void)setInputViewsHidden:(BOOL)arg1 ;
-(UIView *)animatingView;
-(id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 ;
-(void)complete;
-(BOOL)inputViewsHidden;
@end

