/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPFilterSupport.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>
#import <OpusOrigamiProducer/MPAudioSupport.h>
#import <OpusOrigamiProducer/MPActionableSupport.h>
#import <OpusOrigamiProducer/MPGeometrySupport.h>
#import <OpusOrigamiProducer/MPEffectSupport.h>

@protocol MZEffectTiming;
@class NSString, NSArray, NSMutableArray, NSMutableDictionary, MCContainerEffect, MCPlugParallel, MPAudioPlaylist, MPEffectContainer, NSObject;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport> {

	NSMutableArray* _slides;
	NSMutableArray* _secondarySlides;
	NSMutableArray* _texts;
	NSMutableArray* _filters;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _animationPaths;
	MCContainerEffect* _container;
	MCPlugParallel* _plug;
	MPAudioPlaylist* _audioPlaylist;
	MPEffectContainer* _parentContainer;
	BOOL _replaceSlides;
	BOOL _supportsEffectTiming;
	BOOL _skipEffectTiming;
	NSObject*<MZEffectTiming> _effectTiming;
	double _opacity;
	CGPoint _position;
	double _zPosition;
	CGSize _size;
	double _rotationAngle;
	double _xRotationAngle;
	double _yRotationAngle;
	double _scale;
	double _timeIn;
	double _phaseInDuration;
	double _phaseOutDuration;
	double _mainDuration;
	NSString* _effectID;
	NSString* _presetID;
	long long _audioPriority;
	long long _randomSeed;
	NSString* _uuid;
	long long _liveIndex;
	BOOL _cleaningUp;

}

