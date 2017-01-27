/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTextBody, OADOrientedBounds, CMStyle;

@interface PMShapeTextMapper : CMMapper {

	OADTextBody* mTextBody;
	OADOrientedBounds* mBounds;
	CMStyle* mStyle;
	BOOL mRectangular;

}
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3 ;
-(unsigned char)textAnchor;
-(void)setRectangular:(BOOL)arg1 ;
-(BOOL)isTableCellContent;
@end
