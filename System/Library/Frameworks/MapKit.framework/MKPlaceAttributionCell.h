/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@protocol MKPlaceAttributionCellDelegate;
@class NSArray, NSLayoutConstraint, _MKUILabel, UIButton;

@interface MKPlaceAttributionCell : MKPlaceSectionRowView {

	NSArray* _visibleConstraints;
	NSLayoutConstraint* _collapsedConstraint;
	_MKUILabel* _label;
	UIButton* _labelButton;
	NSLayoutConstraint* _labelBaselineToTop;
	NSLayoutConstraint* _labelLastBaselineToBottom;
	id<MKPlaceAttributionCellDelegate> _cellDelegate;

}

@property (nonatomic,retain) _MKUILabel * label;                                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIButton * labelButton;                                              //@synthesize labelButton=_labelButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelBaselineToTop;                             //@synthesize labelBaselineToTop=_labelBaselineToTop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelLastBaselineToBottom;                      //@synthesize labelLastBaselineToBottom=_labelLastBaselineToBottom - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceAttributionCellDelegate> cellDelegate;              //@synthesize cellDelegate=_cellDelegate - In the implementation block
+(id)fontForLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)updateConstraints;
-(_MKUILabel *)label;
-(void)setLabel:(_MKUILabel *)arg1 ;
-(void)_contentSizeDidChange;
-(void)setAttributionString:(id)arg1 ;
-(void)createConstraints;
-(void)attributionClicked;
-(UIButton *)labelButton;
-(void)setLabelButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)labelBaselineToTop;
-(void)setLabelBaselineToTop:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelLastBaselineToBottom;
-(void)setLabelLastBaselineToBottom:(NSLayoutConstraint *)arg1 ;
-(id<MKPlaceAttributionCellDelegate>)cellDelegate;
-(void)setCellDelegate:(id<MKPlaceAttributionCellDelegate>)arg1 ;
@end
