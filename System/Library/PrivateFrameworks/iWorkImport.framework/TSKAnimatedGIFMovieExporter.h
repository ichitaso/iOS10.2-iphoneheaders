/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSPData;

@interface TSKAnimatedGIFMovieExporter : NSObject {

	TSPData* _data;

}
-(opaqueCMSampleBufferRef)p_createCMSampleBufferFromImageInCGImageSource:(CGImageSourceRef)arg1 atIndex:(unsigned long long)arg2 withPresentationTime:(SCD_Struct_TS573)arg3 nextPresentationTime:(out SCD_Struct_TS573*)arg4 ;
-(void)p_finishWithSuccess:(BOOL)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)exportToMovieFileURL:(id)arg1 fileType:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

