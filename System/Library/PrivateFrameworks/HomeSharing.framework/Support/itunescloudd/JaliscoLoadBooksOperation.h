/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface JaliscoLoadBooksOperation : CloudLibraryOperation {

	BOOL _parserSuccess;
	NSArray* _queryStoreIDs;
	NSArray* _books;

}

@property (assign,nonatomic) BOOL parserSuccess;                   //@synthesize parserSuccess=_parserSuccess - In the implementation block
@property (nonatomic,retain) NSArray * books;                      //@synthesize books=_books - In the implementation block
@property (nonatomic,retain) NSArray * queryStoreIDs;              //@synthesize queryStoreIDs=_queryStoreIDs - In the implementation block
-(id)queryFilter;
-(void)setQueryStoreIDs:(NSArray *)arg1 ;
-(NSArray *)books;
-(NSArray *)queryStoreIDs;
-(void)setBooks:(NSArray *)arg1 ;
-(id)metadataFilter;
-(id)_queryFilterEncodedStringForDAAPNameString:(id)arg1 ;
-(BOOL)parserSuccess;
-(void)setParserSuccess:(BOOL)arg1 ;
-(void)main;
@end
