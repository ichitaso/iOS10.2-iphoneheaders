/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(id)mediaCharacteristicsForMediaTypes;
+(id)keyPathsForValuesAffectingTimeRange;
-(SCD_Struct_AV2)vcp_endTime;
-(SCD_Struct_AV2)vcp_startTime;
-(long long)vcp_orientation;
-(id)init;
-(long long)layer;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)locale;
-(AVAsset *)asset;
-(CGSize)dimensions;
-(id)languageCode;
-(CGSize)naturalSize;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(id)_weakReference;
-(long long)statusOfValueForKey:(id)arg1 ;
-(BOOL)hasMediaCharacteristics:(id)arg1 ;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(void)_startListeningToFigAssetTrackNotifications;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(void)_stopListeningToFigAssetTrackNotifications;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(int)playabilityValidationResult;
-(BOOL)isSelfContained;
-(long long)totalSampleDataLength;
-(SCD_Struct_AV3)mediaPresentationTimeRange;
-(SCD_Struct_AV3)mediaDecodeTimeRange;
-(BOOL)requiresFrameReordering;
-(float)estimatedDataRate;
-(id)loudnessInfo;
-(id)segmentForTrackTime:(SCD_Struct_AV2)arg1 ;
-(SCD_Struct_AV2)samplePresentationTimeForTrackTime:(SCD_Struct_AV2)arg1 ;
-(long long)alternateGroupID;
-(long long)defaultAlternateGroupID;
-(long long)provisionalAlternateGroupID;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(id)associatedTracksOfType:(id)arg1 ;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(id)_trackReferences;
-(id)_assetTrackInspector;
-(BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(SCD_Struct_AV2)minFrameDuration;
-(id)_fallbackTrack;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)availableTrackAssociationTypes;
-(BOOL)_hasMultipleEdits;
-(BOOL)_hasScaledEdits;
-(BOOL)_hasEmptyEdits;
-(BOOL)_hasMultipleDistinctFormatDescriptions;
-(BOOL)_firstFormatDescriptionIsLPCM;
-(id)metadata;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(BOOL)hasProtectedContent;
-(id)mediaCharacteristics;
-(id)extendedLanguageTag;
-(id)commonMetadata;
-(int)trackID;
-(id)segments;
-(id)mediaType;
-(float)nominalFrameRate;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_AV3)timeRange;
-(BOOL)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGAffineTransform)preferredTransform;
-(id)formatDescriptions;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(void)finalize;
@end
