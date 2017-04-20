/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCloudSyncingObject : NSManagedObject <ICCloudObject, ICLoggable> {
    NSMutableDictionary * _decryptedValues;
    BOOL  mergingUnappliedEncryptedRecord;
    BOOL  needsToLoadDecryptedValues;
}

@property (nonatomic, retain) ICCloudState *cloudState;
@property (nonatomic, retain) NSData *cryptoInitializationVector;
@property (nonatomic) long long cryptoIterationCount;
@property (nonatomic, retain) NSData *cryptoSalt;
@property (nonatomic, retain) NSData *cryptoTag;
@property (nonatomic, retain) NSData *cryptoWrappedKey;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *decryptedValues;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *encryptedValuesJSON;
@property int failedToSyncCount;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) BOOL isPasswordProtected;
@property (nonatomic, readonly) BOOL isUnsupported;
@property (nonatomic) BOOL markedForDeletion;
@property (getter=isMergingUnappliedEncryptedRecord, nonatomic) BOOL mergingUnappliedEncryptedRecord;
@property (nonatomic) long long minimumSupportedNotesVersion;
@property (nonatomic) BOOL needsInitialFetchFromCloud;
@property (nonatomic) BOOL needsToBeFetchedFromCloud;
@property (nonatomic) BOOL needsToLoadDecryptedValues;
@property (nonatomic) BOOL needsToSaveUserSpecificRecord;
@property int numberOfPushAttemptsToWaitCount;
@property (nonatomic, retain) NSString *passwordHint;
@property (nonatomic, retain) NSString *primitiveZoneOwnerName;
@property (nonatomic, retain) CKRecord *serverRecord;
@property (nonatomic, retain) CKShare *serverShare;
@property (nonatomic, readonly) BOOL shouldBeIgnoredForSync;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *unappliedEncryptedRecord;
@property (nonatomic, retain) CKRecord *userSpecificServerRecord;
@property (nonatomic, retain) NSString *zoneOwnerName;

+ (id)allCloudObjectsInContext:(id)arg1;
+ (void)applicationWillTerminate:(id)arg1;
+ (id)assetForData:(id)arg1;
+ (id)cloudObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)currentNotesVersion;
+ (void)deleteAllTemporaryAssetFilesForAllObjects;
+ (void)deleteTemporaryAssetFilesForOperation:(id)arg1;
+ (void)deleteTemporaryFilesForAsset:(id)arg1;
+ (id)deletedByThisDeviceOperationQueue;
+ (id)deletedByThisDeviceSet;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)failedToSyncCountsByIdentifier;
+ (id)failureCountQueue;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingCloudAccount;
+ (id)keyPathsForValuesAffectingIsSharedReadOnly;
+ (id)keyPathsForValuesAffectingIsSharedViaICloud;
+ (id)keyPathsForValuesAffectingNeedsToBeDeletedFromCloud;
+ (id)keyPathsForValuesAffectingNeedsToBePushedToCloud;
+ (id)keyPathsForValuesAffectingServerShareCheckingParent;
+ (id)keyPathsForValuesAffectingZoneOwnerName;
+ (BOOL)needsToReFetchServerRecordValue:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)newObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newPlaceholderObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)numberOfPushAttemptsToWaitByIdentifier;
+ (id)objectWithRecordID:(id)arg1 context:(id)arg2;
+ (void)resetAllDeletedByThisDeviceProperties;
+ (BOOL)supportsUserSpecificRecords;
+ (id)temporaryAssetDirectoryURL;
+ (id)temporaryAssets;
+ (id)versionsByOperationQueue;
+ (id)versionsByRecordIDByOperation;

