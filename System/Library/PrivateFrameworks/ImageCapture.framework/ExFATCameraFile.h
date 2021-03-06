/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraFile.h>

@class NSString;

@interface ExFATCameraFile : ICCameraFile {

	void* _exFATCameraFileProperties;

}

@property (assign) unsigned type; 
@property (copy) NSString * exifCreationDateTime; 
@property (copy) NSString * exifModificationDateTime; 
@property (assign) int thmSize; 
@property (assign) int thmOffset; 
@property (assign) int thmWidth; 
@property (assign) int thmHeight; 
@property (assign) int imgWidth; 
@property (assign) int imgHeight; 
@property (assign) int bitsPerPixel; 
@property (assign) BOOL updatedBasicMetadata; 
@property (readonly) id object; 
@property (readonly) timespec fsCreationTime; 
@property (readonly) timespec fsModificationTime; 
@property (readonly) long long fsSize; 
-(void)dealloc;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)object;
-(id)thumbData;
-(int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3 ;
-(NSString *)exifCreationDateTime;
-(NSString *)exifModificationDateTime;
-(BOOL)updateBasicMetadataIfNotRAW;
-(timespec)fsCreationTime;
-(long long)fsSize;
-(timespec)fsModificationTime;
-(int)thmSize;
-(int)thmOffset;
-(BOOL)updatedBasicMetadata;
-(void)setExifCreationDateTime:(NSString *)arg1 ;
-(void)setExifModificationDateTime:(NSString *)arg1 ;
-(void)setImgWidth:(int)arg1 ;
-(void)setImgHeight:(int)arg1 ;
-(void)setThmSize:(int)arg1 ;
-(void)setThmOffset:(int)arg1 ;
-(void)setThmWidth:(int)arg1 ;
-(void)setThmHeight:(int)arg1 ;
-(void)setUpdatedBasicMetadata:(BOOL)arg1 ;
-(int)thmWidth;
-(int)thmHeight;
-(int)imgWidth;
-(int)imgHeight;
-(void)updateBasicMetadata;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 object:(id)arg4 fsCreationTime:(timespec)arg5 fsModificationTime:(timespec)arg6 fsSize:(long long)arg7 ;
-(id)fsStream;
-(long long)dpOffset;
-(void)setdpOffset:(long long)arg1 ;
-(CGDataProviderSequentialCallbacks*)dpCallbacks;
-(void)releaseProvider;
-(unsigned long long)getBytes:(void*)arg1 ofSize:(unsigned long long)arg2 ;
-(long long)skipBytes:(long long)arg1 ;
-(id)metadataDict;
-(void)rewind;
-(int)bitsPerPixel;
-(void)setBitsPerPixel:(int)arg1 ;
-(void)finalize;
@end

