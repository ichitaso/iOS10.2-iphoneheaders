/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSSCustomPresetMigration.h>
#import <iWorkImport/TSPCopying.h>
#import <iWorkImport/TSSPreset.h>
#import <iWorkImport/TSCHStyleSwapSupporting.h>

@class NSString, NSUUID, TSCHChartStyle, TSCHLegendStyle, NSArray, TSCHReferenceLineStyle;

@interface TSCHChartStylePreset : TSPObject <TSSCustomPresetMigration, TSPCopying, TSSPreset, TSCHStyleSwapSupporting> {

	NSUUID* mUuid;
	TSCHChartStyle* mChartStyle;
	TSCHLegendStyle* mLegendStyle;
	NSArray* mValueAxisStylesList;
	NSArray* mCategoryAxisStylesList;
	NSArray* mSeriesStylesList;
	NSArray* mParagraphStylesList;
	TSCHReferenceLineStyle* mRefLineStyle;
	BOOL mHasUpgradedFromFinalizeHandler;

}

@property (nonatomic,readonly) TSCHChartStyle * chartStyle; 
@property (nonatomic,readonly) TSCHLegendStyle * legendStyle; 
@property (nonatomic,readonly) NSArray * valueAxisStyles; 
@property (nonatomic,readonly) NSArray * categoryAxisStyles; 
@property (nonatomic,readonly) NSArray * seriesStyles; 
@property (nonatomic,readonly) NSArray * paragraphStyles; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) TSCHReferenceLineStyle * refLineStyle; 
@property (nonatomic,readonly) NSString * presetKind; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)needsObjectUUID;
+(id)presetWithContext:(id)arg1 fromStyleState:(id)arg2 uuid:(id)arg3 ;
+(void)upgradeTrendLinesAndErrorBarsForSeriesPresets:(id)arg1 valueAxisPresets:(id)arg2 paragraphPresets:(id)arg3 ;
+(void)upgradeFor3DShadowPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2 ;
+(void)upgradeForTrendLineEquationAndR2LabelsPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2 ;
+(void)upgradeShadowPropertyForParagraphStyles:(id)arg1 ;
+(void)p_replaceProperty:(int)arg1 inStyle:(id)arg2 withObject:(id)arg3 ;
+(id)p_getDefaultErrorBarColor:(id)arg1 valueAxisStyles:(id)arg2 ;
+(id)p_getDefaultTrendLineShadowColor:(id)arg1 ;
+(id)p_getDefaultTrendLineStrokeColor:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)upgradePresetIfNecessaryFromFinalizeHandlerWithOptionalPreUFFVersion:(const unsigned long long*)arg1 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(NSString *)presetKind;
-(id)presetByAdoptingStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)chartStyleState;
-(TSCHChartStyle *)chartStyle;
-(TSCHLegendStyle *)legendStyle;
-(NSArray *)valueAxisStyles;
-(NSArray *)categoryAxisStyles;
-(NSArray *)paragraphStyles;
-(id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7 refLineStyle:(id)arg8 uuid:(id)arg9 ;
-(id)allStyles;
-(id)applyStyleSwapTuple:(id)arg1 ;
-(id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2 ;
-(id)buildChartNonStyle;
-(id)buildLegendNonStyle;
-(NSArray *)seriesStyles;
-(TSCHReferenceLineStyle *)refLineStyle;
-(id)buildAxisNonStyle;
-(id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7 refLineStyle:(id)arg8 ;
-(id)p_initWithContext:(id)arg1 ;
-(BOOL)isEquivalentToPreset:(id)arg1 outReasons:(id*)arg2 ;
-(id)migratedPresetInTheme:(id)arg1 followReplacements:(BOOL)arg2 ;
-(id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 ;
-(BOOL)isEquivalentToPreset:(id)arg1 ;
-(id)swatchImage;
-(id)buildSeriesNonStyle;
-(void)dealloc;
-(NSString *)description;
-(id)initWithContext:(id)arg1 ;
-(NSUUID *)uuid;
-(id)stylesheet;
@end

