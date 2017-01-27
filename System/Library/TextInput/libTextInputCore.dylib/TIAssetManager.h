/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, TIMobileAssetMediator, NSMutableDictionary, TIMobileAssetTimer;

@interface TIAssetManager : NSObject {

	NSMutableArray* _notificationTokens;
	BOOL _assetDownloadingEnabled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TIMobileAssetMediator* _mobileAssetMediator;
	NSMutableDictionary* _assetsByInputMode;
	NSMutableDictionary* _assetsByInputModeLevel;
	TIMobileAssetTimer* _timer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) TIMobileAssetMediator * mobileAssetMediator;               //@synthesize mobileAssetMediator=_mobileAssetMediator - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * assetsByInputMode;                   //@synthesize assetsByInputMode=_assetsByInputMode - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * assetsByInputModeLevel;              //@synthesize assetsByInputModeLevel=_assetsByInputModeLevel - In the implementation block
@property (nonatomic,retain) TIMobileAssetTimer * timer;                                  //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) BOOL assetDownloadingEnabled;                              //@synthesize assetDownloadingEnabled=_assetDownloadingEnabled - In the implementation block
+(id)sharedAssetManager;
-(id)init;
-(void)dealloc;
-(id)recursiveDescription;
-(id)enabledInputModes;
-(TIMobileAssetTimer *)timer;
-(void)setTimer:(TIMobileAssetTimer *)arg1 ;
-(id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 ;
-(void)appleKeyboardsInternalSettingsChanged:(id)arg1 ;
-(void)appleKeyboardsPreferencesChanged:(id)arg1 ;
-(void)newAssetInstalled:(id)arg1 ;
-(void)didUpdateAssets;
-(id)levelsForInputMode:(id)arg1 ;
-(id)defaultEnabledInputModes;
-(id)activeInputModeLevels;
-(void)updateAssetDownloadingEnabled;
-(void)updateInstalledAssets;
-(void)startDownloadingUninstalledAssetsForInputModeLevels:(id)arg1 ;
-(void)scheduleNextDownload;
-(void)gatherStatistics:(id)arg1 ;
-(void)submitStatistics:(id)arg1 ;
-(id)updateInputModesAndGetNewLevels;
-(id)purgeableAssets;
-(BOOL)purgeAsset:(id)arg1 ;
-(void)registerCacheDeleteCallbacks;
-(long long)amountOfPurgeableAssetsWithUrgency:(int)arg1 ;
-(long long)tryToPurgeAssetAmount:(long long)arg1 urgency:(int)arg2 ;
-(TIMobileAssetMediator *)mobileAssetMediator;
-(NSMutableDictionary *)assetsByInputMode;
-(NSMutableDictionary *)assetsByInputModeLevel;
-(BOOL)assetDownloadingEnabled;
-(void)performMaintenance;
-(void)addAssets:(id)arg1 ;
-(void)unregisterForNotifications;
-(void)registerForNotifications;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end