@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (assign,nonatomic) double mainDuration; 
@property (assign,nonatomic) BOOL replaceSlides; 
@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming;              //@synthesize effectTiming=_effectTiming - In the implementation block
+(id)effectWithEffectID:(id)arg1 andPaths:(id)arg2 ;
+(id)effectWithEffectID:(id)arg1 ;
+(id)effectWithEffectID:(id)arg1 andStrings:(id)arg2 ;
+(id)effectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setSkipEffectTiming:(BOOL)arg1 ;
-(void)createTextsWithDefaultStrings;
-(void)createSecondarySlidesWithPaths:(id)arg1 ;
-(id)effectAttributeForKey:(id)arg1 ;
-(BOOL)hasPanoramasInDocument:(id)arg1 ;
-(BOOL)supportsEffectTiming;
-(void)replaceTextsWitStrings:(id)arg1 ;
-(void)insertTexts:(id)arg1 atIndex:(long long)arg2 ;
-(id)_effectAttributes;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(void)_updateTiming:(BOOL)arg1 forExport:(BOOL)arg2 ;
-(id)nearestLayerGroup;
-(id)formattedAttributes;
-(BOOL)needsParallelizer;
-(void)setEffectAttributes:(id)arg1 ;
-(id)slideInformationWithDocument:(id)arg1 ;
-(void)addSecondarySlides:(id)arg1 ;
-(void)removeAllSecondarySlides;
-(id)initWithEffectID:(id)arg1 andStrings:(id)arg2 ;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(long long)maxNumberOfSlides;
-(void)setXRotationAngle:(double)arg1 ;
-(id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(double)lowestDisplayTime;
-(void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSlides:(id)arg1 atIndex:(long long)arg2 ;
-(void)createSlidesWithPaths:(id)arg1 ;
-(void)applyFormattedAttributes;
-(void)removeSecondarySlidesAtIndices:(id)arg1 ;
-(void)setMainDuration:(double)arg1 ;
-(void)copySecondarySlides:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 andPaths:(id)arg2 ;
-(void)reconfigureSlides;
-(void)removeTextsAtIndices:(id)arg1 ;
-(void)replaceSlideAtIndex:(long long)arg1 withSlide:(id)arg2 ;
-(void)copyAnimationPaths:(id)arg1 ;
-(long long)countOfFilters;
-(id)effectPresetID;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)setLiveIndex:(long long)arg1 ;
-(id)nearestPlug;
-(long long)audioPriority;
-(void)copySlides:(id)arg1 ;
-(void)removeAllTexts;
-(NSObject*<MZEffectTiming>)effectTiming;
-(void)copyTexts:(id)arg1 ;
-(id)secondarySlides;
-(void)setEffectID:(NSString *)arg1 ;
-(long long)liveIndex;
-(void)addTexts:(id)arg1 ;
-(id)videoPaths;
-(void)setPlug:(id)arg1 ;
-(long long)countOfSlides;
-(double)xPosition;
-(void)copyFilters:(id)arg1 ;
-(double)yPosition;
-(NSArray *)slides;
-(void)setFullDuration:(double)arg1 ;
-(double)xRotationAngle;
-(id)animationPathForKey:(id)arg1 ;
-(void)removeAllSlides;
-(double)mainDuration;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseInDuration;
-(double)fullDuration;
-(id)animationPaths;
-(id)plug;
-(void)setYRotationAngle:(double)arg1 ;
-(id)plugID;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 ;
-(void)_updateEffectTimingWithDocument:(id)arg1 ;
-(void)_updateEffectTimingWithDocument:(id)arg1 forExport:(BOOL)arg2 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 fillIn:(BOOL)arg3 ;
-(id)effectAttributes;
-(double)yRotationAngle;
-(double)phaseOutDuration;
-(id)objectInSlidesAtIndex:(long long)arg1 ;
-(void)setReplaceSlides:(BOOL)arg1 ;
-(void)setPresetID:(NSString *)arg1 ;
-(id)slideForMCSlide:(id)arg1 ;
-(void)scaleMainDuration;
-(void)_updateTiming:(BOOL)arg1 ;
-(void)addSlides:(id)arg1 ;
-(id)fullDebugLog;
-(NSArray *)texts;
-(NSString *)presetID;
-(long long)countOfTexts;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)copyVars:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setAudioPriority:(long long)arg1 ;
-(void)removeAllFilters;
-(void)updateTimingForExport;
-(id)objectInFiltersAtIndex:(long long)arg1 ;
-(BOOL)supportsUnlimitedSlides;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)addSecondarySlide:(id)arg1 ;
-(void)removeObjectFromFiltersAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inTextsAtIndex:(long long)arg2 ;
-(void)removeObjectFromTextsAtIndex:(long long)arg1 ;
-(void)removeObjectFromSlidesAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inFiltersAtIndex:(long long)arg2 ;
-(void)replaceSlide:(id)arg1 atIndex:(long long)arg2 ;
-(void)setScriptingAnimations:(id)arg1 ;
-(void)insertObject:(id)arg1 inSlidesAtIndex:(long long)arg2 ;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(id)objectInTextsAtIndex:(long long)arg1 ;
-(void)replaceObjectInSlidesAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(long long)maxNumberOfSecondarySlides;
-(BOOL)replaceSlides;
-(void)setXPosition:(double)arg1 ;
-(id)scriptingAnimations;
-(void)replaceObjectInTextsAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)replaceObjectInFiltersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)updateEffectAttributes;
-(void)setYPosition:(double)arg1 ;
-(BOOL)isLive;
-(id)init;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setScale:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(id)container;
-(void)setContainer:(id)arg1 ;
-(CGPoint)position;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(id)filters;
-(double)width;
-(void)setZPosition:(double)arg1 ;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(BOOL)isTextOnly;
-(void)cleanup;
-(id)uuid;
-(void)setHeight:(double)arg1 ;
-(long long)zIndex;
-(void)addFilter:(id)arg1 ;
-(id)parentContainer;
-(void)setParentContainer:(id)arg1 ;
-(BOOL)hasMovies;
-(void)updateTiming;
-(id)objectID;
-(double)zPosition;
-(long long)randomSeed;
-(id)initWithEffectID:(id)arg1 ;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)addText:(id)arg1 ;
-(void)dump;
-(NSString *)effectID;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)addSlide:(id)arg1 ;
-(void)addFilters:(id)arg1 ;
-(id)parentDocument;
-(void)setRandomSeed:(long long)arg1 ;
@end

