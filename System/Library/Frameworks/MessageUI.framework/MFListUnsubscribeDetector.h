/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMutableDictionaryProtocol;
@interface MFListUnsubscribeDetector : NSObject {

	id<MFMutableDictionaryProtocol> _persistentDictionary;

}
-(id)init;
-(void)dealloc;
-(id)suggestionForMessage:(id)arg1 ;
-(id)initWithMutableDictionary:(id)arg1 ;
-(BOOL)_shouldIgnoreMessageWithHeaders:(id)arg1 ;
-(id)_persistentKeyForHeaders:(id)arg1 ;
-(id)_normalizedAddress:(id)arg1 ;
-(id)_listIDString:(id)arg1 ;
-(id)_senderString:(id)arg1 ;
-(void)acceptSuggestion:(id)arg1 ;
-(void)ignoreSuggestion:(id)arg1 ;
-(void)removeAllPersistedSuggestions;
@end

