/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet, NSArray;

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController {

	NSMutableSet* _monthsOfTheYearSet;
	BOOL _prohibitsMultipleMonthsInYearlyRecurrence;

}

@property (nonatomic,retain) NSArray * monthsOfTheYear; 
@property (assign,nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;              //@synthesize prohibitsMultipleMonthsInYearlyRecurrence=_prohibitsMultipleMonthsInYearlyRecurrence - In the implementation block
-(long long)frequency;
-(id)tableViewCell;
-(void)prepareForDisplay;
-(BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
-(void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)refreshCells;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellLabels;
-(long long)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(long long)arg2 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
@end

