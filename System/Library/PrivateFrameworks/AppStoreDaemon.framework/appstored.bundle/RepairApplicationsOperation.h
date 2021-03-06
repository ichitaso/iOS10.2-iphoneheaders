/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ASDRepairApplicationRequestOptions, NSNumber, NSString, NSArray;

@interface RepairApplicationsOperation : ISOperation {

	ASDRepairApplicationRequestOptions* _options;
	NSNumber* _accountDSID;
	NSString* _bundleID;
	long long _claimStyle;
	BOOL _appWasClaimed;
	BOOL _vppMigrated;
	NSString* _clientIdentifierHeader;
	/*^block*/id _resultBlock;
	NSString* _userAgent;
	NSArray* _claimedBundleIdentifiers;

}

@property (nonatomic,copy) NSString * clientIdentifierHeader;              //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (copy) id resultBlock;                                           //@synthesize resultBlock=_resultBlock - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                           //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,readonly) BOOL appWasClaimed;                         //@synthesize appWasClaimed=_appWasClaimed - In the implementation block
@property (readonly) NSArray * claimedBundleIdentifiers;                   //@synthesize claimedBundleIdentifiers=_claimedBundleIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL vppMigrated;                           //@synthesize vppMigrated=_vppMigrated - In the implementation block
-(NSArray *)claimedBundleIdentifiers;
-(BOOL)_wasInstalledByConfigurator:(id)arg1 ;
-(BOOL)_claimApps:(id)arg1 ;
-(BOOL)appWasClaimed;
-(BOOL)vppMigrated;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
@end

