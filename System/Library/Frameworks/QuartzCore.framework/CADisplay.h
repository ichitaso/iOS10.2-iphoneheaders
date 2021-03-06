/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray, CADisplayMode, NSString;

@interface CADisplay : NSObject {

	void* _impl;
	BOOL _allowsVirtualModes;

}

@property (nonatomic,readonly) NSArray * availableModes; 
@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,readonly) CADisplayMode * preferredMode; 
@property (nonatomic,copy) NSString * colorMode; 
@property (assign) BOOL allowsVirtualModes;                                        //@synthesize allowsVirtualModes=_allowsVirtualModes - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect safeBounds; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (readonly) unsigned displayId; 
@property (readonly) unsigned seed; 
@property (readonly) unsigned connectionSeed; 
@property (readonly) NSString * uniqueId; 
@property (getter=isSupported,readonly) BOOL supported; 
@property (readonly) long long tag; 
@property (readonly) int processId; 
@property (getter=isExternal,readonly) BOOL external; 
@property (readonly) double refreshRate; 
@property (readonly) double minimumRefreshRate; 
@property (readonly) double maximumRefreshRate; 
@property (readonly) double heartbeatRate; 
@property (readonly) long long minimumFrameDuration; 
@property (getter=isOverscanned,readonly) BOOL overscanned; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (readonly) double overscanAmount; 
@property (readonly) CGSize overscanAmounts; 
@property (getter=isCloned,readonly) BOOL cloned; 
@property (getter=isCloningSupported,readonly) BOOL cloningSupported; 
@property (readonly) BOOL supportsExtendedColors; 
+(id)mainDisplay;
+(id)displays;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)TVOutDisplay;
-(id)_initWithDisplay:(Display*)arg1 ;
-(unsigned)connectionSeed;
-(NSString *)colorMode;
-(void)setColorMode:(NSString *)arg1 ;
-(CGRect)safeBounds;
-(double)minimumRefreshRate;
-(double)maximumRefreshRate;
-(double)heartbeatRate;
-(double)overscanAmount;
-(BOOL)isCloned;
-(BOOL)supportsExtendedColors;
-(BOOL)allowsVirtualModes;
-(void)setAllowsVirtualModes:(BOOL)arg1 ;
-(CGRect)bounds;
-(CGRect)frame;
-(id)description;
-(NSString *)name;
-(unsigned)displayId;
-(long long)tag;
-(CADisplayMode *)currentMode;
-(void)update;
-(NSArray *)availableModes;
-(BOOL)isOverscanned;
-(NSString *)overscanAdjustment;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(double)refreshRate;
-(BOOL)isCloningSupported;
-(CADisplayMode *)preferredMode;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(CGSize)overscanAmounts;
-(unsigned)seed;
-(BOOL)isExternal;
-(NSString *)uniqueId;
-(void)_invalidate;
-(long long)minimumFrameDuration;
-(BOOL)isSupported;
-(NSString *)deviceName;
-(int)processId;
@end

