/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKMessagePartChatItem.h>

@class NSAttributedString;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem

@property (nonatomic,copy,readonly) NSAttributedString * text; 
@property (nonatomic,copy,readonly) NSAttributedString * subject; 
@property (nonatomic,readonly) BOOL containsHyperlink; 
-(NSAttributedString *)text;
-(NSAttributedString *)subject;
-(Class)balloonViewClass;
-(id)loadTranscriptText;
-(id)composition;
-(id)pasteboardItems;
-(id)_attributedTextWithTextColor:(id)arg1 ;
-(BOOL)shouldUseBigEmoji;
-(BOOL)containsHyperlink;
-(id)_time;
-(Class)impactBalloonViewClass;
-(id)sendAnimationText;
@end

