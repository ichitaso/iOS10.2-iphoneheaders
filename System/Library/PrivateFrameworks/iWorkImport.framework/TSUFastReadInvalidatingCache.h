/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition;

@interface TSUFastReadInvalidatingCache : NSObject {

	/*^block*/id mGenerator;
	A@ mValue;
	Aq mReaderCount;
	A@ mToDispose;
	BOOL mReentrant;
	NSCondition* mCondition;
	BOOL mIsGenerating;

}
-(void)dealloc;
-(void)invalidate;
-(id)value;
-(void)p_setValue:(id)arg1 ;
-(id)initForReentrant:(BOOL)arg1 withGenerator:(/*^block*/id)arg2 ;
@end

