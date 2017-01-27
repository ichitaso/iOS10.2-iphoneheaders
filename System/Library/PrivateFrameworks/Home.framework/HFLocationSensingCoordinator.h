/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol HFLocationSensingCoordinatorDelegate;
@class NSUserDefaults, CLLocationManager, NAFuture, NSString;

@interface HFLocationSensingCoordinator : NSObject <CLLocationManagerDelegate> {

	int _authorizationStatus;
	id<HFLocationSensingCoordinatorDelegate> _delegate;
	NSUserDefaults* _defaults;
	CLLocationManager* _locationManager;
	NAFuture* _authStatusInitializedFuture;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                                             //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                                   //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NAFuture * authStatusInitializedFuture;                                //@synthesize authStatusInitializedFuture=_authStatusInitializedFuture - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                               //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic,__weak) id<HFLocationSensingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NAFuture * locationSensingAvailableFuture; 
@property (assign,nonatomic) BOOL homeSensingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<HFLocationSensingCoordinatorDelegate>)arg1 ;
-(id<HFLocationSensingCoordinatorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)authorizationStatus;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)setAuthorizationStatus:(int)arg1 ;
-(BOOL)homeSensingEnabled;
-(NAFuture *)authStatusInitializedFuture;
-(NAFuture *)locationSensingAvailableFuture;
-(void)setHomeSensingEnabled:(BOOL)arg1 ;
-(void)setAuthStatusInitializedFuture:(NAFuture *)arg1 ;
-(NSUserDefaults *)defaults;
@end
