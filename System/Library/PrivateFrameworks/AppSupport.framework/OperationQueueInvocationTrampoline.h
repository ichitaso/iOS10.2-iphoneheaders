/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupport/InvocationTrampoline.h>

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {

	NSOperationQueue* _queue;
	long long _priority;

}
-(id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

