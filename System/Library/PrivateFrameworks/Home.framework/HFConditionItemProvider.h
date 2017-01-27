/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class HFTriggerBuilder, NSMutableSet;

@interface HFConditionItemProvider : HFItemProvider {

	BOOL _includeSuggestions;
	HFTriggerBuilder* _triggerBuilder;
	NSMutableSet* _conditionItems;

}

@property (nonatomic,retain) NSMutableSet * conditionItems;                    //@synthesize conditionItems=_conditionItems - In the implementation block
@property (nonatomic,readonly) HFTriggerBuilder * triggerBuilder;              //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (nonatomic,readonly) BOOL includeSuggestions;                        //@synthesize includeSuggestions=_includeSuggestions - In the implementation block
-(id)items;
-(BOOL)includeSuggestions;
-(id)initWithHome:(id)arg1 ;
-(id)initWithTriggerBuilder:(id)arg1 includeSuggestions:(BOOL)arg2 ;
-(void)setConditionItems:(NSMutableSet *)arg1 ;
-(NSMutableSet *)conditionItems;
-(HFTriggerBuilder *)triggerBuilder;
-(id)_suggestedConditionBuilders;
-(id)invalidationReasons;
-(id)reloadItems;
@end
