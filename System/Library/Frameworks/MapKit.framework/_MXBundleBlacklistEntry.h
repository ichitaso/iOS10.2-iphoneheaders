/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _MXVersion;

@interface _MXBundleBlacklistEntry : NSObject {

	NSString* _bundleIdentifier;
	_MXVersion* _minimum;
	_MXVersion* _maximum;

}
+(id)blacklistEntriesFromDefaultsValue:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 minimumDisallowedVersion:(id)arg2 maximumDisallowedVersion:(id)arg3 ;
-(BOOL)_isVersionValueAllowed:(id)arg1 ;
-(BOOL)isBundleProxyAllowed:(id)arg1 ;
-(BOOL)isExtensionAllowed:(id)arg1 ;
@end

