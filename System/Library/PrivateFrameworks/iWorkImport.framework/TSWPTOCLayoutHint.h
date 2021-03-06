/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDHint.h>

@class NSString;

@interface TSWPTOCLayoutHint : NSObject <TSDHint> {

	NSRange _charRange;

}

@property (nonatomic,readonly) NSRange charRange;                   //@synthesize charRange=_charRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)archivedHintClass;
-(void)saveToArchive:(TOCLayoutHintArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TOCLayoutHintArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)overlapsWithSelectionPath:(id)arg1 ;
-(void)offsetByDelta:(int)arg1 ;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;
-(BOOL)isFirstHint;
-(NSRange)charRange;
-(id)init;
-(id)initWithRange:(NSRange)arg1 ;
@end

