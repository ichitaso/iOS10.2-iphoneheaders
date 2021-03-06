/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSURLRequestInternal, GKFairPlaySAPSession, NSString, NSDictionary, NSData, NSInputStream, NSURL;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSURLRequestInternal* _internal;

}

@property (setter=_gkSetSAPSession:,getter=_gkSAPSession,nonatomic,retain) GKFairPlaySAPSession * _gkSAPSession; 
@property (copy,readonly) NSString * HTTPMethod; 
@property (copy,readonly) NSDictionary * allHTTPHeaderFields; 
@property (copy,readonly) NSData * HTTPBody; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) BOOL HTTPShouldHandleCookies; 
@property (readonly) BOOL HTTPShouldUsePipelining; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) unsigned long long cachePolicy; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSURL * mainDocumentURL; 
@property (readonly) unsigned long long networkServiceType; 
@property (readonly) BOOL allowsCellularAccess; 
+(void)load;
+(id)overrideUserAgent;
+(id)frRequestWithURL:(id)arg1 ;
+(id)frRequestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
+(id)getObjectKeyWithIndex:(long long)arg1 ;
+(BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1 ;
+(void)setDefaultTimeoutInterval:(double)arg1 ;
+(double)defaultTimeoutInterval;
+(BOOL)supportsSecureCoding;
+(id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
+(id)requestWithURL:(id)arg1 ;
+(void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2 ;
+(id)allowsSpecificHTTPSCertificateForHost:(id)arg1 ;
+(void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(id)_gkDictionaryKey;
-(GKFairPlaySAPSession *)_gkSAPSession;
-(void)_gkSetSAPSession:(id)arg1 ;
-(id)HTTPBodyString;
-(id)DARequestByApplyingStorageSession:(CFURLStorageSessionRef)arg1 ;
-(BOOL)ak_usesHTTPSScheme;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)_startTimeoutDate;
-(double)_payloadTransmissionTimeout;
-(NSURL *)mainDocumentURL;
-(BOOL)_URLHasScheme:(id)arg1 ;
-(BOOL)_isSafeRequestForBackgroundDownload;
-(id)_propertyForKey:(id)arg1 ;
-(void)_removePropertyForKey:(id)arg1 ;
-(double)_timeWindowDelay;
-(double)_timeWindowDuration;
-(BOOL)_requiresShortConnectionTimeout;
-(id)_copyReplacingURLWithURL:(id)arg1 ;
-(id)boundInterfaceIdentifier;
-(id)HTTPContentType;
-(id)HTTPExtraCookies;
-(id)HTTPReferrer;
-(id)HTTPUserAgent;
-(id)contentDispositionEncodingFallbackArray;
-(unsigned long long)expectedWorkload;
-(NSInputStream *)HTTPBodyStream;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
-(BOOL)HTTPShouldHandleCookies;
-(double)timeoutInterval;
-(NSDictionary *)allHTTPHeaderFields;
-(unsigned long long)networkServiceType;
-(BOOL)HTTPShouldUsePipelining;
-(NSData *)HTTPBody;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)HTTPMethod;
-(unsigned long long)cachePolicy;
-(CFURLRequestRef)_CFURLRequest;
-(id)_initWithCFURLRequest:(CFURLRequestRef)arg1 ;
@end

