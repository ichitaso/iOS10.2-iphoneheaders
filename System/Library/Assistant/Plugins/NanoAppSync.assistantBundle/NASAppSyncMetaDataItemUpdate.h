/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAppSync/NanoAppSync-Structs.h>
#import <NanoAppSync/NASAppSyncMetaDataItem.h>

@class NASAppSyncAnchor, NARApplication, NSString;

@interface NASAppSyncMetaDataItemUpdate : NSObject <NASAppSyncMetaDataItem> {

	NASAppSyncAnchor* _anchor;
	NARApplication* _application;
	NSString* _appId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appId;                       //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) NASAppSyncAnchor * anchor;              //@synthesize anchor=_anchor - In the implementation block
-(id)_appIdentifyingInfo;
-(id)localizedInfoValuesForKey:(id)arg1 ;
-(id)initWithApplication:(id)arg1 anchor:(id)arg2 ;
-(id)scrapeAppInfo;
-(BOOL)isMetaDataItemUpdate;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NASAppSyncAnchor *)anchor;
-(void)_validate;
-(NSString *)appId;
@end

