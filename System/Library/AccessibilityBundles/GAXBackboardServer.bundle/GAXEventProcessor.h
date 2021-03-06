/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
#import <AccessibilityUtilities/AXEventProcessor.h>

@protocol OS_dispatch_queue, GAXEventProcessorDelegate;
@class NSObject;

@interface GAXEventProcessor : AXEventProcessor {

	NSObject*<OS_dispatch_queue> _systemEventDispatchQueue;
	BOOL _sentCancelEventForSnarfedTouch;
	BOOL _lockButtonIsDown;
	BOOL _snarfNextLockButtonUp;
	BOOL _homeButtonIsDown;
	double _lastPrevalidatedLockButtonUpTime;
	double _lastPrevalidatedHomeButtonUpTime;
	BOOL _blockedLastLockButtonDownEvent;
	BOOL _blockedLastHomeButtonDownEvent;
	BOOL _forceDisableLockButton;
	id<GAXEventProcessorDelegate> _delegate;

}

@property (assign,nonatomic) id<GAXEventProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)_allowingAllTouchByOverride:(SCD_Struct_GA1)arg1 ;
-(void)cancelCurrentTouches;
-(void)setForceDisableLockButton:(BOOL)arg1 ;
-(void)beginBlockingHID;
-(BOOL)_prevalidateEvent:(id)arg1 ;
-(BOOL)_handleSystemEvent:(id)arg1 ;
-(BOOL)_ignoringAllTouchByOverride:(SCD_Struct_GA1)arg1 ;
-(BOOL)_touchEventIsForTripleClickSheet:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_touchEventIsForVoiceOverItemChooser:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_touchEvent:(id)arg1 isForWindowWithContextID:(unsigned)arg2 gaxState:(SCD_Struct_GA1)arg3 ;
-(void)endBlockingHID;
-(void)_updateLocalEventStateWithEvent:(id)arg1 ;
-(BOOL)_handleGAXWorkspaceSystemEvent:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_handleGAXActiveSystemEvent:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_touchEventIsForAccessibilityFeatures:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_shouldSwallowTouchEvent:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_touchEventIsForAssistiveTouch:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(id)init;
-(void)setDelegate:(id<GAXEventProcessorDelegate>)arg1 ;
-(void)dealloc;
-(id<GAXEventProcessorDelegate>)delegate;
@end

