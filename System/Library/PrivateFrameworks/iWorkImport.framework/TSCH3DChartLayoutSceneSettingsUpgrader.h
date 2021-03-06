/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class TSCH3DChartLayout, NSValue;

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {

	TSCH3DChartLayout* mChartLayout;
	BOOL mIsMutatedForSceneSettings;
	NSValue* mInfoGeometryOffset;
	BOOL hasConstantDepth;

}

@property (assign,nonatomic) BOOL hasConstantDepth; 
-(id)sceneResetWithLayoutSettings:(SCD_Struct_TS478)arg1 ;
-(CGRect)oldResizingFrame;
-(id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(CGRect)arg2 ;
-(void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2 ;
-(SCD_Struct_TS478)oldLayoutSettings;
-(void)upgradeForSpice:(BOOL)arg1 naturalSize:(CGSize)arg2 ;
-(BOOL)hasConstantDepth;
-(void)updateInfoGeometryIfNecessary;
-(void)setHasConstantDepth:(BOOL)arg1 ;
-(void)dealloc;
@end

