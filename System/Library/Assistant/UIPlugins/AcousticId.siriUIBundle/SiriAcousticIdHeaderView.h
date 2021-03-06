/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/AcousticId.siriUIBundle/AcousticId
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AcousticId/AcousticId-Structs.h>
#import <SiriUI/SiriUIReusableHeaderView.h>

@protocol SiriAcousticIdHeaderViewDelegate;
@class NSURL, NSString, SiriUIDownloadableImageView, UILabel, SKUIItemOfferButton, SKUIPlayButton, SiriUIKeyline;

@interface SiriAcousticIdHeaderView : SiriUIReusableHeaderView {

	BOOL _hasConstraints;
	BOOL _hasAlbumArtConstraint;
	NSURL* _albumArt;
	NSString* _songTitle;
	NSString* _artistString;
	long long _buttonLayout;
	long long _playButtonState;
	id<SiriAcousticIdHeaderViewDelegate> _delegate;
	SiriUIDownloadableImageView* _albumArtImageView;
	UILabel* _songTitleLabel;
	UILabel* _artistNameLabel;
	SKUIItemOfferButton* _buyButton;
	SKUIPlayButton* _playButton;
	SiriUIKeyline* _keyline;

}

@property (nonatomic,retain) SiriUIDownloadableImageView * albumArtImageView;                   //@synthesize albumArtImageView=_albumArtImageView - In the implementation block
@property (nonatomic,retain) UILabel * songTitleLabel;                                          //@synthesize songTitleLabel=_songTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * artistNameLabel;                                         //@synthesize artistNameLabel=_artistNameLabel - In the implementation block
@property (nonatomic,retain) SKUIItemOfferButton * buyButton;                                   //@synthesize buyButton=_buyButton - In the implementation block
@property (nonatomic,retain) SKUIPlayButton * playButton;                                       //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) SiriUIKeyline * keyline;                                           //@synthesize keyline=_keyline - In the implementation block
@property (assign,nonatomic) BOOL hasConstraints;                                               //@synthesize hasConstraints=_hasConstraints - In the implementation block
@property (assign,nonatomic) BOOL hasAlbumArtConstraint;                                        //@synthesize hasAlbumArtConstraint=_hasAlbumArtConstraint - In the implementation block
@property (nonatomic,retain) NSURL * albumArt;                                                  //@synthesize albumArt=_albumArt - In the implementation block
@property (nonatomic,copy) NSString * songTitle;                                                //@synthesize songTitle=_songTitle - In the implementation block
@property (nonatomic,copy) NSString * artistString;                                             //@synthesize artistString=_artistString - In the implementation block
@property (assign,nonatomic) long long buttonLayout;                                            //@synthesize buttonLayout=_buttonLayout - In the implementation block
@property (assign,nonatomic) long long playButtonState;                                         //@synthesize playButtonState=_playButtonState - In the implementation block
@property (assign,nonatomic,__weak) id<SiriAcousticIdHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long playButtonItemIdentifier; 
@property (assign,nonatomic) BOOL keylineHidden; 
+(double)defaultHeight;
-(void)playButtonTapped:(id)arg1 ;
-(long long)playButtonItemIdentifier;
-(NSString *)artistString;
-(void)setHasConstraints:(BOOL)arg1 ;
-(NSString *)songTitle;
-(void)setAlbumArt:(NSURL *)arg1 ;
-(void)setHasAlbumArtConstraint:(BOOL)arg1 ;
-(void)setAlbumArtImageView:(SiriUIDownloadableImageView *)arg1 ;
-(void)setPlayButtonItemIdentifier:(long long)arg1 ;
-(void)setSongTitleLabel:(UILabel *)arg1 ;
-(void)setArtistNameLabel:(UILabel *)arg1 ;
-(void)setPlayButtonState:(long long)arg1 ;
-(void)setArtistString:(NSString *)arg1 ;
-(void)setButtonLayout:(long long)arg1 ;
-(NSURL *)albumArt;
-(UILabel *)songTitleLabel;
-(void)setKeyline:(SiriUIKeyline *)arg1 ;
-(BOOL)hasConstraints;
-(void)setKeylineHidden:(BOOL)arg1 ;
-(SKUIItemOfferButton *)buyButton;
-(BOOL)hasAlbumArtConstraint;
-(long long)buttonLayout;
-(BOOL)keylineHidden;
-(void)setBuyButton:(SKUIItemOfferButton *)arg1 ;
-(UILabel *)artistNameLabel;
-(long long)playButtonState;
-(void)buyButtonTapped:(id)arg1 ;
-(SiriUIDownloadableImageView *)albumArtImageView;
-(void)setSongTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SiriAcousticIdHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SiriAcousticIdHeaderViewDelegate>)delegate;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)updateConstraints;
-(SiriUIKeyline *)keyline;
-(double)desiredHeightForWidth:(double)arg1 ;
-(SKUIPlayButton *)playButton;
-(void)updateProgress;
-(void)setPlayButton:(SKUIPlayButton *)arg1 ;
@end

