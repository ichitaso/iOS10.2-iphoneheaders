/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIViewLFLDChangeRecord.h>

@class NSString, NSValue, UIView;

@interface _UIViewLFLDGeometryChangeRecord : _UIViewLFLDChangeRecord {

	NSString* _geometricPropertyName;
	NSValue* _geometricPropertyValue;
	UIView* _currentLayoutView;
	NSString* _currentLayoutMethodName;

}

@property (nonatomic,readonly) NSString * geometricPropertyName;                //@synthesize geometricPropertyName=_geometricPropertyName - In the implementation block
@property (nonatomic,readonly) NSValue * geometricPropertyValue;                //@synthesize geometricPropertyValue=_geometricPropertyValue - In the implementation block
@property (nonatomic,readonly) UIView * currentLayoutView;                      //@synthesize currentLayoutView=_currentLayoutView - In the implementation block
@property (nonatomic,readonly) NSString * currentLayoutMethodName;              //@synthesize currentLayoutMethodName=_currentLayoutMethodName - In the implementation block
-(id)description;
-(id)initWithGeometricPropertyName:(id)arg1 value:(id)arg2 currentLayoutView:(id)arg3 methodName:(id)arg4 ;
-(NSString *)geometricPropertyName;
-(NSValue *)geometricPropertyValue;
-(UIView *)currentLayoutView;
-(NSString *)currentLayoutMethodName;
@end

