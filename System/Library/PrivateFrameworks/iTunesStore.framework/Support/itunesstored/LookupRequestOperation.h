/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class SSAuthenticationContext, NSString, SSLookupProperties, SSLookupResponse;

@interface LookupRequestOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	NSString* _clientIdentifierHeader;
	long long _personalizationStyle;
	SSLookupProperties* _properties;
	SSLookupResponse* _response;
	NSString* _userAgent;

}

@property (readonly) SSLookupProperties * lookupProperties; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (copy) NSString * clientIdentifierHeader; 
@property (assign) long long personalizationStyle; 
@property (copy) NSString * userAgent; 
@property (readonly) SSLookupResponse * lookupResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLookupProperties:(id)arg1 ;
-(SSLookupResponse *)lookupResponse;
-(BOOL)_performLocationLookup:(id*)arg1 ;
-(BOOL)_performJSSignLookupWithURLBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performPlatformLookup:(id*)arg1 ;
-(void)_setLookupResponse:(id)arg1 ;
-(id)_newStoreURLOperationWithBagKey:(id)arg1 ;
-(id)_newLookupResponseWithResultsFromOperation:(id)arg1 ;
-(void)_setAccountID:(id)arg1 ;
-(SSLookupProperties *)lookupProperties;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(id)_URLBagContext;
-(void)dealloc;
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(long long)personalizationStyle;
-(SSAuthenticationContext *)authenticationContext;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(id)_authenticationContext;
@end

