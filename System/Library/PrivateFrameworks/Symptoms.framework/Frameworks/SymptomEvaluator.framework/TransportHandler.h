/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class ReporterFilter;

@interface TransportHandler : NSObject {

	transport_connection_sRef _connection;
	unsigned long long _connectionId;
	/*function pointer*/void* _writeFn;
	unsigned _ackId;
	BOOL _readOutstanding;
	BOOL _filterUpdateOutstanding;
	BOOL _disabled;
	unsigned _reporterId;
	const char* _reporterName;
	unsigned long long _pid;
	const char* _processName;
	const char* _applicationId;
	const char* _bundleId;
	ReporterFilter* _reporterFilter;
	int _reporterVersion;

}
+(void)initialize;
+(void)updateFilters:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)disconnect;
-(void)connect:(transport_connection_sRef)arg1 id:(unsigned long long)arg2 writefn:(/*function pointer*/void*)arg3 pid:(unsigned long long)arg4 name:(char*)arg5 bundleId:(const char*)arg6 ;
-(void)receivePayload:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)startRead;
-(void)_sendFilterUpdate;
-(void)didReceiveEvent:(id)arg1 ;
-(void)_sendAck:(unsigned)arg1 ;
@end
