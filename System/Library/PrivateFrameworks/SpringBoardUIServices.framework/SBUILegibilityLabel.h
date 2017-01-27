/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class UILabel, _UILegibilityView, NSArray, UILayoutGuide, NSString, UIFont, NSAttributedString, UIColor, _UILegibilitySettings;

@interface SBUILegibilityLabel : UIView <SBUILegibility> {

	UILabel* _lookasideLabel;
	_UILegibilityView* _legibilityView;
	BOOL _isDirty;
	double _strength;
	long long _options;
	NSArray* _legibilityConstraints;
	UILayoutGuide* _firstBaselineLayoutGuide;
	UILayoutGuide* _lastBaselineLayoutGuide;
	NSString* _string;
	UIFont* _font;
	NSAttributedString* _attributedText;
	UIColor* _textColorOverride;
	_UILegibilitySettings* _legibilitySettings;
	BOOL _isWaitingToMoveToWindow;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * string;                                         //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font;                                           //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL useColorFilters; 
@property (nonatomic,readonly) double firstBaselineOffsetFromBottom; 
@property (nonatomic,readonly) double lastBaselineOffsetFromBottom; 
@property (nonatomic,readonly) double baselineOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)string;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(long long)textAlignment;
-(id)viewForLastBaselineLayout;
-(void)setOptions:(long long)arg1 ;
-(double)baselineOffset;
-(long long)lineBreakMode;
-(double)minimumScaleFactor;
-(long long)numberOfLines;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)viewForFirstBaselineLayout;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 ;
-(void)_updateLegibilityView;
-(void)setUseColorFilters:(BOOL)arg1 ;
-(double)firstBaselineOffsetFromBottom;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 ;
-(void)_markOurselfDirty;
-(double)_layoutGuideOffsetFromBottom:(id)arg1 ;
-(BOOL)useColorFilters;
-(void)_updateLabelForLegibilitySettings;
-(BOOL)_needsColorImage;
-(double)lastBaselineOffsetFromBottom;
@end
