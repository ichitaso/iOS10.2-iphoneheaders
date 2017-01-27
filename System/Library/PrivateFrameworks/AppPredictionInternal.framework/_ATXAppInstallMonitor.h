/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _ATXAppInfoManager, NSDictionary, NSObject;

@interface _ATXAppInstallMonitor : NSObject {

	_ATXAppInfoManager* _appInfoManager;
	NSDictionary* _assetData;
	NSObject*<OS_dispatch_queue> _installQueue;
	/*^block*/id _updateCompletionBlock;

}
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)synchronousUpdateAndBackdate:(BOOL)arg1 ;
-(void)receivedInstallNotification:(id)arg1 ;
-(void)receivedUninstallNotification:(id)arg1 ;
-(void)receivedStateChangeNotification:(id)arg1 ;
-(void)noSyncUpdateWithWaitTime:(unsigned long long)arg1 andBackdate:(BOOL)arg2 ;
-(void)synchronousUpdateWithUninstallWaitTime:(unsigned long long)arg1 andBackdate:(BOOL)arg2 ;
-(id)fetchInstalledApps;
-(id)fetchAllAppsFromDatastore;
-(id)removeIntersectionBetweenSet:(id)arg1 set:(id)arg2 ;
-(void)_handleInstallationOfApps:(id)arg1 andBackdate:(BOOL)arg2 ;
-(BOOL)restoreInProgress;
-(void)_handleUninstallationOfApps:(id)arg1 ;
-(void)_receivedInstallNotificationWithApps:(id)arg1 placeholderInstallNotification:(BOOL)arg2 ;
-(void)_receivedUninstallNotificationWithApps:(id)arg1 placeholderUninstallNotification:(BOOL)arg2 ;
-(id)initWithAppInfoManager:(id)arg1 ;
-(void)train;
-(void)setUpdateCompletionBlock:(/*^block*/id)arg1 ;
@end
