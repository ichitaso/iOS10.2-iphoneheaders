/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct shared_ptr<mlcore::LibraryView> {
	LibraryView __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::LibraryView>;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct __CFArray* CFArrayRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFBag* CFBagRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned canShowControlsOverlay : 1;
	unsigned wantsControlsOverlayVis : 1;
	unsigned wantsControlsOverlayAnim : 1;
	unsigned wantsControlsOverlayDisableAutohide : 1;
	unsigned wantsFullscreen : 1;
	unsigned alwaysFullscreen : 1;
	unsigned canAnimateControlsOverlay : 1;
	unsigned autoplayWhenLikelyToKeepUp : 1;
	unsigned disallowsVideoOut : 1;
	unsigned exited : 1;
	unsigned generatingOrientationNotifications : 1;
	unsigned forStreaming : 1;
	unsigned isExternalTransformationActive : 1;
	unsigned controlsVisibleBeforeExternalTransformation : 1;
	unsigned isActive : 1;
	unsigned resigningActive : 1;
	unsigned didResignActive : 1;
	unsigned uiPrepared : 1;
	unsigned isChangingMoviePath : 1;
	unsigned alwaysAllowHidingControlsOverlay : 1;
	unsigned schedulePortraitLoadingIndicator : 1;
	unsigned clientClearedMoviePath : 1;
	unsigned canCommitOverlayChanges : 1;
	unsigned usingDebugTestPath : 1;
	unsigned allowsWirelessPlayback : 1;
	unsigned useHostedWindowWhenFullscreen : 1;
} SCD_Struct_UI8;

typedef struct {
	unsigned identifiers : 1;
} SCD_Struct_MP9;

typedef struct {
	unsigned initialized : 1;
	unsigned position : 1;
	SCD_Struct_MP9 playlist;
	SCD_Struct_MP9 song;
} SCD_Struct_MP10;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_MP11;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_MP12;

typedef struct {
	long long numberOfAvailableSkips;
	long long skipFrequency;
	double skipInterval;
} SCD_Struct_MP13;

