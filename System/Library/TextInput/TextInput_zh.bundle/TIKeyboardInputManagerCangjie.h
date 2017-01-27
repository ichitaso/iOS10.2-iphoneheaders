/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManager_zh_ShapeBased.h>

@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManager_zh_ShapeBased {

	BOOL _suchengEnabled;
	BOOL _supportsEnglish;

}

@property (assign,nonatomic) BOOL suchengEnabled;               //@synthesize suchengEnabled=_suchengEnabled - In the implementation block
@property (assign,nonatomic) BOOL supportsEnglish;              //@synthesize supportsEnglish=_supportsEnglish - In the implementation block
+(Class)wordSearchClass;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)initialSelectedIndex;
-(BOOL)supportsNumberKeySelection;
-(id)defaultCandidate;
-(id)keyEventMap;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)nonstopPunctuationCharacters;
-(TIInputManagerZephyr*)initImplementation;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)sortingMethods;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(id)formattedSearchString;
-(void)setSuchengEnabled:(BOOL)arg1 ;
-(BOOL)suchengEnabled;
-(void)setSupportsEnglish:(BOOL)arg1 ;
-(BOOL)supportsEnglish;
-(unsigned long long)cangjieInputType:(id)arg1 fromPopupVariant:(BOOL)arg2 ;
-(void)updateMarkedText;
-(BOOL)firstCandidateIsEnglish;
-(BOOL)selectedCandidateIsEnglish;
-(id)cangjieSet;
-(id)cangjieAlphabetSet;
-(BOOL)isPunctuationInput;
@end
