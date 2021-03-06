/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MPAudioVideoRoutingViewControllerDelegate;
@class UINavigationController, MPAudioVideoRoutingTableViewController;

@interface MPAudioVideoRoutingViewController : UIViewController {

	UINavigationController* _navigationController;
	MPAudioVideoRoutingTableViewController* _tableViewController;
	id<MPAudioVideoRoutingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPAudioVideoRoutingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)hasWirelessDisplayRoutes;
-(id)init;
-(void)setDelegate:(id<MPAudioVideoRoutingViewControllerDelegate>)arg1 ;
-(id<MPAudioVideoRoutingViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)_doneAction:(id)arg1 ;
@end

