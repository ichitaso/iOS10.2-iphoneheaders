/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCSolConfiguration : NSObject {

	BOOL _filterOverflowedOrphans;
	unsigned long long _maxArticleCombos;
	unsigned long long _heuristicSampleSize;
	unsigned long long _searchBranchMultiplier;
	double _searchBranchDecay;
	double _searchTimeLimit;
	double _tagSizeCoeff;
	double _tagPairsCoeff;
	double _tagFavoritedCoeff;
	double _moveNewOrphansCoeff;
	double _moveSizeCoeff;
	double _moveAboutnessNoiseStd;
	double _moveAboutnessWeightRatio;
	double _utilityWeightAlpha;
	double _utilityWeightBeta;
	long long _heuristicOption;

}

@property (nonatomic,readonly) unsigned long long maxArticleCombos;                    //@synthesize maxArticleCombos=_maxArticleCombos - In the implementation block
@property (nonatomic,readonly) unsigned long long heuristicSampleSize;                 //@synthesize heuristicSampleSize=_heuristicSampleSize - In the implementation block
@property (nonatomic,readonly) unsigned long long searchBranchMultiplier;              //@synthesize searchBranchMultiplier=_searchBranchMultiplier - In the implementation block
@property (nonatomic,readonly) double searchBranchDecay;                               //@synthesize searchBranchDecay=_searchBranchDecay - In the implementation block
@property (nonatomic,readonly) double searchTimeLimit;                                 //@synthesize searchTimeLimit=_searchTimeLimit - In the implementation block
@property (nonatomic,readonly) double tagSizeCoeff;                                    //@synthesize tagSizeCoeff=_tagSizeCoeff - In the implementation block
@property (nonatomic,readonly) double tagPairsCoeff;                                   //@synthesize tagPairsCoeff=_tagPairsCoeff - In the implementation block
@property (nonatomic,readonly) double tagFavoritedCoeff;                               //@synthesize tagFavoritedCoeff=_tagFavoritedCoeff - In the implementation block
@property (nonatomic,readonly) double moveNewOrphansCoeff;                             //@synthesize moveNewOrphansCoeff=_moveNewOrphansCoeff - In the implementation block
@property (nonatomic,readonly) double moveSizeCoeff;                                   //@synthesize moveSizeCoeff=_moveSizeCoeff - In the implementation block
@property (nonatomic,readonly) double moveAboutnessNoiseStd;                           //@synthesize moveAboutnessNoiseStd=_moveAboutnessNoiseStd - In the implementation block
@property (nonatomic,readonly) double moveAboutnessWeightRatio;                        //@synthesize moveAboutnessWeightRatio=_moveAboutnessWeightRatio - In the implementation block
@property (nonatomic,readonly) double utilityWeightAlpha;                              //@synthesize utilityWeightAlpha=_utilityWeightAlpha - In the implementation block
@property (nonatomic,readonly) double utilityWeightBeta;                               //@synthesize utilityWeightBeta=_utilityWeightBeta - In the implementation block
@property (nonatomic,readonly) BOOL filterOverflowedOrphans;                           //@synthesize filterOverflowedOrphans=_filterOverflowedOrphans - In the implementation block
@property (nonatomic,readonly) long long heuristicOption;                              //@synthesize heuristicOption=_heuristicOption - In the implementation block
+(id)configurationWithTreatment:(id)arg1 ;
-(id)initWithMaxArticleCombos:(unsigned long long)arg1 heuristicSampleSize:(unsigned long long)arg2 searchBranchMultiplier:(unsigned long long)arg3 searchBranchDecay:(double)arg4 searchTimeLimit:(double)arg5 tagSizeCoeff:(double)arg6 tagPairsCoeff:(double)arg7 tagFavoritedCoeff:(double)arg8 moveNewOrphansCoeff:(double)arg9 moveSizeCoeff:(double)arg10 moveAboutnessNoiseStd:(double)arg11 moveAboutnessWeightRatio:(double)arg12 utilityWeightAlpha:(double)arg13 utilityWeightBeta:(double)arg14 filterOverflowedOrphans:(BOOL)arg15 heuristicOption:(long long)arg16 ;
-(double)searchTimeLimit;
-(double)tagFavoritedCoeff;
-(double)utilityWeightAlpha;
-(double)utilityWeightBeta;
-(BOOL)filterOverflowedOrphans;
-(unsigned long long)maxArticleCombos;
-(unsigned long long)heuristicSampleSize;
-(unsigned long long)searchBranchMultiplier;
-(double)searchBranchDecay;
-(double)tagSizeCoeff;
-(double)tagPairsCoeff;
-(double)moveNewOrphansCoeff;
-(double)moveSizeCoeff;
-(double)moveAboutnessNoiseStd;
-(double)moveAboutnessWeightRatio;
-(long long)heuristicOption;
@end

