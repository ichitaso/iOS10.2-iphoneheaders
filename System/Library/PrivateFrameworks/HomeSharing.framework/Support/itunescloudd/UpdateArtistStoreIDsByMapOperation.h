/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/QueueAwareOperation.h>

@class NSNumber, NSURL;

@interface UpdateArtistStoreIDsByMapOperation : QueueAwareOperation {

	NSNumber* _updateIntervalSeconds;
	NSURL* _allArtistImagesMapURL;
	NSURL* _artistNameLibraryMatchURL;

}

@property (nonatomic,retain) NSNumber * updateIntervalSeconds;               //@synthesize updateIntervalSeconds=_updateIntervalSeconds - In the implementation block
@property (nonatomic,retain) NSURL * allArtistImagesMapURL;                  //@synthesize allArtistImagesMapURL=_allArtistImagesMapURL - In the implementation block
@property (nonatomic,retain) NSURL * artistNameLibraryMatchURL;              //@synthesize artistNameLibraryMatchURL=_artistNameLibraryMatchURL - In the implementation block
-(void)setUpdateIntervalSeconds:(NSNumber *)arg1 ;
-(void)setAllArtistImagesMapURL:(NSURL *)arg1 ;
-(void)setArtistNameLibraryMatchURL:(NSURL *)arg1 ;
-(id)_latestAllArtistImagesMap;
-(void)_updateSpecificArtistStoreIDsUsingAllArtistImagesMap:(id)arg1 ;
-(void)_updateAllArtistStoreIDsUsingAllArtistImagesMap:(id)arg1 ;
-(NSURL *)artistNameLibraryMatchURL;
-(id)_fetchAndCacheLatestAllArtistImagesMap;
-(NSURL *)allArtistImagesMapURL;
-(NSNumber *)updateIntervalSeconds;
-(void)main;
@end

