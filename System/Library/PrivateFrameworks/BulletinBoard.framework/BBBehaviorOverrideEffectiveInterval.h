/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/BBBehaviorOverrideEffectivePeriod.h>

@class NSDateComponents, NSString, NSCalendar, NSUUID;

@interface BBBehaviorOverrideEffectiveInterval : NSObject <BBBehaviorOverrideEffectivePeriod> {

	NSDateComponents* _startComponents;
	NSDateComponents* _endComponents;
	NSString* _calendarIdentifier;
	NSCalendar* _calendar;
	unsigned long long _repeatInterval;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSDateComponents * startComponents;               //@synthesize startComponents=_startComponents - In the implementation block
@property (nonatomic,copy) NSDateComponents * endComponents;                 //@synthesize endComponents=_endComponents - In the implementation block
@property (nonatomic,copy) NSString * calendarIdentifier;                    //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                            //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) unsigned long long repeatInterval;              //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)relevantUnitsForRepeatInterval:(unsigned long long)arg1 ;
+(id)adjustComponentsForRepeatInterval:(unsigned long long)arg1 earlier:(BOOL)arg2 ;
+(id)dateWithComponents:(id)arg1 closestToDate:(id)arg2 earlierThanDate:(BOOL)arg3 calendar:(id)arg4 repeatInterval:(unsigned long long)arg5 ;
+(id)dateWithComponents:(id)arg1 immediatelyPriorToDate:(id)arg2 calendar:(id)arg3 repeatInterval:(unsigned long long)arg4 ;
+(id)dateWithComponents:(id)arg1 immediatelyFollowingDate:(id)arg2 calendar:(id)arg3 repeatInterval:(unsigned long long)arg4 ;
+(long long)_dateComponentWithProvidedComponent:(long long)arg1 andBaseComponent:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSUUID *)identifier;
-(void)setRepeatInterval:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)calendarIdentifier;
-(unsigned long long)repeatInterval;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4 ;
-(NSDateComponents *)startComponents;
-(NSDateComponents *)endComponents;
-(id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4 identifier:(id)arg5 ;
-(void)setStartComponents:(NSDateComponents *)arg1 ;
-(void)setEndComponents:(NSDateComponents *)arg1 ;
-(id)_configuredCalendarWithIdentifier:(id)arg1 ;
-(void)_synchronizeTimeZone;
-(id)nextTransitionDateAfterDate:(id)arg1 ;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(BOOL)containsDate:(id)arg1 ;
@end
