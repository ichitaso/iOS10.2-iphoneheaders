/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/PrimaryCloudCallingSettingsBundle.bundle/PrimaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrimaryCloudCallingSettingsBundle/PHSettingsCloudCallingListController.h>

@class PHSettingsThumperProvisioningController;

@interface PHSettingsPrimaryCloudCallingController : PHSettingsCloudCallingListController {

	PHSettingsThumperProvisioningController* _thumperProvisioningController;

}

@property (nonatomic,retain) PHSettingsThumperProvisioningController * thumperProvisioningController;              //@synthesize thumperProvisioningController=_thumperProvisioningController - In the implementation block
-(void)thumperProvisioningURLChanged:(id)arg1 ;
-(id)authenticateWifiSpecifiers;
-(id)mainSwitchFooterText;
-(BOOL)shouldShowUpgradeToThumperButton;
-(void)setCallsOnOtherDevices:(id)arg1 specifier:(id)arg2 ;
-(void)setThumperProvisioningController:(PHSettingsThumperProvisioningController *)arg1 ;
-(PHSettingsThumperProvisioningController *)thumperProvisioningController;
-(id)getCallsOnOtherDevices:(id)arg1 ;
-(void)addWifiCallingForOtherDevices:(id)arg1 ;
-(id)thumperDeviceSpecifiers;
-(id)init;
-(void)dealloc;
-(void)statusChanged:(id)arg1 ;
-(void)setDeviceActive:(id)arg1 specifier:(id)arg2 ;
-(id)getDeviceActive:(id)arg1 ;
-(id)specifiers;
@end
