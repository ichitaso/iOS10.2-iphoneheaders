/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_os_activity, QLThumbnailGenerationRequestNSXPCProxyCreating;
@class NSURL, NSError, NSObject, QLThumbnailAddition, NSDictionary, NSData, GSAddition;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {

	NSURL* _documentURL;
	NSError* _error;
	BOOL _finished;
	BOOL _executing;
	BOOL _allowsThumbnailGeneration;
	BOOL _generateThumbnailsAtBackgroundPriority;
	BOOL _thumbnailWasJustAutomaticallyGenerated;
	NSObject*<OS_os_activity> _retrievalActivity;
	NSObject*<OS_os_activity> _generationActivity;
	QLThumbnailAddition* _addition;
	id<QLThumbnailGenerationRequest><NSXPCProxyCreating> _thumbnailRequest;
	NSURL* _destinationURL;

}

@property (retain) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                   //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                     //@synthesize finished=_finished - In the implementation block
@property (assign) BOOL allowsThumbnailGeneration;                                //@synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration - In the implementation block
@property (assign) BOOL generateThumbnailsAtBackgroundPriority;                   //@synthesize generateThumbnailsAtBackgroundPriority=_generateThumbnailsAtBackgroundPriority - In the implementation block
@property (readonly) NSDictionary * thumbnailImagesDictionary; 
@property (readonly) NSData * serializedQuickLookMetadataDictionary; 
@property (readonly) BOOL thumbnailWasAutomaticallyGenerated; 
@property (readonly) GSAddition * genStoreAddition; 
@property (readonly) BOOL thumbnailWasJustAutomaticallyGenerated;                 //@synthesize thumbnailWasJustAutomaticallyGenerated=_thumbnailWasJustAutomaticallyGenerated - In the implementation block
@property (readonly) QLThumbnailAddition * addition;                              //@synthesize addition=_addition - In the implementation block
+(BOOL)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isConcurrent;
-(void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1 ;
-(id)issueSandboxExtension;
-(void)_afterThumbnailIsGenerated;
-(void)afterThumbnailIsPutInGenstore;
-(GSAddition *)genStoreAddition;
-(BOOL)thumbnailWasAutomaticallyGenerated;
-(BOOL)allowsThumbnailGeneration;
-(void)setAllowsThumbnailGeneration:(BOOL)arg1 ;
-(BOOL)generateThumbnailsAtBackgroundPriority;
-(void)setGenerateThumbnailsAtBackgroundPriority:(BOOL)arg1 ;
-(BOOL)thumbnailWasJustAutomaticallyGenerated;
-(QLThumbnailAddition *)addition;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)_finishIfCancelled;
-(NSDictionary *)thumbnailImagesDictionary;
-(NSData *)serializedQuickLookMetadataDictionary;
-(id)initWithDocumentAtURL:(id)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)setExecuting:(BOOL)arg1 ;
-(void)_generateThumbnail;
@end

