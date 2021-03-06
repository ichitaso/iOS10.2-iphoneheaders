/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <IMCore/IMBalloonPluginDataSource.h>

@class CKBalloonView, CKMediaObject;

@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource {

	CKBalloonView* _balloonView;
	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) CKBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObject;              //@synthesize mediaObject=_mediaObject - In the implementation block
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CKBalloonView *)balloonView;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(id)initWithPluginPayload:(id)arg1 ;
-(CKMediaObject *)mediaObject;
-(void)previewDidChange:(id)arg1 ;
-(id)imageBalloon;
@end

