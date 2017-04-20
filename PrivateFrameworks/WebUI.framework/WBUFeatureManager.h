/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFeatureManager : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    BOOL  _autoFillAvailable;
    BOOL  _bookmarksAvailable;
    BOOL  _cloudSyncAvailable;
    BOOL  _inMemoryBookmarkChangeTrackingAvailable;
    NSObject<OS_dispatch_queue> * _internalQueue;
    BOOL  _offlineReadingListAvailable;
    BOOL  _readingListAvailable;
}

@property (getter=isAutoFillAvailable, nonatomic, readonly) BOOL autoFillAvailable;
@property (getter=isBookmarksAvailable, nonatomic, readonly) BOOL bookmarksAvailable;
@property (getter=isCloudHistorySyncAvailable, nonatomic, readonly) BOOL cloudHistorySyncAvailable;
@property (getter=isCloudKitBookmarksAvailable, nonatomic, readonly) BOOL cloudKitBookmarksAvailable;
@property (getter=isCloudSyncAvailable, nonatomic, readonly) BOOL cloudSyncAvailable;
@property (getter=isCloudTabsAvailable, nonatomic, readonly) BOOL cloudTabsAvailable;
@property (getter=isCreditCardStorageAvailable, nonatomic, readonly) BOOL creditCardStorageAvailable;
@property (getter=isInMemoryBookmarkChangeTrackingAvailable, nonatomic, readonly) BOOL inMemoryBookmarkChangeTrackingAvailable;
@property (getter=isOfflineReadingListAvailable, nonatomic, readonly) BOOL offlineReadingListAvailable;
@property (getter=isParsecITunesResultsAvailable, nonatomic, readonly) BOOL parsecITunesResultsAvailable;
@property (getter=isReadingListAvailable, nonatomic, readonly) BOOL readingListAvailable;

+ (int)accessLevel;
+ (id)webui_sharedFeatureManager;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (BOOL)_isUsingManagedAppleID;
- (void)_setupAccountStore;
- (void)_updateAppleAccount;
- (void)_updateFeatureAvailabilityByAccessLevel;
- (void)dealloc;
- (id)init;
- (BOOL)isAutoFillAvailable;
- (BOOL)isBookmarksAvailable;
- (BOOL)isCloudHistorySyncAvailable;
- (BOOL)isCloudKitBookmarksAvailable;
- (BOOL)isCloudSyncAvailable;
- (BOOL)isCloudTabsAvailable;
- (BOOL)isCreditCardStorageAvailable;
- (BOOL)isInMemoryBookmarkChangeTrackingAvailable;
- (BOOL)isOfflineReadingListAvailable;
- (BOOL)isParsecITunesResultsAvailable;
- (BOOL)isReadingListAvailable;

@end
