/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCHSelectionPath.h>

@interface TSCH3DSelectionPath : TSCHSelectionPath {

	Class mSceneObjectClass;
	unsigned long long mStyleIndex;

}

@property (nonatomic,readonly) Class sceneObjectClass; 
@property (nonatomic,readonly) unsigned long long styleIndex; 
+(id)selectionPathWithClass:(Class)arg1 styleIndex:(unsigned long long)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5 ;
+(id)selectionPathWithClass:(Class)arg1 styleIndex:(unsigned long long)arg2 selectionPath:(id)arg3 ;
-(Class)sceneObjectClass;
-(id)initWithClass:(Class)arg1 styleIndex:(unsigned long long)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5 ;
-(unsigned long long)styleIndex;
@end

