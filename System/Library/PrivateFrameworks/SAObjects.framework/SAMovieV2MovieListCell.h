/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAMovieV2MovieDetailSnippet, NSString, NSNumber, NSDate;

@interface SAMovieV2MovieListCell : SADomainObject

@property (nonatomic,copy) NSArray * displayableShowtimes; 
@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * movieDetailSnippet; 
@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
+(id)movieListCell;
+(id)movieListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)displayableShowtimes;
-(void)setDisplayableShowtimes:(NSArray *)arg1 ;
-(SAMovieV2MovieDetailSnippet *)movieDetailSnippet;
-(void)setMovieDetailSnippet:(SAMovieV2MovieDetailSnippet *)arg1 ;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(NSArray *)posterImages;
-(void)setPosterImages:(NSArray *)arg1 ;
-(NSNumber *)qualityRating;
-(void)setQualityRating:(NSNumber *)arg1 ;
-(NSDate *)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(NSDate *)arg1 ;
@end

