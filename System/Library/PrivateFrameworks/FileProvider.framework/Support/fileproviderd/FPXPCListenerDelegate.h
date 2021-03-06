/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/Support/fileproviderd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class FPServer, NSString;

@interface FPXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {

	FPServer* _server;

}

@property (assign,nonatomic,__weak) FPServer * server;              //@synthesize server=_server - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FPServer *)server;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setServer:(FPServer *)arg1 ;
@end

