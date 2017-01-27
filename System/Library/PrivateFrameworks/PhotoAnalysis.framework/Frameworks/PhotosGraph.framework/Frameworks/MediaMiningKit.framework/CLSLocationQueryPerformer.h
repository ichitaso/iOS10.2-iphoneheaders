/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSQueryPerformerProtocol.h>

@protocol GEOMapServiceTicket;
@class NSArray, NSString;

@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol> {

	id<GEOMapServiceTicket> _ticket;
	NSArray* _geoLocations;
	NSArray* _regions;
	BOOL _isCancelled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isCancelled;                              //@synthesize isCancelled=_isCancelled - In the implementation block
+(id)queryForRegions:(id)arg1 ;
+(BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2 ;
+(unsigned long long)numberOfRegionsPerBatch;
-(void)cancel;
-(BOOL)isCancelled;
-(id)regions;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(void)cacheItems:(id)arg1 ;
-(id)initWithRegions:(id)arg1 ;
@end
