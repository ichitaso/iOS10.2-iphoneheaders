/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDBDataProtectionObserver;

@interface EKDataProtectionObserver : NSObject {

	/*^block*/id _stateChangedCallback;
	CDBDataProtectionObserver* _dataProtectionObserver;

}

@property (nonatomic,retain) CDBDataProtectionObserver * dataProtectionObserver;              //@synthesize dataProtectionObserver=_dataProtectionObserver - In the implementation block
@property (nonatomic,copy) id stateChangedCallback;                                           //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (nonatomic,readonly) BOOL dataIsAccessible; 
+(id)stateChangedNotificationName;
-(id)init;
-(void)setDataProtectionObserver:(CDBDataProtectionObserver *)arg1 ;
-(CDBDataProtectionObserver *)dataProtectionObserver;
-(void)_dataProtectionStateChanged;
-(void)setStateChangedCallback:(id)arg1 ;
-(BOOL)dataIsAccessible;
-(id)stateChangedCallback;
@end
