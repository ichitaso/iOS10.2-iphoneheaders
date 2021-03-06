/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CSIGenerator.h>

@class CUIRenditionKey, CSIBitmapWrapper;

@interface CUICatalogCSIGenerator : CSIGenerator {

	CUIRenditionKey* _baseKey;
	CSIBitmapWrapper* _flattenedBitmap;

}

@property (nonatomic,retain) CUIRenditionKey * baseKey;                       //@synthesize baseKey=_baseKey - In the implementation block
@property (nonatomic,retain) CSIBitmapWrapper * flattenedBitmap;              //@synthesize flattenedBitmap=_flattenedBitmap - In the implementation block
-(void)setFlattenedBitmap:(CSIBitmapWrapper *)arg1 ;
-(CSIBitmapWrapper *)flattenedBitmap;
-(id)initWithLayerStackData:(id)arg1 withCanvasSize:(CGSize)arg2 isOpaque:(BOOL)arg3 ;
-(void)addLayerReference:(id)arg1 withImage:(CGImageRef)arg2 ;
-(void)setBaseKey:(CUIRenditionKey *)arg1 ;
-(void)dealloc;
-(CUIRenditionKey *)baseKey;
@end