typedef struct shared_ptr<mlcore::Query> {
	Query __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::Query>;

typedef struct {
	unsigned initialized : 1;
	unsigned beats1 : 1;
	unsigned name : 1;
	unsigned editorNotes : 1;
	unsigned shortEditorNotes : 1;
	unsigned artwork : 1;
} SCD_Struct_MP15;

typedef struct _MRSystemAppPlaybackQueue* MRSystemAppPlaybackQueueRef;

typedef struct {
	unsigned identifiers : 1;
	unsigned name : 1;
} SCD_Struct_MP17;

typedef struct {
	unsigned initialized : 1;
	unsigned copyrightText : 1;
	unsigned title : 1;
	unsigned trackCount : 1;
	unsigned maximumItemTrackNumber : 1;
	unsigned discCount : 1;
	unsigned hasCleanContent : 1;
	unsigned hasExplicitContent : 1;
	unsigned libraryAdded : 1;
	unsigned keepLocalEnableState : 1;
	unsigned keepLocalManagedStatus : 1;
	unsigned libraryAddEligible : 1;
	unsigned compilation : 1;
	unsigned classical : 1;
	unsigned releaseDate : 1;
	unsigned artwork : 1;
	unsigned year : 1;
	unsigned preorder : 1;
	unsigned editorNotes : 1;
	unsigned shortEditorNotes : 1;
	unsigned volumeNormalization : 1;
	unsigned songPopularity : 1;
	SCD_Struct_MP17 artist;
	SCD_Struct_MP17 genre;
} SCD_Struct_MP18;

typedef struct shared_ptr<mlcore::LocalizedSearchScope> {
	LocalizedSearchScope __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::LocalizedSearchScope>;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct shared_ptr<mlcore::EntityQuery> {
	EntityQuery __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::EntityQuery>;

typedef struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > {
	map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > >;

typedef struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > > {
	vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > >;

typedef struct shared_ptr<mlcore::EntityQueryResult> {
	EntityQueryResult __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::EntityQueryResult>;

typedef struct shared_ptr<mlcore::Library> {
	Library __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::Library>;

typedef struct {
	unsigned initialized : 1;
	unsigned name : 1;
	unsigned trackCount : 1;
	unsigned editorNotes : 1;
	unsigned shortEditorNotes : 1;
	unsigned releaseDate : 1;
	unsigned lastModifiedDate : 1;
	unsigned artwork : 1;
	unsigned editorialArtwork : 1;
	unsigned tracksTiledArtwork : 1;
	unsigned hasCleanContent : 1;
	unsigned hasExplicitContent : 1;
	unsigned type : 1;
	unsigned libraryAdded : 1;
	unsigned keepLocalEnableState : 1;
	unsigned keepLocalManagedStatus : 1;
	unsigned curatorPlaylist : 1;
	unsigned owner : 1;
	unsigned publicPlaylist : 1;
	unsigned visiblePlaylist : 1;
	unsigned subscribed : 1;
	unsigned userEditableComponents : 1;
	unsigned shareURL : 1;
	unsigned shareShortURL : 1;
	unsigned descriptionText : 1;
	unsigned cloudVersionHash : 1;
	SCD_Struct_MP17 curator;
} SCD_Struct_MP27;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct _MROrigin* MROriginRef;

typedef struct {
	unsigned field1[8];
} SCD_Struct_MP30;

typedef struct MPLibraryActiveKeepLocalStatus {
	long long statusType;
	double downloadProgress;
} MPLibraryActiveKeepLocalStatus;

typedef struct {
	unsigned initialized : 1;
	unsigned name : 1;
	unsigned hasBiography : 1;
	unsigned hasSocialPosts : 1;
	unsigned artwork : 1;
	unsigned editorialArtwork : 1;
	SCD_Struct_MP17 genre;
} SCD_Struct_MP32;

typedef struct _compressed_pair<long *, std::__1::allocator<long> > {
	long long __first_;
} compressed_pair<long *, std::__1::allocator<long> >;

typedef struct vector<long, std::__1::allocator<long> > {
	long long __begin_;
	long long __end_;
	compressed_pair<long *, std::__1::allocator<long> > __end_cap_;
} vector<long, std::__1::allocator<long> >;

typedef struct {
	unsigned identifiers : 1;
	unsigned title : 1;
	unsigned releaseDate : 1;
	unsigned year : 1;
	unsigned artist : 1;
} SCD_Struct_MP35;

typedef struct {
	unsigned identifiers : 1;
	unsigned text : 1;
	unsigned hasStoreLyrics : 1;
} SCD_Struct_MP36;

typedef struct {
	unsigned initialized : 1;
	unsigned title : 1;
	unsigned duration : 1;
	unsigned trackNumber : 1;
	unsigned discNumber : 1;
	unsigned grouping : 1;
	unsigned explicit : 1;
	unsigned artistUploadedContent : 1;
	unsigned hasVideo : 1;
	unsigned artwork : 1;
	unsigned copyrightText : 1;
	unsigned keepLocalEnableState : 1;
	unsigned keepLocalManagedStatus : 1;
	unsigned localNetworkFileURL : 1;
	unsigned hasCloudSyncSource : 1;
	unsigned homeSharingAssetAvailable : 1;
	unsigned localFileAsset : 1;
	unsigned libraryAdded : 1;
	unsigned libraryAddEligible : 1;
	unsigned playbackEndpointType : 1;
	unsigned protectedContentSupportStorageFilePath : 1;
	unsigned storeRedownloadParameters : 1;
	unsigned storeAccountIdentifier : 1;
	unsigned shouldRememberBookmarkTime : 1;
	unsigned shouldReportPlayEventsToStore : 1;
	unsigned shouldShowComposer : 1;
	unsigned storeRedownloadable : 1;
	unsigned volumeNormalization : 1;
	unsigned year : 1;
	unsigned userRating : 1;
	unsigned classicalWork : 1;
	unsigned classicalMovement : 1;
	unsigned classicalMovementCount : 1;
	unsigned classicalMovementNumber : 1;
	SCD_Struct_MP35 album;
	SCD_Struct_MP17 artist;
	SCD_Struct_MP17 composer;
	SCD_Struct_MP17 genre;
	SCD_Struct_MP36 lyrics;
} SCD_Struct_MP37;

typedef struct shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > > {
	map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > >;

typedef struct shared_ptr<mlcore::LocalizedSearchQuery> {
	LocalizedSearchQuery __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<mlcore::LocalizedSearchQuery>;

typedef struct _compressed_pair<long long *, std::__1::allocator<long long> > {
	long long __first_;
} compressed_pair<long long *, std::__1::allocator<long long> >;

typedef struct vector<long long, std::__1::allocator<long long> > {
	long long __begin_;
	long long __end_;
	compressed_pair<long long *, std::__1::allocator<long long> > __end_cap_;
} vector<long long, std::__1::allocator<long long> >;

typedef struct _compressed_pair<int *, std::__1::allocator<int> > {
	int __first_;
} compressed_pair<int *, std::__1::allocator<int> >;

typedef struct vector<int, std::__1::allocator<int> > {
	int __begin_;
	int __end_;
	compressed_pair<int *, std::__1::allocator<int> > __end_cap_;
} vector<int, std::__1::allocator<int> >;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned entityOrder : 1;
	unsigned groupingType : 1;
	unsigned staticEntityType : 1;
	unsigned filteringDisabled : 1;
} SCD_Struct_MP45;

typedef struct {
	unsigned initialized : 1;
	unsigned name : 1;
	unsigned shortName : 1;
	unsigned hasSocialPosts : 1;
	unsigned editorNotes : 1;
	unsigned shortEditorNotes : 1;
	unsigned curatorKind : 1;
	unsigned editorialArtwork : 1;
} SCD_Struct_MP46;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > {
	unsigned long long __first_;
} compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> >;

typedef struct vector<unsigned long long, std::__1::allocator<unsigned long long> > {
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > __end_cap_;
} vector<unsigned long long, std::__1::allocator<unsigned long long> >;

typedef struct _compressed_pair<std::__1::pair<long, long> *, std::__1::allocator<std::__1::pair<long, long> > > {
	pair<long, long> __first_;
} compressed_pair<std::__1::pair<long, long> *, std::__1::allocator<std::__1::pair<long, long> > >;

typedef struct vector<std::__1::pair<long, long>, std::__1::allocator<std::__1::pair<long, long> > > {
	pair<long, long> __begin_;
	pair<long, long> __end_;
	compressed_pair<std::__1::pair<long, long> *, std::__1::allocator<std::__1::pair<long, long> > > __end_cap_;
} vector<std::__1::pair<long, long>, std::__1::allocator<std::__1::pair<long, long> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, MPIdentifierSet *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, MPIdentifierSet *>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, MPIdentifierSet *> > > {
	__tree_node<std::__1::__value_type<unsigned long, MPIdentifierSet *>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, MPIdentifierSet *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, MPIdentifierSet *> > >;

typedef struct map<unsigned long, MPIdentifierSet *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, MPIdentifierSet *> > > {
	tree<std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, MPIdentifierSet *> > > __tree_;
} map<unsigned long, MPIdentifierSet *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, MPIdentifierSet *> > >;

typedef struct _MRContentItem* MRContentItemRef;

typedef struct MPLibraryAddStatusObserverConfiguration {
	BOOL isValidContentType;
	BOOL isLibraryAdded;
	BOOL hasCleanContent;
	BOOL hasExplicitContent;
	BOOL isLibraryAddEligible;
} MPLibraryAddStatusObserverConfiguration;

typedef struct _MRMediaRemoteCommandInfo* MRMediaRemoteCommandInfoRef;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MP62;

