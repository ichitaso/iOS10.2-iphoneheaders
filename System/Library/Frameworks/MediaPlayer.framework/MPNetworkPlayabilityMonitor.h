/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPNetworkPlayabilityMonitor : NSObject {

	long long _effectiveNetworkTypeForCloudPlayback;
	double _lastAverageBitrate;
	long long _networkType;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) double lastAverageBitrate; 
@property (nonatomic,readonly) long long networkType; 
@property (nonatomic,readonly) long long effectiveNetworkTypeForPlayback; 
+(id)sharedNetworkPlayabilityMonitor;
-(id)init;
-(void)dealloc;
-(void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1 ;
-(long long)effectiveNetworkTypeForPlayback;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
-(long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1 ;
-(double)lastAverageBitrate;
-(long long)networkType;
@end

