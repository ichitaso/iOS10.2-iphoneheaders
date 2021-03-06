/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAvatarCardControllerDelegate;
#import <ContactsUI/ContactsUI-Structs.h>
@class NSArray, UIView, CNAvatarView, CNContactOrbHeaderView, UIButton, UIGestureRecognizer, UIViewController, CNContact, NSString;

@interface CNAvatarCardController : NSObject {

	BOOL _actionsNeedRefresh;
	BOOL _bypassActionValidation;
	NSArray* _contacts;
	NSArray* _actionCategories;
	id<CNAvatarCardControllerDelegate> _delegate;
	UIView* _sourceView;
	CNAvatarView* _avatarView;
	CNContactOrbHeaderView* _headerView;
	UIButton* _infoButton;
	UIGestureRecognizer* _rolloverGestureRecognizer;
	CGRect _sourceRect;

}

@property (assign,nonatomic,__weak) CNAvatarView * avatarView;                                //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CNContactOrbHeaderView * headerView;                             //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                           //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (nonatomic,retain) UIGestureRecognizer * rolloverGestureRecognizer;                 //@synthesize rolloverGestureRecognizer=_rolloverGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL actionsNeedRefresh;                                         //@synthesize actionsNeedRefresh=_actionsNeedRefresh - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation;                                     //@synthesize bypassActionValidation=_bypassActionValidation - In the implementation block
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) NSArray * contacts;                                              //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories;                                        //@synthesize actionCategories=_actionCategories - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic,__weak) id<CNAvatarCardControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,retain) UIView * sourceView;                                             //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                               //@synthesize sourceRect=_sourceRect - In the implementation block
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1 ;
+(BOOL)avatarCardEnabled;
+(long long)actionsMode;
+(BOOL)showsWithTapAndHold;
+(long long)avatarCardImplementation;
+(id)descriptorForRequiredKeys;
-(id)init;
-(void)setDelegate:(id<CNAvatarCardControllerDelegate>)arg1 ;
-(id<CNAvatarCardControllerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(UIViewController *)presentingViewController;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(BOOL)isVisible;
-(CNContactOrbHeaderView *)headerView;
-(void)setHeaderView:(CNContactOrbHeaderView *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(NSString *)message;
-(void)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(BOOL)bypassActionValidation;
-(NSArray *)actionCategories;
-(void)showContact:(id)arg1 ;
-(UIGestureRecognizer *)rolloverGestureRecognizer;
-(void)dismissAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRolloverGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(BOOL)actionsNeedRefresh;
-(void)setActionsNeedRefresh:(BOOL)arg1 ;
-(id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1 ;
-(void)showContact;
-(void)_updateCard;
-(void)presentAnimated:(BOOL)arg1 ;
-(CNContact *)contact;
-(CNAvatarView *)avatarView;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
@end

