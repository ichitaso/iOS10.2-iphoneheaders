/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>
#import <libobjc.A.dylib/DKDiagnostic_Internal.h>
#import <libobjc.A.dylib/DKDiagnostic.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSDictionary, DKMutableResult, CXCallObserver, DKDiagnosticContext, NSLock, NSString;

@interface DKDiagnosticViewController : UIViewController <CXCallObserverDelegate, DKDiagnostic_Internal, DKDiagnostic, NSExtensionRequestHandling> {

	BOOL _finished;
	BOOL _cancelled;
	NSDictionary* _predicates;
	NSDictionary* _specifications;
	NSDictionary* _parameters;
	DKMutableResult* _result;
	CXCallObserver* _callObserver;
	DKDiagnosticContext* _context;
	NSLock* _finishedLock;

}

@property (nonatomic,retain) CXCallObserver * callObserver;                    //@synthesize callObserver=_callObserver - In the implementation block
@property (nonatomic,retain) DKDiagnosticContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLock * finishedLock;                            //@synthesize finishedLock=_finishedLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * predicates;                      //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,readonly) NSDictionary * specifications;                  //@synthesize specifications=_specifications - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) DKMutableResult * result;                         //@synthesize result=_result - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                  //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
-(id)init;
-(void)cancel;
-(DKDiagnosticContext *)context;
-(void)start;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSDictionary *)parameters;
-(void)setContext:(DKDiagnosticContext *)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(DKMutableResult *)result;
-(BOOL)isFinished;
-(void)setFinished:(BOOL)arg1 ;
-(void)setResult:(DKMutableResult *)arg1 ;
-(void)setupWithContext:(id)arg1 ;
-(NSDictionary *)predicates;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(CXCallObserver *)callObserver;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(NSDictionary *)specifications;
-(void)monitorIncomingCall;
-(NSLock *)finishedLock;
-(void)setFinishedLock:(NSLock *)arg1 ;
@end
