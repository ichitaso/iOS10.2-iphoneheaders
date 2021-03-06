/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePrediction/CPMLStorageManager.h>

@interface CPMLNaiveBayesStorageManager : CPMLStorageManager
-(double)getCountAndSetYCardinality:(double*)arg1 ;
-(double)getCountY:(unsigned long long)arg1 ;
-(double)getCountXGivenYAndSetXCardinality:(unsigned long long)arg1 withX:(unsigned long long)arg2 withY:(unsigned long long)arg3 withCardinalityX:(double*)arg4 ;
-(void)setCountY:(double)arg1 ;
-(void)setCountY:(unsigned long long)arg1 withCount:(double)arg2 ;
-(void)setCountXGivenY:(unsigned long long)arg1 withX:(unsigned long long)arg2 withY:(unsigned long long)arg3 withValue:(double)arg4 ;
-(void)setCardinalityXGivenY:(unsigned long long)arg1 withY:(unsigned long long)arg2 cardinalityValue:(double)arg3 ;
@end

