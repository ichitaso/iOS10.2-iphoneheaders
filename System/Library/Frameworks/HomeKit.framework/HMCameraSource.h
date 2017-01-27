/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _HMCameraSource, NSObject;

@interface HMCameraSource : NSObject {

	_HMCameraSource* _source;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,retain) _HMCameraSource * source;                                  //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
-(void)setSource:(_HMCameraSource *)arg1 ;
-(_HMCameraSource *)source;
-(id)initWithSource:(id)arg1 ;
-(id)aspectRatio;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
@end
