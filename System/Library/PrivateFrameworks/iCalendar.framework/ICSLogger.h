/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSLoggingDelegate;
@interface ICSLogger : NSObject {

	int _logCount;
	id<ICSLoggingDelegate> _loggingDelegate;

}
+(id)sharedInstance;
+(void)setDelegate:(id)arg1 ;
+(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 message:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
@end
