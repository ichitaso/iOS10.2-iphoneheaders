/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CAMMemoizationCache : NSObject {

	BOOL _memoizesNil;
	NSMutableDictionary* __dictionary;

}

@property (nonatomic,readonly) NSMutableDictionary * _dictionary;              //@synthesize _dictionary=__dictionary - In the implementation block
@property (nonatomic,readonly) BOOL memoizesNil;                               //@synthesize memoizesNil=_memoizesNil - In the implementation block
-(id)init;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithMemoizesNil:(BOOL)arg1 ;
-(id)objectForKey:(id)arg1 memoizationBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)_dictionary;
-(BOOL)memoizesNil;
@end

