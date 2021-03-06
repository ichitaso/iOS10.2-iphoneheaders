/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUStreamReadChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, TSPPasteboard, NSString;

@interface TSPPasteboardReadChannel : NSObject <TSUStreamReadChannel> {

	NSObject*<OS_dispatch_queue> _readQueue;
	TSPPasteboard* _pasteboard;
	NSString* _pasteboardType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithPasteboard:(id)arg1 pasteboardType:(id)arg2 ;
-(id)init;
-(void)close;
-(void)_close;
@end

