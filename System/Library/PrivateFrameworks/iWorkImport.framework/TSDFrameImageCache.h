/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSDFrameImageCache : NSObject {

	NSMutableArray* mEntries;

}
+(id)sharedFrameImageCache;
-(void)p_didReceiveMemoryWarning:(id)arg1 ;
-(CGImageRef)newCachedImageForFrame:(id)arg1 size:(CGSize)arg2 viewScale:(double)arg3 forCALayer:(BOOL)arg4 mask:(BOOL)arg5 ;
-(CGImageRef)setCachedImage:(CGImageRef)arg1 forFrame:(id)arg2 size:(CGSize)arg3 viewScale:(double)arg4 forCALayer:(BOOL)arg5 mask:(BOOL)arg6 ;
-(id)p_newEntryForFrame:(id)arg1 size:(CGSize)arg2 viewScale:(double)arg3 createIfNeeded:(BOOL)arg4 ;
-(id)init;
-(void)dealloc;
@end
