/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class _TVModalPresentationAnimator, UINavigationController, UIViewController, NSString;

@interface _TVModalPresenter : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate> {

	_TVModalPresentationAnimator* _presentingAnimator;
	_TVModalPresentationAnimator* _dismissingAnimator;
	UINavigationController* _modalRootViewController;

}

@property (nonatomic,readonly) UIViewController * presentedViewController; 
@property (nonatomic,readonly) UINavigationController * modalRootViewController;              //@synthesize modalRootViewController=_modalRootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presenter;
-(id)init;
-(void)dealloc;
-(UIViewController *)presentedViewController;
-(id)_hidden;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)_willRotateNotification:(id)arg1 ;
-(UINavigationController *)modalRootViewController;
-(void)showController:(id)arg1 fromController:(id)arg2 withConfiguration:(id)arg3 andCompletionBlock:(/*^block*/id)arg4 ;
-(void)showController:(id)arg1 fromController:(id)arg2 withConfiguration:(id)arg3 animated:(BOOL)arg4 andCompletionBlock:(/*^block*/id)arg5 ;
-(void)_configureModalController:(id)arg1 withFromController:(id)arg2 andConfiguration:(id)arg3 ;
-(void)_dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)hideAllAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)showController:(id)arg1 fromController:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)hideController:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

