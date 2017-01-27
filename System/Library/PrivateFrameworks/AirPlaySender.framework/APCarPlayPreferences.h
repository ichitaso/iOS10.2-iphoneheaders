/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRCarPlayPreferencesDelegate.h>

@protocol APCarPlayPreferencesDelegate;
@class CRCarPlayPreferences, NSString;

@interface APCarPlayPreferences : NSObject <CRCarPlayPreferencesDelegate> {

	CRCarPlayPreferences* _preferences;
	id<APCarPlayPreferencesDelegate> _delegate;

}

@property (assign,nonatomic) id<APCarPlayPreferencesDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCarPlayEnabled,nonatomic,readonly) BOOL carPlayEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<APCarPlayPreferencesDelegate>)arg1 ;
-(void)dealloc;
-(id<APCarPlayPreferencesDelegate>)delegate;
-(void)handleCarPlayAllowedDidChange;
-(BOOL)isCarPlayEnabled;
@end
