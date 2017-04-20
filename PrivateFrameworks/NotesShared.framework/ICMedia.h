/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICMedia : ICCloudSyncingObject <ICCloudObject>

@property (nonatomic, retain) NSData *assetCryptoInitializationVector;
@property (nonatomic, retain) NSData *assetCryptoTag;
@property (nonatomic, retain) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *filename;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)allMediaInContext:(id)arg1;
+ (id)containerDirectoryURLForMediaWithIdentifier:(id)arg1;
+ (void)deleteMedia:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)exportableContainerDirectoryURLForMediaWithIdentifier:(id)arg1;
+ (id)exportableMediaDirectoryURL;
+ (id)exportableMediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2;
+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (id)mediaDirectoryURL;
+ (id)mediaFileWritingQueue;
+ (id)mediaIdentifiersForAccount:(id)arg1;
+ (id)mediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2;
+ (id)mediaWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)newMediaWithAttachment:(id)arg1 context:(id)arg2;
+ (id)newMediaWithAttachment:(id)arg1 forData:(id)arg2 filename:(id)arg3 forceAsynchronous:(BOOL)arg4 forceSynchronous:(BOOL)arg5 context:(id)arg6 completionBlock:(id /* block */)arg7;
+ (id)newMediaWithAttachment:(id)arg1 forFileWrapper:(id)arg2 context:(id)arg3 completionBlock:(id /* block */)arg4;
+ (id)newMediaWithAttachment:(id)arg1 forURL:(id)arg2 context:(id)arg3 completionBlock:(id /* block */)arg4;
+ (id)newMediaWithAttachment:(id)arg1 forURL:(id)arg2 context:(id)arg3 waitUntilDone:(BOOL)arg4 completionBlock:(id /* block */)arg5;
+ (id)newMediaWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)purgeAllMediaFiles;
+ (void)purgeAllMediaInContext:(id)arg1;
+ (void)purgeMedia:(id)arg1;
+ (void)purgeMediaFilesForIdentifiers:(id)arg1;
+ (void)undeleteMedia:(id)arg1;

- (id)containerDirectoryURL;
- (id)data;
- (id)dataWithoutImageMarkupMetadata:(BOOL)arg1;
- (id)decryptedData;
- (void)deleteExportableMedia;
- (void)deleteFromLocalDatabase;
- (id)encryptedMediaURL;
- (id)exportableContainerDirectoryURL;
- (id)exportableMediaURL;
- (id)exportableMediaURLWithUpdatedFileIfNecessary;
- (id)filename;
- (void)fixBrokenReferences;
- (BOOL)hasAllMandatoryFields;
- (BOOL)hasFile;
- (id)ic_loggingValues;
- (BOOL)isArchivedDirectory;
- (BOOL)isInICloudAccount;
- (BOOL)isValid;
- (BOOL)makeSureExportableMediaDirectoryExists:(id*)arg1;
- (BOOL)makeSureMediaDirectoryExists:(id*)arg1;
- (id)mediaArchiveURL;
- (id)mediaTarArchiveURL;
- (id)mediaURL;
- (void)mergeDataFromRecord:(id)arg1;
- (BOOL)needsToBePushedToCloud;
- (id)newlyCreatedRecord;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentCloudObject;
- (id)parentEncryptableObject;
- (void)prepareForDeletion;
- (id)recordType;
- (id)recordZoneName;
- (void)resetUniqueIdentifier;
- (void)saveAndClearDecryptedData;
- (void)setFilename:(id)arg1;
- (BOOL)shouldFallBackToCheckAllCryptoKeys;
- (BOOL)supportsDeletionByTTL;
- (void)updateFlagToExcludeFromBackup;
- (void)updateFlagToExcludeFromBackupTouchFileIfNecessary:(BOOL)arg1;
- (void)writeData:(id)arg1 forceAsynchronous:(BOOL)arg2 forceSynchronous:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)writeDataFromAsset:(id)arg1 isArchivedDirectory:(BOOL)arg2;
- (void)writeDataFromFileURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)writeDataFromFileURL:(id)arg1 waitUntilDone:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)writeDataFromFileWrapper:(id)arg1 waitUntilDone:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)writeDataFromItemProvider:(id)arg1 checkForMarkupData:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)writeDataWithFileSize:(unsigned long long)arg1 writeBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;

@end
