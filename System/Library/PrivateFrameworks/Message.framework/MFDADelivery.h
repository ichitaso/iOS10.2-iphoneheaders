/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailDelivery.h>

@class DAMailAccount, NSString;

@interface MFDADelivery : MFMailDelivery {

	DAMailAccount* _DAMailAccount;
	NSString* _folderId;
	NSString* _accountId;
	NSString* _repliedMessageId;
	NSString* _forwardedMessageId;
	NSString* _repliedLongId;
	NSString* _forwardedLongId;

}
-(void)dealloc;
-(id)deliverSynchronously;
-(id)newMessageWriter;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(void)setDAMailAccount:(id)arg1 ;
@end

