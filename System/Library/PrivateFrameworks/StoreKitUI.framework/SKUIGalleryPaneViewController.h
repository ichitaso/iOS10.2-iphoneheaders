/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIMediaComponent, SKUIEmbeddedMediaView;

@interface SKUIGalleryPaneViewController : UIViewController {

	SKUIMediaComponent* _component;
	long long _galleryIndex;

}

@property (nonatomic,readonly) SKUIMediaComponent * component;                 //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) long long galleryIndex;                         //@synthesize galleryIndex=_galleryIndex - In the implementation block
@property (nonatomic,readonly) SKUIEmbeddedMediaView * mediaView; 
-(SKUIMediaComponent *)component;
-(SKUIEmbeddedMediaView *)mediaView;
-(long long)galleryIndex;
-(id)initWithMediaComponent:(id)arg1 galleryIndex:(long long)arg2 ;
@end

