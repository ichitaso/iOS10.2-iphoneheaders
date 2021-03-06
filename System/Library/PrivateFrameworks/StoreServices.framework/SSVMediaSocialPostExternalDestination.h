/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVMediaSocialPostExternalDestination : NSObject <NSCopying, SSXPCCoding> {

	NSString* _accessToken;
	NSString* _pageAccessToken;
	NSString* _pageIdentifier;
	NSString* _serviceIdentifier;

}

@property (nonatomic,copy) NSString * pageAccessToken;                //@synthesize pageAccessToken=_pageAccessToken - In the implementation block
@property (nonatomic,copy) NSString * pageIdentifier;                 //@synthesize pageIdentifier=_pageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                    //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPageAccessToken:(NSString *)arg1 ;
-(void)setPageIdentifier:(NSString *)arg1 ;
-(NSString *)pageAccessToken;
-(NSString *)pageIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccessToken:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(NSString *)accessToken;
@end

