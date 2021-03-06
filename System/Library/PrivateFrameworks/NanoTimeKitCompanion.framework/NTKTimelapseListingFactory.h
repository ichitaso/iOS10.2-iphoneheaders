/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSMutableSet;

@interface NTKTimelapseListingFactory : NSObject {

	NSMutableSet* _assetListings;

}
+(id)sharedInstance;
-(void)discardAssets;
-(id)posterImageWithTheme:(unsigned long long)arg1 ;
-(id)_initLibrary;
-(id)listingWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(CLLocationCoordinate2D)arg3 ;
-(id)heroImageWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(CLLocationCoordinate2D)arg3 ;
-(void)setTimelapseListingHasAssets:(id)arg1 ;
@end

