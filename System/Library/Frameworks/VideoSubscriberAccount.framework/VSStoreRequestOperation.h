/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSStoreRequest, VSFailable, SSRequest;

@interface VSStoreRequestOperation : VSAsyncOperation {

	int _requestCompletionFlag;
	VSStoreRequest* _request;
	VSFailable* _result;
	SSRequest* _storeServicesRequest;

}

@property (nonatomic,retain) VSFailable * result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) SSRequest * storeServicesRequest;              //@synthesize storeServicesRequest=_storeServicesRequest - In the implementation block
@property (nonatomic,copy) VSStoreRequest * request;                        //@synthesize request=_request - In the implementation block
-(void)cancel;
-(VSStoreRequest *)request;
-(VSFailable *)result;
-(void)setRequest:(VSStoreRequest *)arg1 ;
-(void)setResult:(VSFailable *)arg1 ;
-(void)executionDidBegin;
-(BOOL)_isFirstToFinish;
-(void)setStoreServicesRequest:(SSRequest *)arg1 ;
-(SSRequest *)storeServicesRequest;
@end
