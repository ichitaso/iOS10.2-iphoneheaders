/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSString, NSArray;

@interface FCTagHeadlinesOperation : FCOperation {

	FCCloudContext* _context;
	NSString* _tagID;
	unsigned long long _maxHeadlinesCount;
	/*^block*/id _fetchCompletionHandler;
	NSArray* _resultHeadlines;

}

@property (copy) NSArray * resultHeadlines;                                     //@synthesize resultHeadlines=_resultHeadlines - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * tagID;                                    //@synthesize tagID=_tagID - In the implementation block
@property (assign,nonatomic) unsigned long long maxHeadlinesCount;              //@synthesize maxHeadlinesCount=_maxHeadlinesCount - In the implementation block
@property (copy) id fetchCompletionHandler;                                     //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(id)init;
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id)fetchCompletionHandler;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSString *)tagID;
-(void)setTagID:(NSString *)arg1 ;
-(unsigned long long)maxHeadlinesCount;
-(void)setResultHeadlines:(NSArray *)arg1 ;
-(NSArray *)resultHeadlines;
-(void)setMaxHeadlinesCount:(unsigned long long)arg1 ;
@end

