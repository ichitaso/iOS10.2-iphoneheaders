/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPImageManager : NSObject {

	OpaqueFigPhotoJPEGDecodeSessionRef _jpegDecoder;
	OpaqueVTPixelTransferSessionRef _transferSession;

}
+(BOOL)loggingEnabled;
+(id)sharedImageManager;
-(id)init;
-(void)dealloc;
-(int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)convertPixelBuffer:(_CVBuffer*)arg1 toPixelFormat:(int)arg2 ;
-(int)drawImage:(CGImageRef)arg1 withOrientation:(unsigned)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(id)dataForResource:(id)arg1 ;
-(int)decodeJPEG:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)decodeImageSource:(CGImageSourceRef)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(CVBufferRef)pixelBufferForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 ;
-(CVBufferRef)imageForResource:(id)arg1 pixelFormat:(int)arg2 ;
-(CVBufferRef)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 ;
@end

