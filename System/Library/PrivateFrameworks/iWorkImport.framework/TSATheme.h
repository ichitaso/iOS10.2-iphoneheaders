/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSSTheme.h>

@interface TSATheme : TSSTheme
+(void)registerPresetSourceClasses;
+(id)localizedNameForPresetKind:(id)arg1 ;
+(id)localizedNameForStylePickerTitle:(id)arg1 ;
+(id)localizedTitleForApplyStyleMenuItem:(id)arg1 ;
+(id)localizedTitleForCreateStyleMenuItem:(id)arg1 ;
-(void)saveToArchive:(ThemeArchiveRef)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ThemeArchiveRef)arg1 unarchiver:(id)arg2 ;
@end
