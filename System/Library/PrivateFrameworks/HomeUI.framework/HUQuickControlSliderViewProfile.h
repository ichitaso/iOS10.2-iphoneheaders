/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>
#import <libobjc.A.dylib/HUQuickControlIncrementalConvertibleProfile.h>

@class NSString;

@interface HUQuickControlSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile> {

	BOOL _hasSecondaryValue;
	BOOL _hasOffState;
	double _stepValue;
	unsigned long long _preferredFillSection;

}

@property (assign,nonatomic) BOOL hasOffState;                                     //@synthesize hasOffState=_hasOffState - In the implementation block
@property (assign,nonatomic) double stepValue;                                     //@synthesize stepValue=_stepValue - In the implementation block
@property (assign,nonatomic) unsigned long long preferredFillSection;              //@synthesize preferredFillSection=_preferredFillSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasSecondaryValue;                               //@synthesize hasSecondaryValue=_hasSecondaryValue - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStepValue:(double)arg1 ;
-(double)stepValue;
-(void)setPreferredFillSection:(unsigned long long)arg1 ;
-(void)setHasOffState:(BOOL)arg1 ;
-(void)setHasSecondaryValue:(BOOL)arg1 ;
-(id)viewValueForPercentageValue:(double)arg1 round:(BOOL)arg2 ;
-(double)percentageValueForViewValue:(id)arg1 ;
-(BOOL)hasSecondaryValue;
-(BOOL)hasOffState;
-(unsigned long long)preferredFillSection;
@end
