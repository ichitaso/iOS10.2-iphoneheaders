/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/NanoGlanceSync.assistantBundle/NanoGlanceSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NARWorkspaceInfo, NSArray;

@interface NGSGlanceSyncSnapshot : NSObject {

	NARWorkspaceInfo* _workspaceInfo;
	NSArray* _glances;

}

@property (nonatomic,readonly) NSArray * glances;                             //@synthesize glances=_glances - In the implementation block
@property (nonatomic,readonly) NARWorkspaceInfo * workspaceInfo;              //@synthesize workspaceInfo=_workspaceInfo - In the implementation block
-(id)initWithWorkspaceInfo:(id)arg1 ;
-(id)glanceAfterAnchor:(id)arg1 postAnchor:(id*)arg2 ;
-(BOOL)isSyncAnchorValid:(id)arg1 ;
-(NARWorkspaceInfo *)workspaceInfo;
-(NSArray *)glances;
-(long long)glanceCount;
-(id)validity;
@end

