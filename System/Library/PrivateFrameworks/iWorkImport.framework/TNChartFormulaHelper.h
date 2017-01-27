/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TNChartMediator;

@interface TNChartFormulaHelper : NSObject {

	TNChartMediator* mChartMediator;
	BOOL mCreateSpanningReferences;

}

@property (assign,nonatomic) BOOL createSpanningReferences; 
@property (nonatomic,readonly) TNChartMediator * chartMediator; 
-(id)initWithMediator:(id)arg1 createSpanningReferences:(BOOL)arg2 ;
-(TNChartMediator *)chartMediator;
-(id)p_rangeListsForFormulas:(id)arg1 byRow:(BOOL)arg2 resolveSpanning:(BOOL)arg3 ;
-(void)p_addSeriesForRangeList:(id)arg1 rowLabelRangeList:(id)arg2 columnLabelRangeList:(id)arg3 rowLabels:(id)arg4 columnLabels:(id)arg5 toFormulaMap:(id)arg6 ;
-(void)p_rangeListsForFormula:(id)arg1 argumentIndexes:(id)arg2 byRow:(BOOL)arg3 resolveSpanning:(BOOL)arg4 orderedListOfOwnerIDs:(id)arg5 ownerIDToRangeList:(id)arg6 ;
-(BOOL)p_hasOneValuePerSeries;
-(id)p_labelsOfType:(unsigned long long)arg1 formulaMap:(id)arg2 ;
-(void)p_addFormulasOfType:(unsigned long long)arg1 rangeList:(id)arg2 byRow:(BOOL)arg3 toFormulaMap:(id)arg4 ;
-(void)p_addStringFormulasOfType:(unsigned long long)arg1 rangeList:(id)arg2 byRow:(BOOL)arg3 labels:(id)arg4 toFormulaMap:(id)arg5 ;
-(id)chartFormulaByAppendingRangeReference:(SCD_Struct_TS360*)arg1 toFormula:(id)arg2 andLocale:(id)arg3 ;
-(id)initWithMediator:(id)arg1 ;
-(id)formulaStorageForChartGridDirection:(int)arg1 ;
-(id)p_rangeListsForFormula:(id)arg1 argumentIndexes:(id)arg2 byRow:(BOOL)arg3 resolveSpanning:(BOOL)arg4 ;
-(void)p_addSeriesForRangeList:(id)arg1 rowLabelRangeList:(id)arg2 columnLabelRangeList:(id)arg3 toFormulaMap:(id)arg4 ;
-(void)p_addSeriesForTableModel:(id)arg1 seriesRange:(TSCERangeCoordinate)arg2 rowLabelRange:(TSCERangeCoordinate)arg3 columnLabelRange:(TSCERangeCoordinate)arg4 toFormulaMap:(id)arg5 ;
-(BOOL)p_extendExistingSeriesWithSeriesRangeList:(id*)arg1 rowLabelRangeList:(id*)arg2 columnLabelRangeList:(id*)arg3 toFormulaMap:(id)arg4 withLocale:(id)arg5 ;
-(BOOL)createSpanningReferences;
-(void)setCreateSpanningReferences:(BOOL)arg1 ;
-(void)dealloc;
@end
