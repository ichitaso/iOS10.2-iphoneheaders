/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@interface SFSearchViewDisappearFeedback : SFFeedback {

	long long _viewDisappearEvent;

}

@property (assign,nonatomic) long long viewDisappearEvent;              //@synthesize viewDisappearEvent=_viewDisappearEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEvent:(long long)arg1 ;
-(long long)viewDisappearEvent;
-(void)setViewDisappearEvent:(long long)arg1 ;
@end
