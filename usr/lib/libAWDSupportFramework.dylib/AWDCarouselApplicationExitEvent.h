/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDCarouselPreviousForeground, NSMutableArray;

@interface AWDCarouselApplicationExitEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _bundleID;
	AWDCarouselPreviousForeground* _previousActivation;
	NSMutableArray* _prewarms;
	unsigned _reason;
	BOOL _development;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                                             //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) unsigned reason;                                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousActivation; 
@property (nonatomic,retain) AWDCarouselPreviousForeground * previousActivation;              //@synthesize previousActivation=_previousActivation - In the implementation block
@property (nonatomic,retain) NSMutableArray * prewarms;                                       //@synthesize prewarms=_prewarms - In the implementation block
@property (assign,nonatomic) BOOL hasDevelopment; 
@property (assign,nonatomic) BOOL development;                                                //@synthesize development=_development - In the implementation block
+(Class)prewarmsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)reason;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setPreviousActivation:(AWDCarouselPreviousForeground *)arg1 ;
-(void)setPrewarms:(NSMutableArray *)arg1 ;
-(void)addPrewarms:(id)arg1 ;
-(unsigned long long)prewarmsCount;
-(void)clearPrewarms;
-(id)prewarmsAtIndex:(unsigned long long)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasReason;
-(BOOL)hasPreviousActivation;
-(void)setDevelopment:(BOOL)arg1 ;
-(void)setHasDevelopment:(BOOL)arg1 ;
-(BOOL)hasDevelopment;
-(AWDCarouselPreviousForeground *)previousActivation;
-(NSMutableArray *)prewarms;
-(BOOL)development;
-(NSString *)bundleID;
-(void)setReason:(unsigned)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)hasBundleID;
@end

