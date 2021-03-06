/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface DMFInstalledApplication : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _name;
	NSData* _iconData;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSData * iconData;                      //@synthesize iconData=_iconData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSData *)iconData;
-(void)setIconData:(NSData *)arg1 ;
@end

