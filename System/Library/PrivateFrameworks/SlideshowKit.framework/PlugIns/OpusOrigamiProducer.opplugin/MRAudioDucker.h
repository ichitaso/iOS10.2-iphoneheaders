/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRAudioDucker.h>

@class NSString;

@interface MRAudioDucker : NSObject <MRAudioDucker> {

	double _duration;
	double _duckInDuration;
	double _duckOutDuration;
	double _duckLevel;
	double _time;
	double _parentDuration;
	long long _priority;
	double _duckInTime;
	double _duckOutTime;

}

@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double time;                           //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double duckInTime;                     //@synthesize duckInTime=_duckInTime - In the implementation block
@property (assign,nonatomic) double duckOutTime;                    //@synthesize duckOutTime=_duckOutTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duckLevel;                      //@synthesize duckLevel=_duckLevel - In the implementation block
@property (assign,nonatomic) double duckInDuration;                 //@synthesize duckInDuration=_duckInDuration - In the implementation block
@property (assign,nonatomic) double duckOutDuration;                //@synthesize duckOutDuration=_duckOutDuration - In the implementation block
@property (assign,nonatomic) double parentDuration;                 //@synthesize parentDuration=_parentDuration - In the implementation block
@property (assign,nonatomic) long long priority;                    //@synthesize priority=_priority - In the implementation block
@property (readonly) double currentDuckLevel; 
-(double)currentDuckLevel;
-(double)duckOutDuration;
-(double)duckInDuration;
-(void)setDuckOutTime:(double)arg1 ;
-(void)setDuckInTime:(double)arg1 ;
-(void)setDuckLevel:(double)arg1 ;
-(double)duckInTime;
-(double)duckLevel;
-(void)setDuckInDuration:(double)arg1 ;
-(void)setDuckOutDuration:(double)arg1 ;
-(void)setParentDuration:(double)arg1 ;
-(double)duckOutTime;
-(double)parentDuration;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(double)time;
-(void)setTime:(double)arg1 ;
@end

