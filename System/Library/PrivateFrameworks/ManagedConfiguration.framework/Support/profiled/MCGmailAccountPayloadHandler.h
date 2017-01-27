/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@class NSDictionary;

@interface MCGmailAccountPayloadHandler : MCNewPayloadHandler {

	NSDictionary* _setAsideAccountDictionary;

}

@property (nonatomic,retain) NSDictionary * setAsideAccountDictionary;              //@synthesize setAsideAccountDictionary=_setAsideAccountDictionary - In the implementation block
-(id)initWithPayload:(id)arg1 profileHandler:(id)arg2 ;
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(void)_remove;
-(id)unhashedAccountIdentifier;
-(id)MCACAccountIdentifier;
-(id)accountDictionaryWithIsInstalledByMDM:(BOOL)arg1 ;
-(id)_installWithAccountDictionary:(id)arg1 ;
-(void)setSetAsideAccountDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)setAsideAccountDictionary;
-(void)remove;
-(BOOL)isInstalled;
@end
