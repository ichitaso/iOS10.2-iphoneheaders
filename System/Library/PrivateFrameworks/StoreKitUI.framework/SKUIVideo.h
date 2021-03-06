/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIArtworkProviding;
@class NSURL;

@interface SKUIVideo : NSObject {

	id<SKUIArtworkProviding> _artworks;
	NSURL* _url;

}

@property (nonatomic,readonly) id<SKUIArtworkProviding> artworks;              //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                    //@synthesize url=_url - In the implementation block
-(NSURL *)URL;
-(id<SKUIArtworkProviding>)artworks;
-(id)initWithVideoDictionary:(id)arg1 ;
@end

