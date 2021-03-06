/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFormAutoFillCorrectionsStore;
@class NSCache, WBSFormAutoFillClassificationToCorrectionsTransformer, NSString;

@interface WBSFormAutoFillMetadataCorrector : NSObject {

	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;
	NSCache* _fingerprintsToCorrections;
	WBSFormAutoFillClassificationToCorrectionsTransformer* _classificationToCorrectionsTransformer;
	NSString* _domain;

}

@property (nonatomic,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
-(id)init;
-(NSString *)domain;
-(id)initWithDomain:(id)arg1 ;
-(void)_commonInitWithDomain:(id)arg1 correctionsStore:(id)arg2 ;
-(void)enqueueCorrectionsRequestForFormMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)bestAvailableMetadataFromMetadata:(id)arg1 ;
@end

