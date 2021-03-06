/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDSQLitePredicate;

@interface HDSQLiteHasAssociatedEntityPredicate : HDSQLitePredicate <NSCopying> {

	Class _associatedEntityClass;
	HDSQLitePredicate* _associatedPredicate;
	BOOL _inverted;

}
+(id)predicateWithAssociatedEntityClass:(Class)arg1 associatedPredicate:(id)arg2 inverted:(BOOL)arg3 ;
+(id)predicateWithAssociatedEntityClass:(Class)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
@end

