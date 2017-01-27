/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarEditItem.h>
#import <libobjc.A.dylib/EKShareeViewControllerDelegate.h>
#import <libobjc.A.dylib/EKShareePickerViewControllerDelegate.h>

@class NSMutableArray, UIView, UILabel, NSString;

@interface EKCalendarShareesEditItem : EKCalendarEditItem <EKShareeViewControllerDelegate, EKShareePickerViewControllerDelegate> {

	NSMutableArray* _shareeCells;
	UIView* _footerView;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) NSMutableArray * shareeCells;              //@synthesize shareeCells=_shareeCells - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(id)headerTitle;
-(id)footerView;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)_applyStyleToUILabel:(id)arg1 ;
-(void)layoutForWidth:(double)arg1 ;
-(id)footerViewForSection;
-(double)footerHeightForSection;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(id)_shareeCellForName:(id)arg1 detailText:(id)arg2 additionalDetailText:(id)arg3 ;
-(id)_stringForShareeStatus:(unsigned long long)arg1 ;
-(id)_stringForShareeAccessLevel:(unsigned long long)arg1 ;
-(NSMutableArray *)shareeCells;
-(id)_addPersonCell;
-(void)_popBackToCalendarEditor:(BOOL)arg1 ;
-(void)shareeViewControllerDidChangeAccessLevel:(id)arg1 ;
-(void)shareeViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)shareePickerViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)eventStoreForShareePickerViewController:(id)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)setShareeCells:(NSMutableArray *)arg1 ;
@end
