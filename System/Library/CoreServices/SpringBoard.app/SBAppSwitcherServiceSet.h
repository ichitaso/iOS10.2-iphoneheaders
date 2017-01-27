/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SBAppSwitcherServiceSet : NSObject <NSCopying> {

	NSMutableArray* _services;

}

@property (nonatomic,readonly) NSMutableArray * services;              //@synthesize services=_services - In the implementation block
-(id)initWithServices:(id)arg1 zone:(NSZone*)arg2 ;
-(id)serviceBundleIdentifiers;
-(id)serviceForBundleIdentifier:(id)arg1 ;
-(unsigned long long)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayItems;
-(id)serviceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)services;
-(void)removeService:(id)arg1 ;
-(void)addService:(id)arg1 ;
@end
