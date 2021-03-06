/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDeckSwitcherPageViewProviderDelegate <NSObject>
@required
-(long long)orientationForPageViewFromProvider:(id)arg1;
-(id)initialDisplayItemForPageViewFromProvider:(id)arg1;
-(id)nextDisplayItemForInteractiveTransitionForPageViewFromProvider:(id)arg1;
-(id)initialLayoutStateForPageViewFromProvider:(id)arg1;
-(CGSize*)sizeForDisplayItem:(id)arg1 fromProvider:(id)arg2;
-(CGSize*)contentSizeForDisplayItem:(id)arg1 fromProvider:(id)arg2;
-(id)containerViewControllerForPageViewFromProvider:(id)arg1;

@end

