/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/SCROBrailleKey.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey {

	NSString* _keyString;
	unsigned _modifiers;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)modifiers;
-(void)setModifiers:(unsigned)arg1 ;
-(void)setKeyString:(id)arg1 ;
-(id)keyString;
@end

