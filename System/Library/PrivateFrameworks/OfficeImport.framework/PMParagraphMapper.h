/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADParagraph;

@interface PMParagraphMapper : CMMapper {

	OADParagraph* mParagraph;

}
-(id)initWithOadParagraph:(id)arg1 parent:(id)arg2 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(BOOL)arg3 ;
-(id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(BOOL)arg2 ;
-(void)addEndCharacterStyleToStyle:(id)arg1 ;
-(int)firstTextRunFontSize;
-(id)fontScheme;
@end
