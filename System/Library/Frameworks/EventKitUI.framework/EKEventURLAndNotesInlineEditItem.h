/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventEditItem.h>

@class EKEventURLInlineEditItem, EKEventNotesInlineEditItem;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem {

	EKEventURLInlineEditItem* _urlEditItem;
	EKEventNotesInlineEditItem* _notesEditItem;

}
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)setSelectedResponder:(id)arg1 ;
-(BOOL)isInline;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(void)_contentSizeCategoryChanged;
@end
