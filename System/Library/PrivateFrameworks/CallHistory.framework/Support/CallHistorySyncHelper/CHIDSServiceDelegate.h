/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>
#import <CallHistorySyncHelper/CHPairedSyncProtocol.h>
#import <CallHistorySyncHelper/IDSServiceDelegate.h>

@class IDSService, NSMutableDictionary, CallHistoryDBClientHandle, CHPairedSyncCoordinator, NSString, NSArray;

@interface CHIDSServiceDelegate : CHSynchronizedLoggable <CHPairedSyncProtocol, IDSServiceDelegate> {

	IDSService* _service;
	NSMutableDictionary* _peerDevices;
	int _configuration;
	CallHistoryDBClientHandle* _database;
	CHPairedSyncCoordinator* _coordinator;
	NSString* _persistedDeviceListKey;
	NSArray* _bootstrappedDeviceUuids;

}

@property (retain) NSString * persistedDeviceListKey;               //@synthesize persistedDeviceListKey=_persistedDeviceListKey - In the implementation block
@property (retain) NSArray * bootstrappedDeviceUuids;               //@synthesize bootstrappedDeviceUuids=_bootstrappedDeviceUuids - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startInitialSync;
-(void)startReunionSync;
-(void)setPersistedDeviceListKey:(NSString *)arg1 ;
-(void)setupBootstrappedDevices;
-(void)checkForBootstrapDeviceChanges;
-(NSString *)persistedDeviceListKey;
-(void)setBootstrappedDeviceUuids:(NSArray *)arg1 ;
-(NSArray *)bootstrappedDeviceUuids;
-(void)rememberBootstrappedDevices:(id)arg1 ;
-(void)handleMessage:(id)arg1 fromID:(id)arg2 ;
-(void)handleTransactionData:(id)arg1 withConfigurationData:(id)arg2 ;
-(void)devicesChanged:(id)arg1 shouldRemoveUnregisteredDevices:(BOOL)arg2 ;
-(void)dealloc;
-(void)update:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
-(id)initWithDatabase:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
@end
