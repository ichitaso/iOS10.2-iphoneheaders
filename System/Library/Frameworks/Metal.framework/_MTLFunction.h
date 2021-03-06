/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLFunctionSPI.h>

@protocol MTLDevice, OS_dispatch_data;
@class NSString, NSArray, NSDictionary, NSObject;

@interface _MTLFunction : NSObject <MTLFunctionSPI> {

	id<MTLDevice> _device;
	unsigned long long _functionType;
	NSString* _name;
	MTLLibraryData* _libraryData;
	id _vendorPrivate;
	NSArray* _vertexAttributes;
	NSArray* _functionConstants;
	NSDictionary* _functionConstantDictionary;
	NSObject*<OS_dispatch_data> _constantData;
	NSString* _label;

}

@property (readonly) id<MTLDevice> device;                                    //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long functionType;                         //@synthesize functionType=_functionType - In the implementation block
@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) MTLLibraryData* libraryData;                             //@synthesize libraryData=_libraryData - In the implementation block
@property (copy) NSString * filePath; 
@property (assign) long long lineNumber; 
@property (readonly) unsigned char bitcodeType; 
@property (readonly) id vendorPrivate;                                        //@synthesize vendorPrivate=_vendorPrivate - In the implementation block
@property (readonly) unsigned long long bitCodeOffset; 
@property (assign) NSArray * vertexAttributes; 
@property (assign) NSArray * functionConstants; 
@property (readonly) NSObject*<OS_dispatch_data> constantData; 
@property (readonly) NSObject*<OS_dispatch_data> functionInputs; 
@property (readonly) BOOL needsFunctionConstantValues; 
@property (copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long patchType; 
@property (readonly) long long patchControlPointCount; 
@property (readonly) NSArray * stageInputAttributes; 
@property (readonly) NSDictionary * functionConstantsDictionary; 
-(NSObject*<OS_dispatch_data>)constantData;
-(MTLLibraryData*)libraryData;
-(unsigned long long)bitCodeFileSize;
-(const SCD_Struct_MT32*)bitCodeHash;
-(unsigned long long)functionType;
-(id)newSpecializedFunctionWithConstants:(id)arg1 error:(id*)arg2 ;
-(void)newSpecializedFunctionWithConstants:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)functionConstantsDictionary;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(MTLLibraryData*)arg3 device:(id)arg4 ;
-(void)setVendorPrivate:(id)arg1 ;
-(id)vendorPrivate;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
@end

