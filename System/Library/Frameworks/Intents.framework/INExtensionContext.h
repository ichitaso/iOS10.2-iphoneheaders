/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/INCacheableObjectManagerObserver.h>
#import <libobjc.A.dylib/INExtensionContextVending.h>

@class NSString;

@interface INExtensionContext : NSExtensionContext <INCacheableObjectManagerObserver, INExtensionContextVending>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(oneway void)completeTransaction;
-(oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)confirmationResponseForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)handleIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)handleIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 ;
-(void)stopSendingUpdatesForIntent:(id)arg1 ;
-(oneway void)getApplicationContextWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)confirmIntent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(oneway void)handleIntent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(oneway void)cancelTransactionDueToTimeout;
-(void)cacheableObjectManager:(id)arg1 wasToldAboutCacheableObject:(id)arg2 ;
-(void)_deliverIntent:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_processIntentResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_validateExtension;
-(id)_errorHandlingHostProxy;
@end

