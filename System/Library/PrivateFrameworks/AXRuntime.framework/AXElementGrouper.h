/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXRuntime/AXRuntime-Structs.h>
@interface AXElementGrouper : NSObject {

	double _thresholdForDeterminingEqualSize;
	long long _heuristics;

}

@property (assign,nonatomic) long long heuristics;                                   //@synthesize heuristics=_heuristics - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumGroupSize; 
@property (nonatomic,readonly) unsigned long long maximumGroupSize; 
@property (nonatomic,readonly) unsigned long long preferredGroupSize; 
@property (nonatomic,readonly) double thresholdForDeterminingEqualSize;              //@synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize - In the implementation block
-(void)setHeuristics:(long long)arg1 ;
-(long long)heuristics;
-(id)init;
-(id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned long long*)arg2 ;
-(id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(BOOL)arg2 ;
-(id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(BOOL)arg2 ;
-(unsigned long long)minimumGroupSize;
-(double)thresholdForDeterminingEqualSize;
-(unsigned long long)maximumGroupSize;
-(unsigned long long)preferredGroupSize;
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithHeuristics:(long long)arg1 ;
-(id)groupElementsInRootGroup:(id)arg1 ;
-(BOOL)_frame:(CGRect)arg1 isApproximatelySameSizeAsFrame:(CGRect)arg2 ;
@end

