/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNiOSFetchExecution : NSObject
+(id)contactsMatchingPredicate:(id)arg1 sortOrdering:(unsigned)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 addressBook:(void*)arg5 error:(id*)arg6 ;
+(id)contactsMatchingPredicate:(id)arg1 sortOrdering:(unsigned)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 progressiveResults:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
+(void)_extractContacts:(id*)arg1 matchInfo:(id*)arg2 fromBlockResults:(id)arg3 containsNestedResults:(BOOL)arg4 ;
@end

