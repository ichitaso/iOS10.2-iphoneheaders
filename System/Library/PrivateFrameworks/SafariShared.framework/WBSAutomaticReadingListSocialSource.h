/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, WBSAutomaticReadingListTrackedRecordsInfo, NSDictionary, NSTimer, NSXPCConnection, NSString;

@interface WBSAutomaticReadingListSocialSource : NSObject {

	id _serviceImage;
	NSMutableDictionary* _accountsToNumberOfRequestsInProgressForOlderItems;
	NSArray* _accounts;
	NSArray* _activeAccounts;
	WBSAutomaticReadingListTrackedRecordsInfo* _recordsInfo;
	Class _fallbackIconProviderClass;
	NSDictionary* _accountsToTrackedRecordsInfoMap;
	NSTimer* _minimumTimeBetweenRequestsTimer;
	unsigned long long _numberOfRequestsInProgressForNewerItems;
	NSXPCConnection* _socialHelperConnection;

}

@property (nonatomic,copy) NSArray * accounts;                                                        //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) NSDictionary * accountsToTrackedRecordsInfoMap;                          //@synthesize accountsToTrackedRecordsInfoMap=_accountsToTrackedRecordsInfoMap - In the implementation block
@property (nonatomic,retain) NSTimer * minimumTimeBetweenRequestsTimer;                               //@synthesize minimumTimeBetweenRequestsTimer=_minimumTimeBetweenRequestsTimer - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRequestsInProgressForNewerItems;              //@synthesize numberOfRequestsInProgressForNewerItems=_numberOfRequestsInProgressForNewerItems - In the implementation block
@property (nonatomic,retain) NSXPCConnection * socialHelperConnection;                                //@synthesize socialHelperConnection=_socialHelperConnection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeAccounts;                                         //@synthesize activeAccounts=_activeAccounts - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) NSString * accountTypeIdentifier; 
@property (nonatomic,readonly) NSString * serviceType; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) id serviceImage; 
@property (nonatomic,readonly) WBSAutomaticReadingListTrackedRecordsInfo * recordsInfo;               //@synthesize recordsInfo=_recordsInfo - In the implementation block
@property (nonatomic,retain) Class fallbackIconProviderClass;                                         //@synthesize fallbackIconProviderClass=_fallbackIconProviderClass - In the implementation block
+(id)allSocialSources;
+(void)refreshAllSocialSources;
+(id)itemsFromAllSocialSourcesByDate;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(NSString *)serviceType;
-(Class)itemClass;
-(NSString *)accountTypeIdentifier;
-(void)_accountsChanged:(id)arg1 ;
-(void)requestMoreItemsWithAge:(int)arg1 ;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(id)serviceImage;
-(WBSAutomaticReadingListTrackedRecordsInfo *)recordsInfo;
-(id)_findAccounts;
-(Class)fallbackIconProviderClass;
-(long long)compareNewestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(long long)compareNewestRecordInRange:(id)arg1 toNewestRecordInRange:(id)arg2 ;
-(long long)compareOldestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(long long)compareItem:(id)arg1 toItem:(id)arg2 ;
-(id)_activeAccountsFromAccountList:(id)arg1 ;
-(void)setMinimumTimeBetweenRequestsTimer:(NSTimer *)arg1 ;
-(void)setSocialHelperConnection:(NSXPCConnection *)arg1 ;
-(unsigned long long)numberOfRequestsInProgressForNewerItems;
-(id)_existingSocialHelperConnection;
-(NSTimer *)minimumTimeBetweenRequestsTimer;
-(void)_didStartRequestForItemsWithAge:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)_didCompleteRequestForItemsWithAge:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)_performRequestForMoreItemsWithAge:(int)arg1 accountIdentifier:(id)arg2 successHandler:(/*^block*/id)arg3 ;
-(double)minimumTimeBetweenRequests;
-(void)_minimumTimeBetweenRequestsTimerFired:(id)arg1 ;
-(NSDictionary *)accountsToTrackedRecordsInfoMap;
-(NSXPCConnection *)socialHelperConnection;
-(void)updateMinimumTimeBetweenRequestsFromResponseHeaders:(id)arg1 ;
-(void)_addItems:(id)arg1 withAge:(int)arg2 inRange:(id)arg3 rangeOfTrackedRecordsAtTimeOfRequest:(id)arg4 forAccountWithIdentifier:(id)arg5 ;
-(void)_requestOlderItemsIfNecessaryToReachMaximumForAccountWithIdentifier:(id)arg1 ;
-(void)setNumberOfRequestsInProgressForNewerItems:(unsigned long long)arg1 ;
-(void)_invalidateSocialHelperConnectionIfPossible;
-(BOOL)shouldHideItemsFromAccount:(id)arg1 ;
-(void)setAccountsToTrackedRecordsInfoMap:(NSDictionary *)arg1 ;
-(void)_didAddItemsForAccountWithIdentifier:(id)arg1 ;
-(id)recordRange:(id)arg1 withOldestFromItem:(id)arg2 ;
-(id)repostResourceURLStringForItem:(id)arg1 ;
-(void)requestMaximumNumberOfOlderItems;
-(void)setShouldHideItems:(BOOL)arg1 forAccount:(id)arg2 ;
-(void)repostItem:(id)arg1 fromAccountWithIdentifier:(id)arg2 ;
-(void)setFallbackIconProviderClass:(Class)arg1 ;
-(NSArray *)activeAccounts;
-(NSString *)serviceName;
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
@end
