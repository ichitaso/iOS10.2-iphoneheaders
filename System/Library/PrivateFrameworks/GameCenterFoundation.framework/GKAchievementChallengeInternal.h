/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal {

	GKAchievementInternal* _achievement;

}

@property (nonatomic,copy) GKAchievementInternal * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(unsigned long long)type;
-(id)titleText;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
-(GKAchievementInternal *)achievement;
-(void)setAchievement:(GKAchievementInternal *)arg1 ;
@end
