/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>

@class HKMedicalIDEditorPickerCell, _HKMedicalIDMultilineStringCell, _HKCustomInsetCellLayoutManager;

@interface HKEmergencyCardOrganDonorTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {

	HKMedicalIDEditorPickerCell* _editableCell;
	_HKMedicalIDMultilineStringCell* _displayCell;
	_HKCustomInsetCellLayoutManager* _layoutManager;

}
-(id)title;
-(void)commitEditing;
-(id)possibleValues;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(id)_createEditableCell;
-(id)_displayCell;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(id)displayValueForOrganDonorStatus:(unsigned long long)arg1 ;
-(long long)chosenIndexForOrganDonorStatus:(unsigned long long)arg1 ;
-(void)promptOrganDonationRegistrationIfPossibleWithCompletion:(/*^block*/id)arg1 ;
@end

