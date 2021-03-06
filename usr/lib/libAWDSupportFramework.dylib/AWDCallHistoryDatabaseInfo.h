/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistoryDatabaseInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _fetchLimit;
	unsigned _schema;
	unsigned _size;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) unsigned size;                             //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasFetchLimit; 
@property (assign,nonatomic) unsigned fetchLimit;                       //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL hasSchema; 
@property (assign,nonatomic) unsigned schema;                           //@synthesize schema=_schema - In the implementation block
-(unsigned)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(void)setHasFetchLimit:(BOOL)arg1 ;
-(BOOL)hasFetchLimit;
-(void)setHasSchema:(BOOL)arg1 ;
-(BOOL)hasSchema;
-(void)setFetchLimit:(unsigned)arg1 ;
-(unsigned)schema;
-(void)setSchema:(unsigned)arg1 ;
-(unsigned)fetchLimit;
@end

