/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMDCameraStreamMetrics;


@protocol HMDCameraStreamControlManagerProtocol <NSObject>
@property (nonatomic,readonly) HMDCameraStreamMetrics * streamMetrics; 
@required
-(void)startStream:(id)arg1;
-(void)updateAudioSetting:(unsigned long long)arg1;
-(void)negotiateStream;
-(void)reconfigureStream:(id)arg1;
-(void)stopStream:(id)arg1;
-(void)remoteSetup:(id)arg1;
-(HMDCameraStreamMetrics *)streamMetrics;

@end

