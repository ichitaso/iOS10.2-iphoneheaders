/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSFuture.h>

@protocol BSFuture <NSObject>
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@required
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(id)result:(id*)arg1;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;

@end


@class NSConditionLock, NSError, NSMutableArray, NSString;

@interface BSFuture : NSObject <BSFuture> {

	NSConditionLock* _stateLock;
	id _result;
	NSError* _error;
	NSMutableArray* _completionBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
-(BOOL)_nts_isFinished;
-(void)_flushCompletionBlocks;
-(void)_addCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)result:(id*)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)didCancel;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)finishWithError:(id)arg1 ;
@end
