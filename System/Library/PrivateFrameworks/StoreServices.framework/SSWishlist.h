/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase, NSNumber;

@interface SSWishlist : NSObject {

	long long _accountIdentifier;
	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) long long accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * lastSyncTime; 
+(BOOL)existsForAccountIdentifier:(long long)arg1 ;
-(BOOL)deleteBackingStore;
-(void)dealloc;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(long long)accountIdentifier;
-(void)setLastSyncTime:(NSNumber *)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(NSNumber *)lastSyncTime;
@end

