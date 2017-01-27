/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSettingsConnection.h>

@class NSMutableDictionary;

@interface AssistantVoiceSettingsConnection : AFSettingsConnection {

	NSMutableDictionary* _cachedAvailableVoices;

}

@property (nonatomic,retain) NSMutableDictionary * cachedAvailableVoices;              //@synthesize cachedAvailableVoices=_cachedAvailableVoices - In the implementation block
+(id)outputLanguageIdentifiers;
-(BOOL)languageHasVoiceSelection:(id)arg1 ;
-(void)setCachedAvailableVoices:(NSMutableDictionary *)arg1 ;
-(id)_regionForLanguageIdentifier:(id)arg1 ;
-(NSMutableDictionary *)cachedAvailableVoices;
-(BOOL)languageHasCustomVoice:(id)arg1 ;
-(BOOL)languageHasBothGender:(id)arg1 ;
-(void)setOutputVoiceLanguage:(id)arg1 gender:(long long)arg2 ;
-(id)dialectForLanguageIdentifier:(id)arg1 ;
-(id)getAvailableVoicesForLanguage:(id)arg1 ;
-(id)getAvailableDialectsForLanguage:(id)arg1 ;
-(id)nonCacheAvailableVoicesForLanguage:(id)arg1 ;
@end
