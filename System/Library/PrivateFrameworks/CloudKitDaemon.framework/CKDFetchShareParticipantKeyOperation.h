/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSDictionary, NSMutableDictionary;

@interface CKDFetchShareParticipantKeyOperation : CKDDatabaseOperation {

	BOOL _hasAttemptedShareUpdate;
	/*^block*/id _shareParticipantKeyFetchedBlock;
	NSMutableArray* _shareIDs;
	NSDictionary* _baseTokensByShareID;
	NSMutableDictionary* _sharesNeedingUpdateByID;

}

@property (nonatomic,retain) NSMutableArray * shareIDs;                                  //@synthesize shareIDs=_shareIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * baseTokensByShareID;                         //@synthesize baseTokensByShareID=_baseTokensByShareID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sharesNeedingUpdateByID;              //@synthesize sharesNeedingUpdateByID=_sharesNeedingUpdateByID - In the implementation block
@property (assign,nonatomic) BOOL hasAttemptedShareUpdate;                               //@synthesize hasAttemptedShareUpdate=_hasAttemptedShareUpdate - In the implementation block
@property (nonatomic,copy) id shareParticipantKeyFetchedBlock;                           //@synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setShareParticipantKeyFetchedBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(NSMutableArray *)shareIDs;
-(NSDictionary *)baseTokensByShareID;
-(void)fetchSharesFromServer;
-(NSMutableDictionary *)sharesNeedingUpdateByID;
-(BOOL)hasAttemptedShareUpdate;
-(void)setHasAttemptedShareUpdate:(BOOL)arg1 ;
-(void)updateShares;
-(void)_sendErrorForFailedShares;
-(id)shareParticipantKeyFetchedBlock;
-(void)_performCallbackForShareID:(id)arg1 withParticipantKey:(id)arg2 error:(id)arg3 ;
-(id)_participantKeyFromShare:(id)arg1 withError:(id*)arg2 ;
-(void)_handleFetchedShare:(id)arg1 withID:(id)arg2 error:(id)arg3 ;
-(void)setShareIDs:(NSMutableArray *)arg1 ;
-(void)setBaseTokensByShareID:(NSDictionary *)arg1 ;
-(void)setSharesNeedingUpdateByID:(NSMutableDictionary *)arg1 ;
@end
