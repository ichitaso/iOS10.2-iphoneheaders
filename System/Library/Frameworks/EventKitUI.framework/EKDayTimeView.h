/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKUIVisualEffectView.h>
#import <libobjc.A.dylib/EKCurrentTimeMarkerViewUpdating.h>

@protocol EKDayTimeViewDelegate;
@class NSMutableArray, EKCurrentTimeMarkerView, UIView, UIColor, NSString;

@interface EKDayTimeView : EKUIVisualEffectView <EKCurrentTimeMarkerViewUpdating> {

	NSMutableArray* _contentViews;
	unsigned _leftBorder : 1;
	unsigned _rightBorder : 1;
	double _highlightedHour;
	long long _orientation;
	double _hourSize;
	double _designatorSize;
	EKCurrentTimeMarkerView* _timeMarker;
	UIView* _timeMarkerExtension;
	double _timeWidth;
	BOOL _showsTimeMarker;
	BOOL _showsTimeMarkerExtension;
	BOOL _usesLightText;
	UIColor* _timeColor;
	double _hoursToPad;
	double _hourHeightScale;
	double _hourHeight;
	id<EKDayTimeViewDelegate> _delegate;
	NSRange _hoursToRender;

}

@property (assign,nonatomic) BOOL showsLeftBorder; 
@property (assign,nonatomic) BOOL showsRightBorder; 
@property (assign,nonatomic) BOOL showsTimeMarker;                                   //@synthesize showsTimeMarker=_showsTimeMarker - In the implementation block
@property (assign,nonatomic) BOOL showsTimeMarkerExtension;                          //@synthesize showsTimeMarkerExtension=_showsTimeMarkerExtension - In the implementation block
@property (assign,nonatomic) BOOL usesLightText;                                     //@synthesize usesLightText=_usesLightText - In the implementation block
@property (assign,nonatomic) double highlightedHour; 
@property (assign,nonatomic) double hoursToPad;                                      //@synthesize hoursToPad=_hoursToPad - In the implementation block
@property (nonatomic,retain) UIColor * timeColor;                                    //@synthesize timeColor=_timeColor - In the implementation block
@property (nonatomic,readonly) EKCurrentTimeMarkerView * timeMarker; 
@property (assign,nonatomic) NSRange hoursToRender;                                  //@synthesize hoursToRender=_hoursToRender - In the implementation block
@property (assign,nonatomic) double hourHeightScale;                                 //@synthesize hourHeightScale=_hourHeightScale - In the implementation block
@property (nonatomic,readonly) double hourHeight;                                    //@synthesize hourHeight=_hourHeight - In the implementation block
@property (nonatomic,readonly) double defaultHeight; 
@property (assign,nonatomic,__weak) id<EKDayTimeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeightForOrientation:(long long)arg1 ;
+(id)_noonLocalizedString;
+(double)timeWidthForOrientation:(long long)arg1 ;
+(double)defaultHourScale;
+(double)defaultHeightForOrientation:(long long)arg1 withHourScale:(double)arg2 ;
+(double)hourWidthForOrientation:(long long)arg1 ;
+(double)timeInsetForOrientation:(long long)arg1 ;
+(double)hourHeightForOrientation:(long long)arg1 ;
+(void)_registerForInvalidation;
+(void)_invalidateCachedValues;
+(double)hourSizeForOrientation:(long long)arg1 ;
+(double)_dynamicFontSizeForOrientation:(long long)arg1 ;
+(id)_boldFontForOrientation:(long long)arg1 ;
+(double)_noonLocalizedWidthForOrientation:(long long)arg1 ;
+(id)allDayLabelBoldFont;
+(void)_calculateWidthForOrientation:(long long)arg1 excludeCurrentTime:(BOOL)arg2 ;
+(double)_timeTextWidthForOrientation:(long long)arg1 ;
+(id)allDayLabelFont;
+(void)_invalidateWidth;
+(double)designatorSizeForOrientation:(long long)arg1 ;
+(double)timeVerticalInsetForOrientation:(long long)arg1 ;
+(id)_normalFontForOrientation:(long long)arg1 ;
+(id)unscaledAllDayLabelFont;
+(double)heightOfHourTextForHour:(long long)arg1 orientation:(long long)arg2 ;
+(double)verticalPadding;
+(void)setVerticalPadding:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(void)setDelegate:(id<EKDayTimeViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<EKDayTimeViewDelegate>)delegate;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(double)defaultHeight;
-(void)setOrientation:(long long)arg1 ;
-(void)tintColorDidChange;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(void)setShowsRightBorder:(BOOL)arg1 ;
-(BOOL)showsRightBorder;
-(BOOL)showsLeftBorder;
-(double)hourHeight;
-(double)topPadding;
-(void)_localeChanged;
-(void)setHoursToRender:(NSRange)arg1 ;
-(NSRange)hoursToRender;
-(double)scaledHourHeight;
-(void)setUsesLightText:(BOOL)arg1 ;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(void)updateMarkerPosition;
-(EKCurrentTimeMarkerView *)timeMarker;
-(BOOL)showsTimeMarker;
-(double)_positionOfSecond:(int)arg1 ;
-(UIColor *)timeColor;
-(void)setTimeColor:(UIColor *)arg1 ;
-(void)setHourHeightScale:(double)arg1 ;
-(void)setHighlightedHour:(double)arg1 ;
-(double)highlightedHour;
-(void)subTintColorUpdatedToColor:(id)arg1 ;
-(double)_timeWidth;
-(void)layoutFrames;
-(void)_fontSizeChanged;
-(void)_sizeClassChanged;
-(void)_invalidateTimeWidth;
-(void)drawRect:(CGRect)arg1 forContentView:(id)arg2 withHourRange:(NSRange)arg3 ;
-(void)setShowsTimeMarkerExtension:(BOOL)arg1 ;
-(BOOL)showsTimeMarkerExtension;
-(BOOL)usesLightText;
-(double)hoursToPad;
-(void)setHoursToPad:(double)arg1 ;
-(double)hourHeightScale;
@end
