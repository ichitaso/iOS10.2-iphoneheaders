/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUI/PHVideoScrubberView.h>

@class UIScrollView;

@interface QLVideoScrubberView : PHVideoScrubberView {

	BOOL _userInteractingWithScrubber;

}

@property (getter=isUserInteractingWithScrubber) BOOL userInteractingWithScrubber;              //@synthesize userInteractingWithScrubber=_userInteractingWithScrubber - In the implementation block
@property (readonly) UIScrollView * scrollView; 
-(UIScrollView *)scrollView;
-(BOOL)isUserInteractingWithScrubber;
-(void)setUserInteractingWithScrubber:(BOOL)arg1 ;
-(void)_handleLongPressGesture:(id)arg1 ;
-(void)_handleInteractionEndedAndTogglePlayState:(BOOL)arg1 ;
-(void)_handleInteractionBegan;
@end

