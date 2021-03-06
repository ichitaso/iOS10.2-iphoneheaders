/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>
#import <Restaurants/SiriRestaurantsLogoButtonDelegate.h>

@class UILabel, SiriRestaurantsLogoButton, NSString;

@interface SiriRestaurantsMoreOnCell : SiriUIContentCollectionViewCell <SiriRestaurantsLogoButtonDelegate> {

	UILabel* _label;
	SiriRestaurantsLogoButton* _logoView;
	NSString* _providerName;

}

@property (nonatomic,retain) SiriRestaurantsLogoButton * logoView;              //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,copy) NSString * providerName;                             //@synthesize providerName=_providerName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logoButtonDidUpdateLogo:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(void)setLogoView:(SiriRestaurantsLogoButton *)arg1 ;
-(SiriRestaurantsLogoButton *)logoView;
@end

