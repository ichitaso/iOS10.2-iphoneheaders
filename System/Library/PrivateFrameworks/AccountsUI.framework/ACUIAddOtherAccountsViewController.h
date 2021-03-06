/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/ACUISetupViewControllerDelegate.h>

@class NSString;

@interface ACUIAddOtherAccountsViewController : PSListController <ACUISetupViewControllerDelegate> {

	NSString* _filteredDataclass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpecifier:(id)arg1 ;
-(void)setupViewControllerDidDismiss:(id)arg1 ;
-(id)_specifiersForOtherMailAccounts;
-(id)_specifiersForOtherContactsAccounts;
-(id)_specifiersForOtherCalendarAccounts;
-(id)_specifiersForOtherServerAccounts;
-(id)_viewProvidersManager;
-(id)specifiers;
@end

