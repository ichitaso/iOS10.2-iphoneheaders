/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UILabel, UIActivityIndicatorView;

@interface SULoadingView : UIView {

	long long _activityIndicatorStyle;
	UIColor* _activityIndicatorColor;
	UILabel* _label;
	UIActivityIndicatorView* _progressIndicator;
	unsigned long long _style;
	UIColor* _textColor;
	UIColor* _textShadowColor;

}

@property (assign,nonatomic) long long activityIndicatorStyle;              //@synthesize activityIndicatorStyle=_activityIndicatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * activityIndicatorColor;              //@synthesize activityIndicatorColor=_activityIndicatorColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                           //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * textShadowColor;                     //@synthesize textShadowColor=_textShadowColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)sizeToFit;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIColor *)textColor;
-(id)newProgressIndicator;
-(long long)activityIndicatorStyle;
-(UIColor *)textShadowColor;
-(void)setActivityIndicatorStyle:(long long)arg1 ;
-(void)setActivityIndicatorColor:(UIColor *)arg1 ;
-(void)setTextShadowColor:(UIColor *)arg1 ;
-(id)newTextLabel;
-(UIColor *)activityIndicatorColor;
-(void)_setupSubviews;
@end

