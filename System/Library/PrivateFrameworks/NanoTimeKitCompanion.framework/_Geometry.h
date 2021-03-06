/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _Geometry : NSObject {

	unsigned _vao;
	unsigned _vbo;

}

@property (assign,nonatomic) unsigned vao;              //@synthesize vao=_vao - In the implementation block
@property (assign,nonatomic) unsigned vbo;              //@synthesize vbo=_vbo - In the implementation block
-(void)createGeometry:(const float*)arg1 count:(unsigned long long)arg2 useWeights:(BOOL)arg3 ;
-(void)setVao:(unsigned)arg1 ;
-(unsigned)vao;
-(void)setVbo:(unsigned)arg1 ;
-(unsigned)vbo;
-(void)createGeometry:(const float*)arg1 count:(unsigned long long)arg2 ;
@end

