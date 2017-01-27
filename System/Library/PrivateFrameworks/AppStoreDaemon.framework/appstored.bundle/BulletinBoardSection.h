/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, BBDataProviderProxy, NSString, NSArray;

@interface BulletinBoardSection : NSObject <BBRemoteDataProvider> {

	Class _bulletinClass;
	NSMutableArray* _bulletins;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BBDataProviderProxy* _proxy;
	NSString* _sectionID;

}

@property (readonly) NSArray * existingBulletins; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)existingBulletins;
-(void)postBulletin:(id)arg1 ;
-(id)_bulletins;
-(void)_saveUserDefaults;
-(CFStringRef)_userDefaultsKey;
-(id)initWithSectionIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(void)removeBulletinWithRecordID:(id)arg1 ;
-(void)updateBulletin:(id)arg1 ;
-(void)removeAllBulletins;
-(void)setDataProviderProxy:(id)arg1 ;
@end
