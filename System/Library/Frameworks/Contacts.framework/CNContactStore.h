/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNiOSAddressBookDataMapper, CNiOSAddressBook;

@interface CNContactStore : NSObject

@property (nonatomic,readonly) CNiOSAddressBookDataMapper * iOSMapper; 
@property (nonatomic,readonly) CNiOSAddressBook * addressBook; 
@property (nonatomic,readonly) BOOL hasMultipleGroupsOrAccounts; 
+(long long)authorizationStatus;
+(id)contactStore;
+(id)suggestedContactStore;
+(BOOL)authorized;
+(void)initialize;
+(id)storeWithEnvironment:(id)arg1 options:(unsigned long long)arg2 ;
+(Class)storeClassWithIdentifier:(id)arg1 ;
+(id)storeInfoClasses;
+(id)contactIdentifierFromInternalIdentifier:(id)arg1 ;
+(id)storeIdentifierFromContactIdentifier:(id)arg1 ;
+(id)internalIdentifierFromContactIdentifier:(id)arg1 ;
+(BOOL)eraseAllDataAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)eraseAllDataAtLocationWithName:(id)arg1 error:(id*)arg2 ;
+(id)standardLabelsForPropertyWithKey:(id)arg1 ;
+(long long)authorizationStatusForEntityType:(long long)arg1 ;
+(id)storeIdentifier;
+(id)storeWithOptions:(unsigned long long)arg1 ;
-(id)mf_fetchContactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 ;
-(id)_contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 ;
-(id)_cnui_containerForContact:(id)arg1 ;
-(id)_cnui_accountForContact:(id)arg1 ;
-(id)_cnui_policyForContact:(id)arg1 ;
-(id)contactForIdentifier:(id)arg1 ;
-(id)contactForIdentifier:(id)arg1 keysToFetch:(id)arg2 ;
-(id)contactForDestinationId:(id)arg1 keysToFetch:(id)arg2 ;
-(id)contactForDestinationId:(id)arg1 ;
-(id)init;
-(id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(id)meContactIdentifierWithError:(id*)arg1 ;
-(id)contactIdentifiersForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)groupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsSaveRequest:(id)arg1 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(BOOL)registerClientForChangeHistory:(id)arg1 error:(id*)arg2 ;
-(BOOL)unregisterClientForChangeHistory:(id)arg1 error:(id*)arg2 ;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearChangeHistoryForClient:(id)arg1 toSequenceNumber:(long long)arg2 error:(id*)arg3 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3 ;
-(id)identifierWithError:(id*)arg1 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(id)matchingDictionaryForContact:(id)arg1 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1 ;
-(id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(BOOL)arg3 ;
-(id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2 ;
-(id)unifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(id)unifiedMeContactMatchingEmailAddresses:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)_ios_meContactIdentifierWithError:(id*)arg1 ;
-(id)unifiedMeContactMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)executeFetchRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)contactWithMatchingDictionary:(id)arg1 keysToFetch:(id)arg2 ;
-(CNiOSAddressBookDataMapper *)iOSMapper;
-(id)initWithDataLocationName:(id)arg1 ;
-(BOOL)setDefaultContainer:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(id)contactFromPerson:(void*)arg1 mutable:(BOOL)arg2 ;
-(id)_contactFromPersonID:(int)arg1 keysToFetch:(id)arg2 ;
-(id)contactFromPersonID:(int)arg1 ;
-(id)_fetchRequestInfosForEmailOrPhoneForContact:(id)arg1 ;
-(id)_executeFetchRequestsWithInfos:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3 error:(id*)arg4 ;
-(id)contactsMatchingPropertiesOfContact:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3 error:(id*)arg4 ;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)hasMultipleGroupsOrAccounts;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactFromPerson:(void*)arg1 ;
-(id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(id)contactIdentifierFromPersonID:(int)arg1 ;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 ;
-(void*)personFromContact:(id)arg1 ;
-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(CNiOSAddressBook *)addressBook;
-(id)contactFromPersonID:(int)arg1 keysToFetch:(id)arg2 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(BOOL)enumerateContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

