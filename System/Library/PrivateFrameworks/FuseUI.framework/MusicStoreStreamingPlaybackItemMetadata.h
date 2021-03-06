/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryPlaybackItemMetadata.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MusicStoreItemMetadataContext, MPStoreItemMetadata;

@interface MusicStoreStreamingPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasLoadedMediaItem;
	BOOL _isLoadingMediaItem;
	NSMutableArray* _mediaItemLoadCompletionHandlers;
	MusicStoreItemMetadataContext* _storeItemMetadataContext;
	MPStoreItemMetadata* _storeItemMetadata;

}

@property (nonatomic,retain) MusicStoreItemMetadataContext * storeItemMetadataContext; 
+(BOOL)_shouldRespectMusicCellularDataSetting;
+(BOOL)_shouldRespectStoreCellularDataSetting;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyrightText;
-(long long)storeSubscriptionAdamID;
-(id)composerName;
-(BOOL)showComposer;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(BOOL)shouldReportPlayEventsToStore;
-(long long)storeAdamID;
-(long long)endpointType;
-(void)loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)albumArtistName;
-(long long)albumStoreAdamID;
-(long long)artistStoreAdamID;
-(id)contentTitle;
-(double)expectedDuration;
-(BOOL)allowsAssetCaching;
-(id)artistName;
-(id)albumTitle;
-(unsigned long long)contentType;
-(void)_registerForNotificationsForStoreItemMetadataContext:(id)arg1 ;
-(void)_unregisterForNotificationsForStoreItemMetadataContext:(id)arg1 ;
-(MusicStoreItemMetadataContext *)storeItemMetadataContext;
-(id)_storeItemMetadata;
-(void)_storeItemMetadataContextRepresentativeMediaEntityDidChangeNotification:(id)arg1 ;
-(id)initWithStoreItemMetadataContext:(id)arg1 ;
-(void)setStoreItemMetadataContext:(MusicStoreItemMetadataContext *)arg1 ;
@end

