/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@class NSMutableSet;

@interface MCNewDefaultsPayloadHandler : MCNewPayloadHandler {

	NSMutableSet* _changedDomains;

}
+(void)removeDefaults:(id)arg1 forDomain:(id)arg2 ;
+(id)defaultsForManagedDomain:(id)arg1 ;
+(void)removeDefaults:(id)arg1 forManagedDomain:(id)arg2 ;
+(id)_managedSettingsFolder;
+(BOOL)setDefaults:(id)arg1 forManagedDomain:(id)arg2 ;
+(BOOL)addDefaults:(id)arg1 toManagedDomain:(id)arg2 ;
-(id)initWithPayload:(id)arg1 profileHandler:(id)arg2 ;
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)unsetAside;
-(void)setAside;
-(void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)_remove;
-(void)migrateDefaults;
-(void)_sendCFPreferenceNotification;
-(BOOL)_install;
-(void)remove;
@end
