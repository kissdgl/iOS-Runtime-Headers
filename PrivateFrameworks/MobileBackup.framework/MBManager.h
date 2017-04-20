/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBManager : NSObject {
    id  _delegate;
}

@property (nonatomic) NSObject<MBManagerDelegate> *delegate;

- (id)_init;
- (BOOL)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6;
- (BOOL)allowiTunesBackup;
- (BOOL)archiveLogsTo:(id)arg1 error:(id*)arg2;
- (id)backupDeviceUUID;
- (id)backupList;
- (id)backupState;
- (void)cancel;
- (BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2;
- (void)cancelRestore;
- (void)clearRestoreSession;
- (BOOL)countCameraRollQuota;
- (BOOL)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2;
- (unsigned int)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2;
- (id)dateOfLastBackup;
- (id)dateOfNextScheduledBackup;
- (id)delegate;
- (BOOL)deleteBackupUDID:(id)arg1 error:(id*)arg2;
- (BOOL)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5;
- (BOOL)discountCameraRollQuota;
- (BOOL)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2;
- (id)domainInfoForName:(id)arg1;
- (id)domainInfoList;
- (BOOL)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6;
- (id)filesForSnapshotID:(unsigned int)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (void)finishRestore;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 activeAppleID:(id*)arg3 error:(id*)arg4;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 error:(id*)arg3;
- (id)getBackupListWithError:(id*)arg1;
- (id)getBackupListWithFiltering:(BOOL)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2;
- (void)insufficientFreeSpaceToRestore;
- (BOOL)isBackupEnabled;
- (BOOL)isBackupEnabledForDomainName:(id)arg1;
- (id)journalForBackupUUID:(id)arg1 error:(id*)arg2;
- (BOOL)mergeSnapshots:(id)arg1 backupUUID:(id)arg2 error:(id*)arg3;
- (unsigned long long)nextBackupSize;
- (id)nextBackupSizeInfo;
- (BOOL)pinSnapshotID:(unsigned int)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (BOOL)prepareForBackgroundRestoreWithError:(id*)arg1;
- (void)prioritizeRestoreFileWithPath:(id)arg1;
- (void)rebootDevice;
- (BOOL)recordRestoreFailure:(id)arg1 error:(id*)arg2;
- (BOOL)removeDomainName:(id)arg1 error:(id*)arg2;
- (id)reservedBackupSizeListWithError:(id*)arg1;
- (BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 context:(id)arg3 error:(id*)arg4;
- (BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 error:(id*)arg3;
- (BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 withQOS:(int)arg3 context:(id)arg4 error:(id*)arg5;
- (BOOL)restoreBookWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (BOOL)restoreBookWithPath:(id)arg1 error:(id*)arg2;
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2;
- (id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)restoreFileExistsWithPath:(id)arg1;
- (void)restoreFileWithPath:(id)arg1;
- (BOOL)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (BOOL)restoreFileWithPath:(id)arg1 error:(id*)arg2;
- (id)restoreFilesForDomain:(id)arg1 error:(id*)arg2;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 error:(id*)arg4;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 error:(id*)arg5;
- (BOOL)restoreFilesWithPaths:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (BOOL)restoreFilesWithPaths:(id)arg1 error:(id*)arg2;
- (id)restoreInfo;
- (id)restoreState;
- (BOOL)restoreSupportsBatching;
- (BOOL)saveKeybagsForBackupUDID:(id)arg1 withError:(id*)arg2;
- (void)setAllowiTunesBackup:(BOOL)arg1;
- (void)setBackupEnabled:(BOOL)arg1;
- (void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setRestoreSessionWithBackupUDID:(id)arg1 snapshotUUID:(id)arg2;
- (void)setSupportsiTunes:(BOOL)arg1;
- (BOOL)setupBackupWithPasscode:(id)arg1 error:(id*)arg2;
- (void)startBackup;
- (BOOL)startBackupWithError:(id*)arg1;
- (void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2;
- (BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)startScanForBundleIDs:(id)arg1 error:(id*)arg2;
- (BOOL)startScanWithError:(id*)arg1;
- (void)syncBackupEnabled;
- (BOOL)unpinSnapshotID:(unsigned int)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (BOOL)unsetLocalBackupPasswordWithError:(id*)arg1;

@end