- (void).cxx_destruct;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (BOOL)canBeSharedViaICloud;
- (id)childCloudObjects;
- (void)clearChangeCount;
- (void)clearServerRecord;
- (id)cloudAccount;
- (id)cryptoMasterKey;
- (id)cryptoPassphraseVerifier;
- (int)databaseScope;
- (void)decrementFailureCounts;
- (void)decryptAndMergeEncryptedJSON:(id)arg1;
- (id)decryptedValueForKey:(id)arg1;
- (id)decryptedValues;
- (void)deleteChangeTokensAndReSync;
- (void)deleteFromLocalDatabase;
- (BOOL)deletedByThisDevice;
- (void)didAcceptShare:(id)arg1;
- (void)didDeleteUserSpecificRecordID:(id)arg1;
- (void)didFailToSaveUserSpecificRecord:(id)arg1 error:(id)arg2;
- (void)didFetchUserSpecificRecord:(id)arg1;
- (void)didSaveUserSpecificRecord:(id)arg1;
- (int)failedToSyncCount;
- (void)fixBrokenReferences;
- (BOOL)hasAllMandatoryFields;
- (BOOL)hasSuccessfullyPushedLatestVersionToCloud;
- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;
- (void)incrementFailureCounts;
- (void)initializeCryptoProperties;
- (void)initializeCryptoPropertiesFromObject:(id)arg1;
- (BOOL)isDeletable;
- (BOOL)isEncryptableKeyBinaryData:(id)arg1;
- (BOOL)isInCloud;
- (BOOL)isInICloudAccount;
- (BOOL)isMergingUnappliedEncryptedRecord;
- (BOOL)isOwnedByCurrentUser;
- (long long)isPushingSameOrLaterThanVersion:(long long)arg1;
- (BOOL)isSharedReadOnly;
- (BOOL)isSharedRootObject;
- (BOOL)isSharedViaICloud;
- (BOOL)isUnsupported;
- (BOOL)isValidObject;
- (void)loadDecryptedValuesIfNecessary;
- (id)loggingDescription;
- (void)markForDeletion;
- (void)mergeCryptoTagAndInitializationVectorFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1;
- (void)mergeDataFromUserSpecificRecord:(id)arg1;
- (id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)mergeUnappliedEncryptedRecord;
- (BOOL)needsToBeDeletedFromCloud;
- (BOOL)needsToBePushedToCloud;
- (BOOL)needsToDeleteShare;
- (BOOL)needsToFetchAfterServerRecordChanged:(id)arg1;
- (BOOL)needsToLoadDecryptedValues;
- (id)newlyCreatedRecord;
- (id)newlyCreatedUserSpecificRecord;
- (int)numberOfPushAttemptsToWaitCount;
- (void)objectFailedToBePushedToCloudWithOperation:(id)arg1 record:(id)arg2 error:(id)arg3;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedButDoesNotExistInCloud;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
- (void)objectWillBePushedToCloudWithOperation:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentCloudObject;
- (id)parentEncryptableObject;
- (id)primitiveValueForEncryptableKey:(id)arg1;
- (id)recordID;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (void)resetFailureCounts;
- (void)resetUniqueIdentifier;
- (void)saveAndClearDecryptedData;
- (void)saveAndClearDecryptedDataIfNecessary;
- (void)saveEncryptedJSON;
- (id)serverShareCheckingParent;
- (void)setCryptoInitializationVector:(id)arg1;
- (void)setCryptoMasterKey:(id)arg1;
- (void)setCryptoTag:(id)arg1;
- (void)setDecryptedValue:(id)arg1 forKey:(id)arg2;
- (void)setDeletedByThisDevice:(BOOL)arg1;
- (void)setFailedToSyncCount:(int)arg1;
- (void)setInCloud:(BOOL)arg1;
- (void)setMergingUnappliedEncryptedRecord:(BOOL)arg1;
- (void)setNeedsToBeFetchedFromCloud:(BOOL)arg1;
- (void)setNeedsToLoadDecryptedValues:(BOOL)arg1;
- (void)setNumberOfPushAttemptsToWaitCount:(int)arg1;
- (void)setPrimitiveValue:(id)arg1 forEncryptableKey:(id)arg2;
- (void)setServerRecord:(id)arg1;
- (void)setServerShareIfNewer:(id)arg1;
- (void)setValue:(id)arg1 forEncryptableKey:(id)arg2;
- (void)setVersion:(long long)arg1 forOperation:(id)arg2;
- (id)shareTitle;
- (id)shareType;
- (id)shortLoggingDescription;
- (BOOL)shouldBeDeletedFromLocalDatabase;
- (BOOL)shouldBeIgnoredForSync;
- (BOOL)shouldFallBackToCheckAllCryptoKeys;
- (BOOL)supportsDeletionByTTL;
- (BOOL)supportsEncryptedValuesDictionary;
- (void)unmarkForDeletion;
- (void)updateChangeCount;
- (void)updateChangeCountsForUnsavedParentReferences;
- (void)updateParentReferenceIfNecessary;
- (id)userSpecificRecordID;
- (id)userSpecificRecordType;
- (BOOL)validateIdentifier:(inout id*)arg1 error:(out id*)arg2;
- (id)valueForEncryptableKey:(id)arg1;
- (long long)versionForOperation:(id)arg1;
- (BOOL)wantsUserSpecificRecord;
- (id)zoneOwnerName;

@end
