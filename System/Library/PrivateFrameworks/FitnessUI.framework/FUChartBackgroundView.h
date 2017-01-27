/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>

@class NSNumber;

@interface FUChartBackgroundView : UIView {

	NSNumber* _maxValue;
	NSNumber* _minValue;
	UIEdgeInsets _lineInsets;

}

@property (nonatomic,retain) NSNumber * maxValue;                  //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) NSNumber * minValue;                  //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) UIEdgeInsets lineInsets;              //@synthesize lineInsets=_lineInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSNumber *)minValue;
-(NSNumber *)maxValue;
-(void)setMaxValue:(NSNumber *)arg1 ;
-(void)setMinValue:(NSNumber *)arg1 ;
-(UIEdgeInsets)lineInsets;
-(void)setLineInsets:(UIEdgeInsets)arg1 ;
@end
