/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface FCClusteredHeadlines : NSObject {

	NSDictionary* _headlinesByTopicID;
	NSArray* _orphanedHeadlines;
	NSArray* _discardedOrphanedHeadlines;
	NSDictionary* _d_headlinesByNonWhitelistedTopicID;

}

@property (nonatomic,copy) NSDictionary * headlinesByTopicID;                              //@synthesize headlinesByTopicID=_headlinesByTopicID - In the implementation block
@property (nonatomic,copy) NSArray * orphanedHeadlines;                                    //@synthesize orphanedHeadlines=_orphanedHeadlines - In the implementation block
@property (nonatomic,copy) NSArray * discardedOrphanedHeadlines;                           //@synthesize discardedOrphanedHeadlines=_discardedOrphanedHeadlines - In the implementation block
@property (nonatomic,copy) NSDictionary * d_headlinesByNonWhitelistedTopicID;              //@synthesize d_headlinesByNonWhitelistedTopicID=_d_headlinesByNonWhitelistedTopicID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * d_allHeadlines; 
-(NSDictionary *)headlinesByTopicID;
-(NSArray *)orphanedHeadlines;
-(void)filterClustersToTopicIDs:(id)arg1 ;
-(void)setHeadlinesByTopicID:(NSDictionary *)arg1 ;
-(void)setOrphanedHeadlines:(NSArray *)arg1 ;
-(void)d_sanityCheckAgainstInputHeadlines:(id)arg1 ;
-(void)setDiscardedOrphanedHeadlines:(NSArray *)arg1 ;
-(NSArray *)d_allHeadlines;
-(id)d_JSONRepresentationWithTagController:(id)arg1 subscribedTagIDs:(id)arg2 ;
-(NSArray *)discardedOrphanedHeadlines;
-(NSDictionary *)d_headlinesByNonWhitelistedTopicID;
-(void)setD_headlinesByNonWhitelistedTopicID:(NSDictionary *)arg1 ;
@end

