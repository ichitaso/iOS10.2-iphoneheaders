/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNScheduler;
@interface _CNScheduledObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNScheduler> _scheduler;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 scheduler:(id)arg2 ;
@end
