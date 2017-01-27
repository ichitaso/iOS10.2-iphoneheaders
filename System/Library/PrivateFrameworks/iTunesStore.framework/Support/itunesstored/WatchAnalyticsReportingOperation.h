/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSWatchMetricsEventsController;

@interface WatchAnalyticsReportingOperation : ISOperation {

	long long _insertTimestamp;
	SSWatchMetricsEventsController* _controller;

}

@property (nonatomic,readonly) SSWatchMetricsEventsController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)init;
-(void)run;
-(SSWatchMetricsEventsController *)controller;
-(id)initWithController:(id)arg1 ;
@end
