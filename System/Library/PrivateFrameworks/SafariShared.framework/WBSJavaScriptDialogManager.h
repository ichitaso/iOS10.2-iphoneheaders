/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WBSJavaScriptDialogManager : NSObject {

	NSMutableDictionary* _completionHandlers;

}
-(id)init;
-(void)dismissDialogForWebPIDIfNeeded:(int)arg1 ;
-(id)unregisterDialogForWebPID:(int)arg1 ;
-(void)registerDialogForWebPID:(int)arg1 withCompletionHandler:(id)arg2 ;
-(void)dismissAlertDialogForWebPID:(int)arg1 ;
-(void)dismissConfirmDialogForWebPID:(int)arg1 withResponse:(long long)arg2 ;
-(void)dismissPromptDialogForWebPID:(int)arg1 withResponse:(id)arg2 ;
@end

