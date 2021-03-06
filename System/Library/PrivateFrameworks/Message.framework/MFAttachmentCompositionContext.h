/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface MFAttachmentCompositionContext : NSObject {

	NSString* _contextID;
	NSURL* _attachmentsBaseURL;

}

@property (nonatomic,readonly) NSString * contextID;                //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy) NSURL * attachmentsBaseURL;              //@synthesize attachmentsBaseURL=_attachmentsBaseURL - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
-(id)init;
-(void)dealloc;
-(NSString *)contextID;
-(NSArray *)attachments;
-(NSURL *)attachmentsBaseURL;
-(id)initWithContextID:(id)arg1 ;
-(void)setAttachmentsBaseURL:(NSURL *)arg1 ;
@end

