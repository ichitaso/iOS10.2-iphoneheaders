/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBService.h>

@class NSNumber, NSArray;

@interface CBMutableService : CBService {

	NSNumber* _ID;

}

@property (retain) NSNumber * ID;                           //@synthesize ID=_ID - In the implementation block
@property (retain) NSArray * includedServices; 
@property (retain) NSArray * characteristics; 
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)handlePowerNotOn;
-(id)initWithType:(id)arg1 primary:(BOOL)arg2 ;
-(NSNumber *)ID;
-(void)setID:(NSNumber *)arg1 ;
@end

