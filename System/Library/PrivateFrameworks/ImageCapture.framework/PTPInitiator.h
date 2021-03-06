/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PTPTransport, PTPOperationResponsePacket, PTPEventPacket, NSMutableArray, PTPDeviceInfoDataset, NSString, NSMutableDictionary, PTPWrappedBytes;

@interface PTPInitiator : NSObject {

	PTPTransport* _transport;
	PTPOperationResponsePacket* _response;
	PTPEventPacket* _event;
	unsigned _transactionID;
	unsigned short _operationCode;
	BOOL _responseReceived;
	BOOL _requestPending;
	BOOL _cancelOp;
	unsigned _lastAddedObject;
	id _delegate;
	BOOL _sessionOpen;
	BOOL _needToReopenSession;
	NSMutableArray* _storages;
	PTPDeviceInfoDataset* _deviceInfo;
	NSMutableArray* _eventQueue;
	unsigned short _deviceVendorID;
	unsigned short _deviceProductID;
	NSString* _UUIDString;
	NSString* _deviceSerialNumberString;
	unsigned _estimatedNumOfDownloadableObjects;
	unsigned _numOfDownloadableObjectsPlusFolders;
	unsigned _contentCatalogPercentCompleted;
	NSString* _userAssignedDeviceName;
	BOOL _appleDeviceHasNewFW;
	BOOL _deviceIsPairedWithThisHost;
	BOOL _deviceIsPasscodeLocked;
	BOOL _deviceIsDummyPTPDevice;
	NSMutableDictionary* _arrayOf64BitFileSizes;
	PTPWrappedBytes* _dataForTransaction;
	unsigned long long _excessReceivedDataSize;
	unsigned long long _totalFDFileSize;
	unsigned long long _totalFDReceivedSize;
	unsigned _totalFDReportedProgress;
	double _currentFDNoteTime;
	char* _metadataBuffer;
	unsigned _maxMetadataBufferSize;
	unsigned _maxThumbnails;
	unsigned _maxMetadata;
	unsigned _maxMetadataAndThumbnails;

}
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)handleEvent:(id)arg1 ;
-(void)stop;
-(double)timeOffset;
-(BOOL)start;
-(id)UUIDString;
-(void)handleResponse:(id)arg1 ;
-(void)handleData:(id)arg1 ;
-(void)sentData:(id)arg1 ;
-(void)transportActivated;
-(void)transportDeactivated;
-(void)handleDeviceRemoval;
-(void)handleStartData:(id)arg1 ;
-(void)setContentCatalogPercentCompleted:(unsigned)arg1 ;
-(BOOL)isAccessRestrictedAppleDevice;
-(BOOL)isApplePTPCapable;
-(BOOL)deleteFile:(id)arg1 ;
-(id)initWithHostLocationID:(unsigned)arg1 ;
-(id)refreshAssignedDeviceName;
-(id)userAssignedDeviceName;
-(unsigned short)deviceVendorID;
-(unsigned short)deviceProductID;
-(id)initWithTargetAddress:(id)arg1 targetPort:(unsigned)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6 ;
-(id)initiator;
-(void)readStorages;
-(int)asyncRequestDataOfFiles:(id)arg1 maxSize:(unsigned)arg2 actualSize:(unsigned*)arg3 useBuffer:(char*)arg4 forOperation:(unsigned)arg5 ;
-(id)asyncRetrieveDataOfFiles:(unsigned short)arg1 maxSize:(unsigned)arg2 actualSize:(unsigned*)arg3 useBuffer:(char*)arg4 ;
-(unsigned)getMaxObjects:(unsigned short)arg1 ;
-(void)handleReroutedEvent:(id)arg1 ;
-(id)objectInfo:(unsigned)arg1 ;
-(id)itemForObjectHandle:(unsigned)arg1 ;
-(id)storageForStorageID:(unsigned)arg1 ;
-(unsigned short)saveFile:(id)arg1 to:(id)arg2 ;
-(id)thumbDataFromFile:(id)arg1 maxSize:(unsigned)arg2 actualSize:(unsigned*)arg3 useBuffer:(char*)arg4 ;
-(id)partialDataFromFile:(id)arg1 fromOffset:(unsigned)arg2 maxSize:(unsigned)arg3 actualSize:(unsigned*)arg4 useBuffer:(char*)arg5 ;
-(char*)metadataBuffer;
-(unsigned)maxMetadataBufferSize;
-(id)storageInfo:(unsigned)arg1 ;
-(id)objectInfosForObjectsInStorage:(unsigned)arg1 objectFormatCode:(unsigned)arg2 association:(unsigned)arg3 ;
-(id)objectHandlesInStorage:(unsigned)arg1 objectFormatCode:(unsigned)arg2 association:(unsigned)arg3 ;
-(id)objectInfosForObjectsInStorage64:(unsigned)arg1 objectFormatCode:(unsigned)arg2 association:(unsigned)arg3 ;
-(id)objectHandlesInStorage64:(unsigned)arg1 objectFormatCode:(unsigned)arg2 association:(unsigned)arg3 ;
-(id)sendRequest:(id)arg1 andReceiveData:(id)arg2 excessReceivedDataSize:(unsigned long long*)arg3 timeout:(double)arg4 ;
-(void)processUnhandledEvents;
-(id)sendRequest:(id)arg1 andReceiveData:(id)arg2 maxDataSize:(unsigned)arg3 excessReceivedDataSize:(unsigned long long*)arg4 timeout:(double)arg5 ;
-(id)sendRequest:(id)arg1 excessReceivedDataSize:(unsigned long long*)arg2 timeout:(double)arg3 ;
-(BOOL)allowKeepAwake;
-(id)storageIDs;
-(unsigned long long)objectInfo64BitSize:(unsigned)arg1 ;
-(id)dataFromFile:(id)arg1 maxSize:(unsigned)arg2 actualSize:(unsigned*)arg3 useBuffer:(char*)arg4 ;
-(id)sendRequest:(id)arg1 andSendData:(id)arg2 ;
-(unsigned short)savePartialFileMD5:(id)arg1 fromOffset:(unsigned long long)arg2 size:(unsigned long long)arg3 to:(id)arg4 ;
-(unsigned short)savePartialFile:(id)arg1 fromOffset:(unsigned long long)arg2 size:(unsigned long long)arg3 to:(id)arg4 ;
-(id)deviceDateTime;
-(BOOL)setDevicePropertyValue:(id)arg1 forProperty:(unsigned short)arg2 ;
-(unsigned short)deviceStatus;
-(void)deviceReset;
-(id)deviceSerialNumberString;
-(BOOL)appleDeviceHasNewFW;
-(BOOL)deviceIsPairedWithThisHost;
-(BOOL)deviceIsDummyPTPDevice;
-(unsigned)numOfDownloadableObjectsPlusFolders;
-(int)transportConnectionStatus;
-(void)appendDataBuffer:(void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)waitForResponseWithTimeout:(double)arg1 notifyProgressForFile:(id)arg2 ;
-(void)issueCancelEvent:(unsigned)arg1 ;
-(void)issueCancelRequest:(unsigned)arg1 ;
-(id)devicePropertyDescDatasetForProperty:(unsigned short)arg1 ;
-(id)devicePropertyValueForProperty:(unsigned short)arg1 ;
-(BOOL)resetDevicePropertyValueForProperty:(unsigned short)arg1 ;
-(unsigned)numObjectsInStorage:(unsigned)arg1 objectFormatCode:(unsigned)arg2 association:(unsigned)arg3 ;
-(id)objectFilesystemInfosForObjectsInStorage:(unsigned)arg1 objectFormatCode:(unsigned)arg2 association:(unsigned)arg3 ;
-(BOOL)initiateCapture;
-(BOOL)setDeviceDateTime:(id)arg1 ;
-(BOOL)requestPending;
-(unsigned)contentCatalogPercentCompleted;
-(BOOL)openSession;
-(BOOL)deviceIsPasscodeLocked;
-(id)transport;
-(BOOL)closeSession;
-(id)deviceInfo;
@end

