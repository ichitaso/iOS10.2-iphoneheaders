/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface MiroCropZoomUtilities : NSObject
-(CGRect)rectFromDesiredPosition:(SCD_Struct_Mi17)arg1 outputAspectRatio:(float)arg2 image:(id)arg3 ;
-(CGRect)adjustKBRect:(CGRect)arg1 toContainRect:(CGRect)arg2 withinImageSize:(CGSize)arg3 ;
-(CGRect)horizontallyClampedImageRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(CGRect)verticallyClampedImageRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(BOOL)hasCompletedAnalysis:(id)arg1 ;
-(CGRect)produceCroppingFrameforImage:(id)arg1 withAsset:(id)arg2 ;
-(CGRect)clampImageRect:(CGRect)arg1 toImageSize:(CGSize)arg2 ;
@end
