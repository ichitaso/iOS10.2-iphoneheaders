/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIColor;

@interface CLKUIChronoButton : UIControl {

	UIImageView* _ringView;
	UIImageView* _fillView;
	CGPoint _originalCenter;
	UIColor* _color;
	UIColor* _swapColor;
	UIColor* _highlightColor;
	UIColor* _ringColor;
	UIColor* _ringSwapColor;
	UIEdgeInsets _touchEdgeInsets;

}

@property (nonatomic,retain) UIColor * color;                           //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIColor * swapColor;                       //@synthesize swapColor=_swapColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                  //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIColor * ringColor;                       //@synthesize ringColor=_ringColor - In the implementation block
@property (nonatomic,retain) UIColor * ringSwapColor;                   //@synthesize ringSwapColor=_ringSwapColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;              //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)_updateColors;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setRingColor:(UIColor *)arg1 ;
-(void)setSwapColor:(UIColor *)arg1 ;
-(void)setRingSwapColor:(UIColor *)arg1 ;
-(void)_performTouchAnimationThroughColor:(id)arg1 toColor:(id)arg2 toRingColor:(id)arg3 ;
-(UIColor *)swapColor;
-(UIColor *)ringColor;
-(UIColor *)ringSwapColor;
-(UIEdgeInsets)touchEdgeInsets;
@end

