/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSUndoObject.h>

@interface _NSUndoBeginMark : _NSUndoObject {

	id _groupIdentifier;
	BOOL _isDiscardable;

}
-(BOOL)isBeginMark;
-(BOOL)isDiscardable;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setDiscardable:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(id)groupIdentifier;
@end

