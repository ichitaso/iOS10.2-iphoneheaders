/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceServices/VoiceServices-Structs.h>
@class NSString;

@interface VSTextPreProcessorRule : NSObject {

	NSString* _matchPattern;
	NSString* _replacement;
	BOOL _caseSensitive;
	BOOL _eatPunctuation;

}
-(void)dealloc;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)matchedString:(id)arg1 forTokenInRange:(SCD_Struct_VS8*)arg2 ;
@end
