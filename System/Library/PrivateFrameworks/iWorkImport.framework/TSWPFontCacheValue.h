/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPFontCacheValue : NSObject {

	CTFontRef _ctFont;

}

@property (nonatomic,readonly) CTFontRef ctFont;              //@synthesize ctFont=_ctFont - In the implementation block
+(id)cacheValueWithCTFont:(CTFontRef)arg1 ;
-(id)initWithCTFont:(CTFontRef)arg1 ;
-(CTFontRef)ctFont;
-(void)dealloc;
-(id)description;
@end

