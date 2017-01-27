/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNVoiceEventQueueDelegate;
@class NSMutableArray;

@interface MNVoiceEventQueue : NSObject {

	NSMutableArray* _queue;
	id<MNVoiceEventQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNVoiceEventQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<MNVoiceEventQueueDelegate>)arg1 ;
-(id<MNVoiceEventQueueDelegate>)delegate;
-(void)removeAllEvents;
-(BOOL)hasAnotherEvent;
-(id)dequeueNextEvent;
-(void)_removeEventsMatching:(id)arg1 includeEventToMatch:(BOOL)arg2 ;
-(void)addEvent:(id)arg1 ;
@end
