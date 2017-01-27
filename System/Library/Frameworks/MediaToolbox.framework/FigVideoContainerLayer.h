/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class CALayer;

@interface FigVideoContainerLayer : FigBaseCALayer {

	CALayer* _videoLayer;
	BOOL _shouldResizeVideoLayer;

}

@property (nonatomic,retain) CALayer * videoLayer;                     //@synthesize videoLayer=_videoLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeVideoLayer;              //@synthesize shouldResizeVideoLayer=_shouldResizeVideoLayer - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(void)dealloc;
-(id)actionForKey:(id)arg1 ;
-(void)layoutSublayers;
-(BOOL)shouldResizeVideoLayer;
-(void)setShouldResizeVideoLayer:(BOOL)arg1 ;
-(CALayer *)videoLayer;
-(void)setVideoLayer:(CALayer *)arg1 ;
@end
