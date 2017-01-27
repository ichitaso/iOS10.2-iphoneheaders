/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {

	NSString* _key;
	NSString* _identifier;
	CNContact* _internalContact;

}

@property (nonatomic,retain) CNContact * internalContact;              //@synthesize internalContact=_internalContact - In the implementation block
@property (nonatomic,copy) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) CNContact * contact; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
+(id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
+(id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
-(id)property;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(NSString *)identifier;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(void)setKey:(NSString *)arg1 ;
-(void)setInternalContact:(CNContact *)arg1 ;
-(id)primitiveValue;
-(id)labeledValueForContact:(id)arg1 ;
-(BOOL)isMultiValueProperty;
-(CNContact *)internalContact;
-(id)sourceContact;
-(id)labeledValue;
-(int)multiValueIdentifier;
-(CNContact *)contact;
@end
