/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSArray, _MKMapItemAttribution, UIColor, UIImage;

@interface MKPlaceCardActionItem : NSObject {

	BOOL _enabled;
	NSAttributedString* _displayString;
	unsigned long long _type;
	NSArray* _urlStrings;
	_MKMapItemAttribution* _attribution;

}

@property (nonatomic,readonly) UIColor * tintColorOverride; 
@property (nonatomic,copy,readonly) NSAttributedString * displayString;              //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * urlStrings;                                 //@synthesize urlStrings=_urlStrings - In the implementation block
@property (nonatomic,retain) _MKMapItemAttribution * attribution;                    //@synthesize attribution=_attribution - In the implementation block
-(BOOL)enabled;
-(NSAttributedString *)displayString;
-(unsigned long long)type;
-(UIImage *)icon;
-(_MKMapItemAttribution *)attribution;
-(void)setAttribution:(_MKMapItemAttribution *)arg1 ;
-(UIColor *)tintColorOverride;
-(id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(BOOL)arg3 ;
-(id)initForAttributionURLsDisplayString:(id)arg1 enabled:(BOOL)arg2 urlStrings:(id)arg3 attribution:(id)arg4 type:(unsigned long long)arg5 ;
-(void)_setDisplayStringByType;
-(NSArray *)urlStrings;
@end

