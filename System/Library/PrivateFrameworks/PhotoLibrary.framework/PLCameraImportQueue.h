/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLCameraImportQueue : NSObject {

	NSMutableArray* _items;
	unsigned long long _index;

}
-(void)dealloc;
-(id)description;
-(id)items;
-(void)setItems:(id)arg1 ;
-(BOOL)isCompleted;
-(id)initWithItems:(id)arg1 ;
-(void)_removeItem:(id)arg1 ;
-(id)currentItem;
-(id)itemsNotCompleted;
-(id)completedItems;
-(void)didCompleteItem:(id)arg1 ;
@end
