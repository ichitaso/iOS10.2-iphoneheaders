/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CRVehicleStore : NSObject
+(id)_itemClassKeychainAttributes;
+(id)_identifyingKeychainAttributesForVehicle:(id)arg1 ;
+(void)_addKeychainAttributesForVehicle:(id)arg1 toDictionary:(id)arg2 ;
+(id)_allKeychainAttributesForVehicle:(id)arg1 ;
+(id)_keychainAttributesMatchingQuery:(id)arg1 ;
+(id)_updateKeychainAttributesForVehicle:(id)arg1 ;
+(id)_creationKeychainAttributesForVehicle:(id)arg1 ;
+(id)_preferencesAttributesForVehicle:(id)arg1 ;
+(id)_allPreferencesPairings;
+(BOOL)_addPreferencesPairingForVehicle:(id)arg1 ;
+(BOOL)_addKeychainPairingForVehicle:(id)arg1 ;
+(void)postPairingsDidChangeNotification;
+(BOOL)_removePreferencesPairingForVehicle:(id)arg1 ;
+(BOOL)_removeKeychainPairingForVehicle:(id)arg1 ;
+(id)_keychainItemAttributesForAllVehicles;
+(void)_applyPreferencesAttributes:(id)arg1 toVehicle:(id)arg2 ;
-(void)handleAvailabilityDidChange:(id)arg1 ;
-(id)saveVehicle:(id)arg1 withMergePolicy:(/*^block*/id)arg2 ;
-(id)allStoredVehicles;
-(id)init;
-(void)dealloc;
-(BOOL)removeVehicle:(id)arg1 ;
-(id)saveVehicle:(id)arg1 ;
@end
