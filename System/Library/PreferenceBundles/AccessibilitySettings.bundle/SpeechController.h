/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface SpeechController : PSListController {

	BOOL _speechSettingsItemsHidden;
	NSArray* _speechSettingsItems;

}

@property (nonatomic,retain) NSArray * speechSettingsItems;                                                   //@synthesize speechSettingsItems=_speechSettingsItems - In the implementation block
@property (assign,getter=areSpeechSettingsItemsHidden,nonatomic) BOOL speechSettingsItemsHidden;              //@synthesize speechSettingsItemsHidden=_speechSettingsItemsHidden - In the implementation block
-(BOOL)areSpeechSettingsItemsHidden;
-(void)setQuickSpeakEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)speakThisEnabled:(id)arg1 ;
-(id)quickSpeakEnabled:(id)arg1 ;
-(id)quickSpeakSpeakingRate:(id)arg1 ;
-(NSArray *)speechSettingsItems;
-(void)setSpeechSettingsItems:(NSArray *)arg1 ;
-(void)setSpeechSettingsItemsHidden:(BOOL)arg1 ;
-(void)setSpeakThisEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)highlightWord:(id)arg1 ;
-(void)setQuickSpeakSpeakingRate:(id)arg1 specifier:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateLayout;
-(void)willBecomeActive;
-(id)specifiers;
@end
