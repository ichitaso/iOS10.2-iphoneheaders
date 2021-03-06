/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface _GSUJSONReader : NSObject {

	id input;
	int kind;
	NSError* error;

}
+(BOOL)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(BOOL)arg3 ;
-(id)init;
-(void)dealloc;
-(id)error;
-(void)setError:(id)arg1 ;
-(unsigned long long)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned long long*)arg2 ;
-(id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)parseData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)parseStream:(id)arg1 options:(unsigned long long)arg2 ;
@end

