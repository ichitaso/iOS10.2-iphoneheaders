/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UILabel, UIImageView;

@interface SiriGKSourceLinkView : SiriGKView {

	UILabel* _titleLabel;
	UIImageView* _safariIconImageView;
	BOOL _hasSetUpConstraints;

}
-(id)initWithLinkText:(id)arg1 punchOut:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateConstraints;
@end
