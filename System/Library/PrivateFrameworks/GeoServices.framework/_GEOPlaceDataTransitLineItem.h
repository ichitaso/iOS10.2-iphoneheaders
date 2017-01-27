/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitLineItem.h>

@protocol GEOTransitAttribution, GEOTransitLine, GEOMapItemTransitInfo, GEOEncyclopedicInfo;
@class NSArray, GEOMapRegion, NSString;

@interface _GEOPlaceDataTransitLineItem : NSObject <GEOTransitLineItem> {

	id<GEOTransitAttribution> _attribution;
	id<GEOTransitLine> _line;
	id<GEOMapItemTransitInfo> _transitInfo;
	GEOMapRegion* _mapRegion;
	BOOL _hasEncyclopedicInfo;
	id<GEOEncyclopedicInfo> _encyclopedicInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned long long departureTimeDisplayStyle; 
@property (nonatomic,readonly) BOOL departuresAreVehicleSpecific; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) BOOL hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) BOOL showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitAttribution> attribution; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) BOOL isIncidentsTTLExpired; 
@property (nonatomic,readonly) BOOL hasIncidentComponent; 
@property (nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
-(void)dealloc;
-(NSString *)name;
-(id<GEOTransitSystem>)system;
-(GEOMapRegion *)mapRegion;
-(unsigned long long)muid;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(NSArray *)labelItems;
-(NSArray *)incidents;
-(id<GEOTransitAttribution>)attribution;
-(BOOL)showVehicleNumber;
-(unsigned long long)departureTimeDisplayStyle;
-(BOOL)departuresAreVehicleSpecific;
-(BOOL)hasLineColorString;
-(NSString *)lineColorString;
-(id)initWithMapItem:(id)arg1 ;
-(BOOL)isIncidentsTTLExpired;
-(BOOL)hasIncidentComponent;
-(BOOL)hasEncyclopedicInfo;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
@end
