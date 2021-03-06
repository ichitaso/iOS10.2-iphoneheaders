/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent

@property (readonly) DOMAbstractView * view; 
@property (readonly) int detail; 
@property (readonly) int keyCode; 
@property (readonly) int charCode; 
@property (readonly) int layerX; 
@property (readonly) int layerY; 
@property (readonly) int pageX; 
@property (readonly) int pageY; 
@property (readonly) int which; 
-(int)charCode;
-(int)pageX;
-(int)pageY;
-(int)layerX;
-(int)layerY;
-(int)which;
-(void)initUIEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5 ;
-(void)initUIEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5 ;
-(DOMAbstractView *)view;
-(int)detail;
-(int)keyCode;
@end

