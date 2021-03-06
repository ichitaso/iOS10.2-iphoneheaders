/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <itunescloudd/CloudPushNotificationControllerDelegate.h>
#import <libobjc.A.dylib/SSAuthenticateRequestDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSXPCListener, CloudPushNotificationController, NSObject, NSOperationQueue, NSString;

@interface CloudServer : NSObject <NSXPCListenerDelegate, CloudPushNotificationControllerDelegate, SSAuthenticateRequestDelegate> {

	NSXPCListener* _xpcListener;
	CloudPushNotificationController* _pushNotificationController;
	BOOL _networkActivityIndicatorVisible;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_source> _siginfoDispatchSource;
	BOOL _ignoreAccountChanges;
	unsigned long long _daemonConfiguration;
	long long _preferredVideoQuality;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _backgroundOperationQueue;

}

@property (assign,nonatomic) unsigned long long daemonConfiguration;                     //@synthesize daemonConfiguration=_daemonConfiguration - In the implementation block
@property (assign,nonatomic) BOOL ignoreAccountChanges;                                  //@synthesize ignoreAccountChanges=_ignoreAccountChanges - In the implementation block
@property (assign,nonatomic) long long preferredVideoQuality;                            //@synthesize preferredVideoQuality=_preferredVideoQuality - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * backgroundOperationQueue;              //@synthesize backgroundOperationQueue=_backgroundOperationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(void)setIgnoreAccountChanges:(BOOL)arg1 ;
-(void)addOperation:(id)arg1 priority:(int)arg2 ;
-(void)addBackgroundOperation:(id)arg1 priority:(int)arg2 ;
-(void)enumerateBackgroundOperationsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)daemonConfiguration;
-(BOOL)cancelOperationsByClass:(Class)arg1 ;
-(void)logPowerEvent:(id)arg1 payload:(id)arg2 ;
-(void)pushNotificationController:(id)arg1 didReceivePushForService:(int)arg2 userInfo:(id)arg3 ;
-(void)_initSerialQueues;
-(void)_setupPushNotificationController;
-(void)_didReceiveDistributedNotification:(id)arg1 withStreamEvent:(id)arg2 ;
-(BOOL)_migrateToLatestUserVersion;
-(void)_removePlayDataFiles;
-(BOOL)_synchronousRemoveTrackSource:(int)arg1 fromMediaLibrary:(id)arg2 ;
-(BOOL)_validateAndRepairPurchases;
-(BOOL)_migrateFromUserVersion0to348294:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion348294to348295:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion348295to366559:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion366559to370000:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion370000to370100:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion370100to370200:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion370200to370300:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion370300to370400:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion370400to380000:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion380000to380010:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion380010to380020:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion380020to380030:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion380030to380040:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion380040to380050:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion380050to380060:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion380060to380070:(long long*)arg1 ;
-(BOOL)_migrateFromUserVersion380070to380080:(long long*)arg1 ;
-(void)_postMigrationSanityCheck;
-(void)_handleFamilyContentDeletionEvent:(id)arg1 ;
-(void)_handleAccountsDidChangeNotification;
-(void)_handleLibraryImportDidFinishNotification;
-(void)_handleCellularDataRestrictionDidChangeNotification;
-(void)_handleBuddySetupDoneNotification;
-(BOOL)hasOperationsOfClass:(Class)arg1 ;
-(BOOL)ignoreAccountChanges;
-(NSOperationQueue *)backgroundOperationQueue;
-(void)dealloc;
-(id)_init;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)operationQueue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(long long)preferredVideoQuality;
-(void)setPreferredVideoQuality:(long long)arg1 ;
-(void)setDaemonConfiguration:(unsigned long long)arg1 ;
-(void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1 ;
-(void)canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)isCellularDataRestrictedDidChangeNotification:(id)arg1 ;
-(void)enumerateOperationsUsingBlock:(/*^block*/id)arg1 ;
-(void)_didReceiveDarwinNotification:(id)arg1 ;
@end

