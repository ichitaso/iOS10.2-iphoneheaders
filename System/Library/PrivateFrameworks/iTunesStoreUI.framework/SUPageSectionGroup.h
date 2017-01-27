/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface SUPageSectionGroup : NSObject <NSCopying> {

	long long _defaultSectionIndex;
	NSArray* _sections;
	long long _style;
	UIColor* _tintColor;
	long long _tintStyle;

}

@property (assign,nonatomic) long long defaultSectionIndex;              //@synthesize defaultSectionIndex=_defaultSectionIndex - In the implementation block
@property (nonatomic,retain) NSArray * sections;                         //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) long long tintStyle;                        //@synthesize tintStyle=_tintStyle - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)setDefaultSectionIndex:(long long)arg1 ;
-(long long)defaultSectionIndex;
-(id)initWithSectionsDictionary:(id)arg1 ;
-(long long)_sectionStyleForString:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 ;
-(void)setTintStyle:(long long)arg1 ;
-(long long)tintStyle;
@end
