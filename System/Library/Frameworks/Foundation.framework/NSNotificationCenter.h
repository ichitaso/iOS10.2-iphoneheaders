/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSNotificationCenter : NSObject {

	void* _impl;
	void* _callback;
	void** _pad[11];

}
+(id)defaultCenter;
-(id)mf_addImmediateObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)mf_removeObservers:(id)arg1 ;
-(void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 ;
-(void)postNotificationName:(id)arg1 ;
-(void)__mainThreadPostNotification:(id)arg1 ;
-(void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)init;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)isEmpty;
-(void)removeObserver:(id)arg1 ;
-(void)postNotification:(id)arg1 ;
@end

