/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_endpoint;
@class NSObject, NWInterface, NSData, NSString;

@interface NWEndpoint : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying> {

	NSObject*<OS_nw_endpoint> _internalEndpoint;

}

@property (nonatomic,retain) NSObject*<OS_nw_endpoint> internalEndpoint;              //@synthesize internalEndpoint=_internalEndpoint - In the implementation block
@property (nonatomic,retain) NWInterface * interface; 
@property (nonatomic,retain) NSData * txtRecord; 
@property (nonatomic,retain) NSString * parentEndpointDomain; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
+(id)endpointWithCEndpoint:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(unsigned)endpointType;
+(BOOL)supportsResolverCallback;
+(Class)copyClassForEndpointType:(int)arg1 ;
+(id)endpointWithInternalEndpoint:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NWInterface *)interface;
-(void)setInterface:(NWInterface *)arg1 ;
-(id)encodedData;
-(NSString *)privateDescription;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSData *)txtRecord;
-(void)resolveEndpointWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEncodedData:(id)arg1 ;
-(id)copyCEndpoint;
-(void)setTxtRecord:(NSData *)arg1 ;
-(NSString *)parentEndpointDomain;
-(void)setParentEndpointDomain:(NSString *)arg1 ;
-(NSObject*<OS_nw_endpoint>)internalEndpoint;
-(void)setInternalEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
@end
