/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@interface CKDVolumeManager : NSObject
+(id)_volumeForDisk:(const SCD_Struct_CK11*)arg1 mountToPath:(id)arg2 error:(id*)arg3 ;
+(id)createVolumeForDevice:(int)arg1 error:(id*)arg2 ;
+(id)existingVolumeForDevice:(int)arg1 ;
+(void)invalidateVolume:(id)arg1 ;
+(void)startVolumes;
+(void)shutdownVolumes;
+(id)deviceIDForVolumeUUID:(id)arg1 ;
+(id)volumeUUIDForDeviceID:(id)arg1 ;
@end
