/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRecordFieldIdentifier;

@interface FCCKPQuerySort : PBCodable <NSCopying> {

	FCCKPRecordFieldIdentifier* _fieldName;
	int _order;
	SCD_Struct_FC1 _has;

}

@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) FCCKPRecordFieldIdentifier * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (assign,nonatomic) BOOL hasOrder; 
@property (assign,nonatomic) int order;                                           //@synthesize order=_order - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasFieldName;
-(FCCKPRecordFieldIdentifier *)fieldName;
-(void)setFieldName:(FCCKPRecordFieldIdentifier *)arg1 ;
-(void)setHasOrder:(BOOL)arg1 ;
-(BOOL)hasOrder;
@end
