/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding> {

	NSMutableDictionary* _startTimes;
	NSMutableDictionary* _endTimes;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)startTimes;
-(id)endTimes;
-(void)_setStartTime:(double)arg1 forIdentifier:(id)arg2 ;
-(void)_setEndTime:(double)arg1 forIdentifier:(id)arg2 ;
@end
