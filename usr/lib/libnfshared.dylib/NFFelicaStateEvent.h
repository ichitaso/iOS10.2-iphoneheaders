/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NFFelicaStateEvent : NSObject {

	NSMutableDictionary* _stateEvents;

}
+(id)decodeEvent:(id)arg1 reverse:(BOOL)arg2 ;
+(id)_decodeShinkansenTrainDataWithBlock:(id)arg1 andBlock:(id)arg2 ;
+(id)decodeEvent:(id)arg1 ;
+(id)decodeProvider:(id)arg1 service:(id)arg2 blocks:(id)arg3 ;
+(id)decodeLogEvent:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)addStateInfo:(id)arg1 appletAID:(id)arg2 ;
-(id)asDictionary;
@end

