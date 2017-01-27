/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, NSURL, AVAsset;

@interface MBAssetLoaderOperation : NSOperation {

	BOOL finished;
	BOOL executing;
	NSArray* _prefetchKeys;
	NSURL* _identifierURL;
	AVAsset* _asset;
	/*^block*/id _preCompletionBlock;

}

@property (getter=isFinished) BOOL finished; 
@property (getter=isExecuting) BOOL executing; 
@property (nonatomic,retain) NSURL * identifierURL;               //@synthesize identifierURL=_identifierURL - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                     //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSArray * prefetchKeys;              //@synthesize prefetchKeys=_prefetchKeys - In the implementation block
@property (nonatomic,copy) id preCompletionBlock;                 //@synthesize preCompletionBlock=_preCompletionBlock - In the implementation block
-(void)start;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isConcurrent;
-(NSURL *)identifierURL;
-(id)initWithIdentifierURL:(id)arg1 ;
-(void)setIdentifierURL:(NSURL *)arg1 ;
-(void)setExecuting:(BOOL)arg1 ;
-(NSArray *)prefetchKeys;
-(id)preCompletionBlock;
-(void)setPrefetchKeys:(NSArray *)arg1 ;
-(void)setPreCompletionBlock:(id)arg1 ;
@end
