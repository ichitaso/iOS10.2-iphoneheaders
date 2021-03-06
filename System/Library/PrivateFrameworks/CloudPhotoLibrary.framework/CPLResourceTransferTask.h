/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLResource, NSString;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {

	long long _priority;
	BOOL _cancelled;
	CPLResource* _resource;
	NSString* _taskIdentifier;

}

@property (nonatomic,copy) NSString * taskIdentifier;                              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,retain) CPLResource * resource;                               //@synthesize resource=_resource - In the implementation block
@property (assign,getter=isHighPriority,nonatomic) BOOL highPriority; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
+(BOOL)supportsSecureCoding;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(Class)classForKeyedArchiver;
-(void)launch;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(Class)classForCoder;
-(BOOL)isCancelled;
-(BOOL)isHighPriority;
-(CPLResource *)resource;
-(void)setHighPriority:(BOOL)arg1 ;
-(NSString *)taskIdentifier;
-(void)cancelTask;
-(void)setResource:(CPLResource *)arg1 ;
@end

