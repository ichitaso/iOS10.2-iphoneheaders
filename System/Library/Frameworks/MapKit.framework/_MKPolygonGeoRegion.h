/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKGeoJSONCoverageRegion.h>

@class NSString;

@interface _MKPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion> {

	CLLocationCoordinate2D* _polygon;
	unsigned long long _vertexCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)coordinateLiesInRegion:(CLLocationCoordinate2D)arg1 ;
-(BOOL)_loadWithJSONObject:(id)arg1 error:(id*)arg2 ;
@end

