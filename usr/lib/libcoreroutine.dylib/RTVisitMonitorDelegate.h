/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTVisitMonitorDelegate <NSObject>
@optional
-(void)onVisitIncident:(id)arg1 error:(id)arg2;
-(void)onLeechedVisitIncident:(id)arg1 error:(id)arg2;
-(void)onVisitMonitorStateChanged:(id)arg1;
-(void)onLowConfidenceVisitIncident:(id)arg1 error:(id)arg2;

@end
