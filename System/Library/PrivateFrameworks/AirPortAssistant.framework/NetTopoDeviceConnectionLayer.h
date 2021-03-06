/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/NetTopoObjectLayer.h>

@class CAShapeLayer;

@interface NetTopoDeviceConnectionLayer : NetTopoObjectLayer {

	CAShapeLayer* _connectionLineLayer;
	CGPathRef _hitTestPath;
	CGColorRef _lineColorActive;
	CGColorRef _lineColorInactive;
	CGColorRef _lineColorEthernet;
	CGColorRef _lineColorWiFi;
	CGColorRef _selectedLineColor;
	CGColorRef _clearColor;
	CGColorRef _whiteColor;
	unsigned long long _upstreamDeviceSpatialRelationship;
	unsigned long long _connectionStyle;
	CGPoint _upstreamConnectionPoint;
	CGPoint _downstreamConnectionPoint;
	unsigned long long _upstreamConnectionSide;
	CGPoint _siblingMergePoint;
	unsigned long long _connectionMediumFallback;
	CGPathRef _arrowhead;

}

@property (assign,nonatomic) unsigned long long upstreamDeviceSpatialRelationship;              //@synthesize upstreamDeviceSpatialRelationship=_upstreamDeviceSpatialRelationship - In the implementation block
@property (assign,nonatomic) unsigned long long connectionStyle;                                //@synthesize connectionStyle=_connectionStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionMedium; 
@property (assign,nonatomic) unsigned long long connectionMediumFallback;                       //@synthesize connectionMediumFallback=_connectionMediumFallback - In the implementation block
@property (assign,nonatomic) CGPoint upstreamConnectionPoint; 
@property (assign,nonatomic) CGPoint downstreamConnectionPoint; 
@property (assign,nonatomic) unsigned long long upstreamConnectionSide;                         //@synthesize upstreamConnectionSide=_upstreamConnectionSide - In the implementation block
@property (assign,nonatomic) CGPoint siblingMergePoint; 
@property (nonatomic,readonly) CGPathRef hitTestPath;                                           //@synthesize hitTestPath=_hitTestPath - In the implementation block
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)debugDescription;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSublayers;
-(id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned long long)arg3 ;
-(id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2 ;
-(CGRect)getUserInteractionBounds;
-(void)setUpstreamDeviceSpatialRelationship:(unsigned long long)arg1 ;
-(void)setUpstreamConnectionPoint:(CGPoint)arg1 ;
-(void)setUpstreamConnectionSide:(unsigned long long)arg1 ;
-(void)setDownstreamConnectionPoint:(CGPoint)arg1 ;
-(void)setConnectionMediumFallback:(unsigned long long)arg1 ;
-(void)setConnectionStyle:(unsigned long long)arg1 ;
-(void)initNetTopoDeviceConnectionLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2 ;
-(unsigned long long)upstreamDeviceSpatialRelationship;
-(unsigned long long)connectionMedium;
-(unsigned long long)upstreamConnectionSide;
-(void)addBottomWindingConnectionToPath:(CGPathRef)arg1 withOffset:(double)arg2 ;
-(unsigned long long)connectionStyle;
-(void)addSideWindingConnectionToPath:(CGPathRef)arg1 withOffset:(double)arg2 ;
-(void)addCurvedArrowConnectionToPath:(CGPathRef)arg1 withOffset:(double)arg2 ;
-(CGPathRef)newConnectionPathWithOffset:(double)arg1 ;
-(CGPoint)downstreamConnectionPoint;
-(CGPoint)upstreamConnectionPoint;
-(CGPoint)siblingMergePoint;
-(void)setSiblingMergePoint:(CGPoint)arg1 ;
-(unsigned long long)connectionMediumFallback;
-(CGPathRef)hitTestPath;
@end

