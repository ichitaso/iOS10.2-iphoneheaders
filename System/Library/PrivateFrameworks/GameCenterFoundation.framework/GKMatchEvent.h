/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, GKPlayer;

@interface GKMatchEvent : NSObject {

	NSData* _data;
	GKPlayer* _recipientPlayer;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) GKPlayer * recipientPlayer;              //@synthesize recipientPlayer=_recipientPlayer - In the implementation block
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(GKPlayer *)recipientPlayer;
-(void)setRecipientPlayer:(GKPlayer *)arg1 ;
@end

