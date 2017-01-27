/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSTimer, NSObject;

@interface CRWirelessSessionAssertionManager : NSObject {

	unsigned long long _state;
	NSTimer* _evaluationTimer;
	NSObject*<OS_os_transaction> _processTransaction;

}

@property (assign,nonatomic) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSTimer * evaluationTimer;                                    //@synthesize evaluationTimer=_evaluationTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> processTransaction;              //@synthesize processTransaction=_processTransaction - In the implementation block
-(void)handleInCarNotification;
-(void)observeAirplayScreen;
-(void)stopEvaluationTimer;
-(void)unobserveAirplayScreen;
-(void)setProcessTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSTimer *)evaluationTimer;
-(void)setEvaluationTimer:(NSTimer *)arg1 ;
-(void)closeProcessTransaction;
-(void)startEvaluationTimer;
-(void)openProcessTransaction;
-(void)transitionToConnecting;
-(void)transitionToConnected;
-(void)transitionToIdle;
-(void)airplayScreenChanged;
-(NSObject*<OS_os_transaction>)processTransaction;
-(id)init;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateState;
@end
