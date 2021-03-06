/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@protocol CAMPortraitModeDescriptionOverlayViewDelegate;
@class UIVisualEffectView, CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView, UILabel, UIButton;

@interface CAMPortraitModeDescriptionOverlayView : UIView {

	id<CAMPortraitModeDescriptionOverlayViewDelegate> _delegate;
	long long _orientation;
	UIVisualEffectView* __blurEffectView;
	CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView* __primaryVibrancyEffectView;
	UILabel* __titleLabel;
	UILabel* __subtitleLabel;
	UILabel* __descriptionLabel;
	UIButton* __acknowledgmentButton;

}

@property (nonatomic,readonly) UIVisualEffectView * _blurEffectView;                                                                 //@synthesize _blurEffectView=__blurEffectView - In the implementation block
@property (nonatomic,readonly) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView * _primaryVibrancyEffectView;              //@synthesize _primaryVibrancyEffectView=__primaryVibrancyEffectView - In the implementation block
@property (nonatomic,readonly) UILabel * _titleLabel;                                                                                //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _subtitleLabel;                                                                             //@synthesize _subtitleLabel=__subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _descriptionLabel;                                                                          //@synthesize _descriptionLabel=__descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIButton * _acknowledgmentButton;                                                                     //@synthesize _acknowledgmentButton=__acknowledgmentButton - In the implementation block
@property (assign,nonatomic,__weak) id<CAMPortraitModeDescriptionOverlayViewDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isAcknowledgmentButtonHighlighted,nonatomic) BOOL acknowledgmentButtonHighlighted; 
@property (assign,nonatomic) long long orientation;                                                                                  //@synthesize orientation=_orientation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<CAMPortraitModeDescriptionOverlayViewDelegate>)arg1 ;
-(id<CAMPortraitModeDescriptionOverlayViewDelegate>)delegate;
-(void)setOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(UILabel *)_titleLabel;
-(UILabel *)_subtitleLabel;
-(void)setVisible:(BOOL)arg1 animationDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateToContentSize:(id)arg1 ;
-(void)setAcknowledgmentButtonHighlighted:(BOOL)arg1 ;
-(void)_handleAcknowledgmentButtonTapped:(id)arg1 ;
-(void)_updateFontsForCurrentContentSize;
-(id)_currentContentSize;
-(double)_additionalFontSizeForContentSize:(id)arg1 ;
-(UILabel *)_descriptionLabel;
-(UIButton *)_acknowledgmentButton;
-(UIVisualEffectView *)_blurEffectView;
-(CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *)_primaryVibrancyEffectView;
-(BOOL)isAcknowledgmentButtonHighlighted;
@end

