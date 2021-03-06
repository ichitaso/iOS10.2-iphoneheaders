/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class _TPTemplatedColoredImageView, UIColor;

@interface TPRevealingRingView : UIView {

	SCD_Struct_TP6 _outerViewDrawingProperties;
	_TPTemplatedColoredImageView* _outerView;
	SCD_Struct_TP6 _outerGammaViewDrawingProperties;
	_TPTemplatedColoredImageView* _outerGammaView;
	SCD_Struct_TP6 _innerGammaViewDrawingProperties;
	_TPTemplatedColoredImageView* _innerGammaView;
	SCD_Struct_TP6 _innerViewDrawingProperties;
	_TPTemplatedColoredImageView* _innerView;
	UIColor* _colorOutsideRing;
	UIColor* _colorInsideRing;
	UIEdgeInsets _paddingOutsideRing;
	double _defaultRingStrokeWidth;
	double _gammaBoost;
	double _revealAnimationDuration;
	double _unrevealAnimationDuration;
	double _minimumRevealingScale;
	double _cornerRadius;
	int _animationStyle;
	BOOL _isCircularRing;
	double _innerGammaAlpha;
	BOOL _revealed;
	BOOL _gammaBoostOuterRing;
	BOOL _gammaBoostInside;
	double _alphaInsideRing;
	double _alphaOutsideRing;

}

@property (assign,nonatomic) double minimumRevealingScale;                   //@synthesize minimumRevealingScale=_minimumRevealingScale - In the implementation block
@property (nonatomic,readonly) CGSize ringSize; 
@property (nonatomic,readonly) UIEdgeInsets paddingOutsideRing;              //@synthesize paddingOutsideRing=_paddingOutsideRing - In the implementation block
@property (assign,nonatomic) double cornerRadius;                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double defaultRingStrokeWidth;                  //@synthesize defaultRingStrokeWidth=_defaultRingStrokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * colorOutsideRing;                     //@synthesize colorOutsideRing=_colorOutsideRing - In the implementation block
@property (nonatomic,retain) UIColor * colorInsideRing;                      //@synthesize colorInsideRing=_colorInsideRing - In the implementation block
@property (assign,nonatomic) double gammaBoost;                              //@synthesize gammaBoost=_gammaBoost - In the implementation block
@property (assign,nonatomic) double revealAnimationDuration;                 //@synthesize revealAnimationDuration=_revealAnimationDuration - In the implementation block
@property (assign,nonatomic) double unrevealAnimationDuration;               //@synthesize unrevealAnimationDuration=_unrevealAnimationDuration - In the implementation block
@property (assign,nonatomic) double alphaOutsideRing;                        //@synthesize alphaOutsideRing=_alphaOutsideRing - In the implementation block
@property (assign,nonatomic) double alphaInsideRing;                         //@synthesize alphaInsideRing=_alphaInsideRing - In the implementation block
@property (assign,nonatomic) BOOL gammaBoostOuterRing;                       //@synthesize gammaBoostOuterRing=_gammaBoostOuterRing - In the implementation block
@property (assign,nonatomic) BOOL gammaBoostInside;                          //@synthesize gammaBoostInside=_gammaBoostInside - In the implementation block
@property (assign,nonatomic) int animationStyle;                             //@synthesize animationStyle=_animationStyle - In the implementation block
+(id)classIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(id)description;
-(CGSize)intrinsicContentSize;
-(int)animationStyle;
-(void)setAnimationStyle:(int)arg1 ;
-(void)setGammaBoostInside:(BOOL)arg1 ;
-(void)setGammaBoostOuterRing:(BOOL)arg1 ;
-(void)setRingGammaBoost:(double)arg1 ;
-(void)setUsesColorDodgeBlending:(BOOL)arg1 ;
-(void)setUsesColorBurnBlending:(BOOL)arg1 ;
-(double)alphaInsideRing;
-(void)setMinimumRevealingScale:(double)arg1 ;
-(void)setPaddingOutsideRing:(UIEdgeInsets)arg1 ;
-(void)_adjustGammaBoostIfNecessary;
-(void)_evaluateCircularness;
-(void)_animateForReveal:(BOOL)arg1 withDuration:(float)arg2 delay:(double)arg3 ;
-(void)_computeOuterGammaViewDrawingPropertiesWithScale:(double)arg1 ;
-(void)_computeInnerGammaViewDrawingPropertiesWithScale:(double)arg1 ;
-(void)_computeInnerViewDrawingPropertiesWithScale:(double)arg1 ;
-(void)_calculateOuter:(CGRect*)arg1 inner:(CGRect*)arg2 newXOffset:(double*)arg3 newYOffset:(double*)arg4 withScale:(double)arg5 ;
-(BOOL)_shouldDrawAsCircle:(CGSize)arg1 cornerRadius:(double)arg2 ;
-(BOOL)_isSquare:(CGSize)arg1 ;
-(double)alphaOutsideRing;
-(double)defaultRingStrokeWidth;
-(double)gammaBoost;
-(double)revealAnimationDuration;
-(double)unrevealAnimationDuration;
-(double)minimumRevealingScale;
-(UIColor *)colorOutsideRing;
-(UIColor *)colorInsideRing;
-(BOOL)gammaBoostOuterRing;
-(BOOL)gammaBoostInside;
-(id)initWithFrame:(CGRect)arg1 paddingOutsideRing:(UIEdgeInsets)arg2 ;
-(void)setRevealAnimationDuration:(double)arg1 ;
-(void)setUnrevealAnimationDuration:(double)arg1 ;
-(void)setColorInsideRing:(UIColor *)arg1 ;
-(void)setColorOutsideRing:(UIColor *)arg1 ;
-(void)setDefaultRingStrokeWidth:(double)arg1 ;
-(CGSize)ringSize;
-(void)setAlphaInsideRing:(double)arg1 ;
-(void)setAlphaOutsideRing:(double)arg1 ;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setGammaBoost:(double)arg1 ;
-(UIEdgeInsets)paddingOutsideRing;
@end

