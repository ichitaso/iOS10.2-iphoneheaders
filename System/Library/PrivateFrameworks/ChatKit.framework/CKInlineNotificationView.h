/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@protocol CKInlineNotificationViewDelegate;
@class UIView, _UIBackdropView;

@interface CKInlineNotificationView : UIView {

	BOOL _visible;
	BOOL _animatingVisibility;
	id<CKInlineNotificationViewDelegate> _delegate;
	UIView* _clippingView;
	UIView* _containerView;
	_UIBackdropView* _backdropView;
	UIView* _bottomLineView;

}

@property (nonatomic,readonly) BOOL _shouldSuppressLayout; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) UIView * clippingView;                                             //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                            //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                    //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * bottomLineView;                                           //@synthesize bottomLineView=_bottomLineView - In the implementation block
@property (assign,nonatomic) BOOL animatingVisibility;                                          //@synthesize animatingVisibility=_animatingVisibility - In the implementation block
@property (assign,nonatomic,__weak) id<CKInlineNotificationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL visible; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setDelegate:(id<CKInlineNotificationViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CKInlineNotificationViewDelegate>)delegate;
-(UIView *)containerView;
-(BOOL)visible;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(CGSize)contentViewSizeThatFits:(CGSize)arg1 ;
-(BOOL)animatingVisibility;
-(UIView *)clippingView;
-(UIView *)bottomLineView;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAnimatingVisibility:(BOOL)arg1 ;
-(void)setClippingView:(UIView *)arg1 ;
-(void)setBottomLineView:(UIView *)arg1 ;
-(BOOL)_shouldSuppressLayout;
-(void)_invalidateContentViewHeight;
@end

