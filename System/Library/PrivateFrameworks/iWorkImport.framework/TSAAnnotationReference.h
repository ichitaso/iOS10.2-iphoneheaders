/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKAnnotation;
@interface TSAAnnotationReference : NSObject {

	id<TSKAnnotation> _annotation;
	unsigned long long _pageIndex;

}

@property (nonatomic,retain) id<TSKAnnotation> annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;              //@synthesize pageIndex=_pageIndex - In the implementation block
-(BOOL)referencesAnnotation:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(id<TSKAnnotation>)annotation;
-(void)setAnnotation:(id<TSKAnnotation>)arg1 ;
@end

