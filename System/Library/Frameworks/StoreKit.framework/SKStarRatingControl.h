/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel, NSString;

@interface SKStarRatingControl : UIControl {

	UIImageView* _backgroundImageView;
	UILabel* _explanationLabel;
	UIImageView* _foregroundImageView;
	CGSize _hitPadding;
	double _starWidth;
	CGPoint _trackingLastPoint;
	CGPoint _trackingStartPoint;
	float _value;

}

@property (nonatomic,copy) NSString * explanationText; 
@property (assign,nonatomic) double starWidth;                      //@synthesize starWidth=_starWidth - In the implementation block
@property (assign,nonatomic) float value; 
-(void)layoutSubviews;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(CGRect)hitRect;
-(void)sizeToFit;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(NSString *)explanationText;
-(void)_updateValueForPoint:(CGPoint)arg1 ;
-(BOOL)canHandleSwipes;
-(CGRect)_foregroundImageClipBounds;
-(id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2 ;
-(void)setExplanationText:(NSString *)arg1 ;
-(void)setHitPadding:(CGSize)arg1 ;
-(void)setStarWidth:(double)arg1 ;
-(id)_newExplanationLabel;
-(double)starWidth;
@end
