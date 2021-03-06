/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsProtocol/DCCachedItem.h>
#import <libobjc.A.dylib/DCCachedDirectory.h>
@class NSArray;


@protocol DCCachedDirectory
@property (retain,readonly) NSArray * contents; 
@property (retain,readonly) NSArray * localItems; 
@required
-(NSArray *)contents;
-(NSArray *)localItems;
-(BOOL)isDropBox;

@end


@class NSArray;

@interface DCCachedDirectory : DCCachedItem <DCCachedDirectory>

@property (retain,readonly) NSArray * contents; 
@property (retain,readonly) NSArray * localItems; 
+(id)_contentsWithFixedConstantsFromContentsPropertyListData:(id)arg1 ;
-(NSArray *)contents;
-(NSArray *)localItems;
-(id)_directoryPath;
-(BOOL)isDropBox;
-(id)_contentsFullPath;
-(id)_fileSystemMetadataWithoutNeedingLocking;
-(id)_localGenerationIdentifierFullPath;
-(id)_localGenerationIdentifier;
-(id)_parentContentsMetadataForChildAtRelativePath:(id)arg1 ;
@end

