/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayVideoOutputConsumer.h>

@class CALayer;

@interface AVPlayVideoOutputLayerConsumer : AVPlayVideoOutputConsumer {

	CALayer* _layer;

}

@property (nonatomic,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(id)init;
-(CALayer *)layer;
-(void)dealloc;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(void)doSomethingInterestingWithBuffer:(CVBufferRef)arg1 ;
@end

