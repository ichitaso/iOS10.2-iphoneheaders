/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;
@interface _NSProgressProxy : NSProgress {

	id<NSProgressPublisher> _forwarder;
	BOOL _isOld;
	/*^block*/id _unpublishingHandler;

}
-(void)prioritize;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setPausingHandler:(/*^block*/id)arg1 ;
-(void)setCancellable:(BOOL)arg1 ;
-(void)setPausable:(BOOL)arg1 ;
-(void)publish;
-(void)unpublish;
-(void)acknowledgeWithSuccess:(BOOL)arg1 ;
-(BOOL)isOld;
-(void)setPrioritizable:(BOOL)arg1 ;
-(void)setPrioritizationHandler:(/*^block*/id)arg1 ;
-(void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3 ;
-(void)_acknowledgeWithSuccess:(BOOL)arg1 ;
-(id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(BOOL)arg3 ;
-(void)_invokePublishingHandler:(/*^block*/id)arg1 ;
-(void)_invokeUnpublishingHandler;
-(void)cancel;
-(void)dealloc;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(void)resume;
-(void)pause;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setKind:(id)arg1 ;
@end
