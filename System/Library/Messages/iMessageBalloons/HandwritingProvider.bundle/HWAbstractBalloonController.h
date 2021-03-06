/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HandwritingProvider/HandwritingProvider-Structs.h>
@class HWBalloonDataSource;

@interface HWAbstractBalloonController : NSObject {

	BOOL _datasourceIsFromMe;
	HWBalloonDataSource* _balloonPluginDatasource;

}

@property (nonatomic,retain) HWBalloonDataSource * balloonPluginDatasource;              //@synthesize balloonPluginDatasource=_balloonPluginDatasource - In the implementation block
@property (assign,nonatomic) BOOL datasourceIsFromMe;                                    //@synthesize datasourceIsFromMe=_datasourceIsFromMe - In the implementation block
+(id)_sharedRenderQueue;
+(void)_writeThumbnailOfHandwriting:(id)arg1 atSize:(CGSize)arg2 useHighFidelityInk:(BOOL)arg3 toDiskWithCompletionHandler:(/*^block*/id)arg4 ;
-(void)setBalloonPluginDatasource:(HWBalloonDataSource *)arg1 ;
-(HWBalloonDataSource *)balloonPluginDatasource;
-(BOOL)datasourceIsFromMe;
-(void)setDatasourceIsFromMe:(BOOL)arg1 ;
-(void)cancelPlayback;
-(void)playbackWithCompletionBlock:(/*^block*/id)arg1 ;
@end

