/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSString, NSDate, NSArray;

@interface CLSPublicEvent : NSObject {

	NSString* _title;
	NSString* _description;
	NSString* _venue;
	NSDate* _startDate;
	NSDate* _endDate;
	unsigned long long _eventType;
	NSArray* _performers;
	double _distance;
	unsigned long long _popularity;
	CLLocationCoordinate2D _location;

}

@property (readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (readonly) NSString * description;                       //@synthesize description=_description - In the implementation block
@property (readonly) NSString * venue;                             //@synthesize venue=_venue - In the implementation block
@property (readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long eventType;                 //@synthesize eventType=_eventType - In the implementation block
@property (readonly) NSArray * performers;                         //@synthesize performers=_performers - In the implementation block
@property (readonly) CLLocationCoordinate2D location;              //@synthesize location=_location - In the implementation block
@property (readonly) double distance;                              //@synthesize distance=_distance - In the implementation block
@property (readonly) unsigned long long popularity;                //@synthesize popularity=_popularity - In the implementation block
+(id)publicEventWithDictionary:(id)arg1 withLocationContext:(CLLocationCoordinate2D)arg2 andEventType:(unsigned long long)arg3 ;
+(id)stringByEventType:(unsigned long long)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(double)distance;
-(CLLocationCoordinate2D)location;
-(unsigned long long)eventType;
-(unsigned long long)popularity;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)performers;
-(NSString *)venue;
-(id)initWithDictionary:(id)arg1 withLocationContext:(CLLocationCoordinate2D)arg2 andEventType:(unsigned long long)arg3 ;
@end
