/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFPaneHeaderView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@protocol RUIHeaderDelegate;
@class NSString;

@interface BFFPaneHeaderView_RemoteUI : BFFPaneHeaderView <RUIHeader> {

	id<RUIHeaderDelegate> _rui_headerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(id)headerLabel;
-(void)setIconImage:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2 ;
-(void)setDetailText:(id)arg1 attributes:(id)arg2 ;
-(id)subHeaderLabel;
@end

