/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray;

@interface TSUPerformanceTestHarness : NSObject {

	NSMutableArray* mTestCases;
	BOOL mQuiet;
	long long mPassingTests;
	long long mTotalTests;
	BOOL mPassed;
	timeval mSetupTime;

}

@property (assign,nonatomic) BOOL quiet; 
@property (nonatomic,readonly) long long passingTestCount; 
@property (nonatomic,readonly) long long testCount; 
@property (nonatomic,readonly) BOOL passed; 
+(id)harness;
-(id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)testSuite;
-(id)p_createResultDirectory;
-(void)p_writeSystemConfigurationToDirectory:(id)arg1 ;
-(void)p_writeConsoleMessagesToDirectory:(id)arg1 ;
-(void)p_writeCsvResultsToDirectory:(id)arg1 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4 ;
-(BOOL)runTests;
-(long long)passingTestCount;
-(long long)testCount;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(void)report;
-(BOOL)quiet;
-(void)setQuiet:(BOOL)arg1 ;
-(BOOL)passed;
-(void)setup;
@end

