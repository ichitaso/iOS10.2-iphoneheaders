/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class FBSApplicationTerminationAssertion, EventBus, NSObject, NSString;

@interface ApplicationTermination : NSObject {

	FBSApplicationTerminationAssertion* _assertion;
	unsigned long long _attempts;
	EventBus* _bus;
	NSObject*<OS_dispatch_source> _dispatchSource;
	BOOL _mustBeFound;
	BOOL _acquired;
	NSString* _bundleID;
	long long _jobID;

}

@property (readonly) BOOL acquired;                    //@synthesize acquired=_acquired - In the implementation block
@property (readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) long long jobID;                  //@synthesize jobID=_jobID - In the implementation block
-(void)_acquireAssertion;
-(void)_handleAcquisitionWithError:(id)arg1 ;
-(BOOL)_shouldFailForError:(id)arg1 ;
-(void)_scheduleNextAttempt;
-(BOOL)_errorIsApplicationNotFound:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 jobID:(long long)arg2 mustBeFound:(BOOL)arg3 ;
-(BOOL)_shouldRetryForError:(id)arg1 ;
-(long long)jobID;
-(void)dealloc;
-(NSString *)bundleID;
-(BOOL)acquired;
@end

