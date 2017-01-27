/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <Preferences/PSViewController.h>
#import <CarouselLayoutSettings/CSLIconPostionsStoreDelegate.h>
#import <CarouselLayoutSettings/CSLUIHexIconViewFactory.h>
#import <CarouselLayoutSettings/CSLUIHexIconActionDelegate.h>

@class CSLIconPositionsStore, CSLHexAppGraph, CSLUIFieldOfIconsView, UIActivityIndicatorView, UILabel, NSString;

@interface CSLUILayoutViewController : PSViewController <CSLIconPostionsStoreDelegate, CSLUIHexIconViewFactory, CSLUIHexIconActionDelegate> {

	CSLIconPositionsStore* _iconPositionsStore;
	CSLHexAppGraph* _iconGraph;
	CSLUIFieldOfIconsView* _fieldOfIconsView;
	UIActivityIndicatorView* _spinner;
	UILabel* _nameLabel;

}

@property (assign,nonatomic,__weak) UILabel * nameLabel;              //@synthesize nameLabel=_nameLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tappedIconWithBundleIdentifier:(id)arg1 ;
-(void)resetIconPositions;
-(void)store:(id)arg1 initialSyncComplete:(BOOL)arg2 ;
-(void)store:(id)arg1 updatedIconGraph:(id)arg2 ;
-(double)defaultPixelDiameter;
-(void)tappedEmptyHex:(Hex)arg1 ;
-(void)iconsEdited;
-(id)createIconViewWithBundleIdentifier:(id)arg1 ;
-(void)updatedIconGraph:(id)arg1 ;
-(void)createFieldOfIconsView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)handleLongPress;
@end
