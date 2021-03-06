/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject {

	HKHealthStore* _healthStore;

}
-(id)init;
-(id)initWithHealthStore:(id)arg1 ;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchMostRecentWeeklyGoalWithCompletion:(/*^block*/id)arg1 ;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 ;
@end

