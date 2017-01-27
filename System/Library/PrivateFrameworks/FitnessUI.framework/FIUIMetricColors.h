/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FitnessUI/FitnessUI-Structs.h>
@class UIColor, NSString;

@interface FIUIMetricColors : NSObject {

	UIColor* _gradientLightColor;
	UIColor* _gradientDarkColor;
	UIColor* _adjustmentButtonBackgroundColor;
	UIColor* _nonGradientTextColor;
	UIColor* _lightenedNonGradientColor;
	UIColor* _buttonTextColor;
	UIColor* _buttonDisabledTextColor;
	UIColor* _valueDisplayColor;
	NSString* _workoutRingColorIdentifier;

}

@property (nonatomic,retain) UIColor * gradientLightColor;                           //@synthesize gradientLightColor=_gradientLightColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientDarkColor;                            //@synthesize gradientDarkColor=_gradientDarkColor - In the implementation block
@property (nonatomic,retain) UIColor * adjustmentButtonBackgroundColor;              //@synthesize adjustmentButtonBackgroundColor=_adjustmentButtonBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * nonGradientTextColor;                         //@synthesize nonGradientTextColor=_nonGradientTextColor - In the implementation block
@property (nonatomic,retain) UIColor * lightenedNonGradientColor;                    //@synthesize lightenedNonGradientColor=_lightenedNonGradientColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                              //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonDisabledTextColor;                      //@synthesize buttonDisabledTextColor=_buttonDisabledTextColor - In the implementation block
@property (nonatomic,retain) UIColor * valueDisplayColor;                            //@synthesize valueDisplayColor=_valueDisplayColor - In the implementation block
@property (nonatomic,retain) NSString * workoutRingColorIdentifier;                  //@synthesize workoutRingColorIdentifier=_workoutRingColorIdentifier - In the implementation block
+(id)clockColors;
+(id)distanceColors;
+(id)elapsedTimeColors;
+(id)heartRateColors;
+(id)paceColors;
+(id)lapsColors;
+(id)noMetricColors;
+(id)systemGrayTextColor;
+(id)metricColorsForMetricType:(unsigned long long)arg1 ;
+(id)metricColorsForGoalTypeIdentifier:(unsigned long long)arg1 ;
+(CGGradientRef)newGradientForStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)lapColors;
+(id)elevationColors;
+(id)deepBreathingColors;
+(id)energyColors;
+(id)briskColors;
+(id)sedentaryColors;
+(id)keyColors;
-(void)setGradientLightColor:(UIColor *)arg1 ;
-(void)setGradientDarkColor:(UIColor *)arg1 ;
-(void)setNonGradientTextColor:(UIColor *)arg1 ;
-(void)setAdjustmentButtonBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)adjustmentButtonBackgroundColor;
-(void)setLightenedNonGradientColor:(UIColor *)arg1 ;
-(void)setButtonDisabledTextColor:(UIColor *)arg1 ;
-(void)setValueDisplayColor:(UIColor *)arg1 ;
-(void)setWorkoutRingColorIdentifier:(NSString *)arg1 ;
-(UIColor *)lightenedNonGradientColor;
-(UIColor *)buttonDisabledTextColor;
-(UIColor *)valueDisplayColor;
-(NSString *)workoutRingColorIdentifier;
-(UIColor *)gradientDarkColor;
-(UIColor *)gradientLightColor;
-(UIColor *)nonGradientTextColor;
-(UIColor *)buttonTextColor;
-(void)setButtonTextColor:(UIColor *)arg1 ;
@end
