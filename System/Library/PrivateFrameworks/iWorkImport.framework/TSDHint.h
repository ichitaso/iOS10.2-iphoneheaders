/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDHint <NSObject>
@optional
-(BOOL)isFirstHint;
-(CGSize*)effectiveSize;
-(CGSize*)maximumSize;

@required
+(Class)archivedHintClass;
-(BOOL)overlapsWithSelectionPath:(id)arg1;
-(void)offsetByDelta:(int)arg1;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;

@end
