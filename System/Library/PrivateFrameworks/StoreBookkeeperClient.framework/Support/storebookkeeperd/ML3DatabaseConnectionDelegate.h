/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ML3DatabaseConnectionDelegate <NSObject>
@optional
-(void)connectionWillOpenDatabase:(id)arg1;
-(void)connectionDidOpenDatabase:(id)arg1;
-(void)connection:(id)arg1 didFailToOpenDatabaseWithError:(id)arg2;
-(void)connectionWillCloseDatabase:(id)arg1;
-(void)connectionDidCloseDatabase:(id)arg1;
-(void)connection:(id)arg1 didFailToCloseDatabaseWithError:(id)arg2;
-(void)connectionDidBeginDatabaseTransaction:(id)arg1;
-(void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(BOOL)arg2;

@end
