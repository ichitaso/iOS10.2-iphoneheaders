/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ContextAwareObject.h>
#import <ThermalMonitor/tGraphDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ContextInPocket : ContextAwareObject <tGraphDataSource> {

	BOOL contextIsActive;
	BOOL connectedExternally;
	BOOL backlightIsOn;
	BOOL audioIsOn;
	BOOL powerIsOn;
	int mitigationControllerListID;
	int _displayToken;
	int _audioRunningToken;
	unsigned pmuPowerService;
	unsigned _notification;
	unsigned _ioIterator;
	unsigned long long wakeInProgressUntilTime;
	IONotificationPortRef notificationPort;
	NSObject*<OS_dispatch_queue> _inPocketQueue;

}

@property (assign,nonatomic) BOOL contextIsActive; 
@property (assign,nonatomic) BOOL connectedExternally; 
@property (assign,nonatomic) BOOL backlightIsOn; 
@property (assign,nonatomic) BOOL audioIsOn; 
@property (assign,nonatomic) BOOL powerIsOn; 
@property (assign,nonatomic) unsigned long long wakeInProgressUntilTime; 
@property (assign,nonatomic) int mitigationControllerListID; 
@property (assign,nonatomic) int displayToken;                                        //@synthesize displayToken=_displayToken - In the implementation block
@property (assign,nonatomic) int audioRunningToken;                                   //@synthesize audioRunningToken=_audioRunningToken - In the implementation block
@property (assign,nonatomic) unsigned pmuPowerService; 
@property (assign,nonatomic) IONotificationPortRef notificationPort; 
@property (assign,nonatomic) unsigned notification;                                   //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) unsigned ioIterator;                                     //@synthesize ioIterator=_ioIterator - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> inPocketQueue;              //@synthesize inPocketQueue=_inPocketQueue - In the implementation block
-(void)setWakeInProgressUntilTime:(unsigned long long)arg1 ;
-(void)setConnectedExternally:(BOOL)arg1 ;
-(int)mitigationControllerListID;
-(BOOL)isContextTriggered;
-(void)initBacklightHandling;
-(void)initPowerHandling;
-(void)setBacklightIsOn:(BOOL)arg1 ;
-(int)audioRunningToken;
-(BOOL)connectedExternally;
-(void)initAudioHandling;
-(void)setNotificationPort:(IONotificationPortRef)arg1 ;
-(void)updateContextActiveState;
-(void)setPmuPowerService:(unsigned)arg1 ;
-(void)setContextIsActive:(BOOL)arg1 ;
-(unsigned long long)wakeInProgressUntilTime;
-(void)setMitigationControllerListID:(int)arg1 ;
-(void)setAudioRunningToken:(int)arg1 ;
-(unsigned)ioIterator;
-(void)setIoIterator:(unsigned)arg1 ;
-(void)setInPocketQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)pmuPowerService;
-(void)updateSystemPowerState:(BOOL)arg1 ;
-(BOOL)powerIsOn;
-(NSObject*<OS_dispatch_queue>)inPocketQueue;
-(BOOL)audioIsOn;
-(BOOL)backlightIsOn;
-(BOOL)synchContext;
-(void)setAudioIsOn:(BOOL)arg1 ;
-(void)setPowerIsOn:(BOOL)arg1 ;
-(BOOL)contextIsActive;
-(int)getContextState;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(int)numberOfFields;
-(id)init;
-(void)dealloc;
-(unsigned)notification;
-(void)setNotification:(unsigned)arg1 ;
-(void)setDisplayToken:(int)arg1 ;
-(int)displayToken;
-(IONotificationPortRef)notificationPort;
@end
