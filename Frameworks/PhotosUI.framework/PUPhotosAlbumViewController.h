/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate> {
    PUPhotosAlbumViewControllerSpec * __albumSpec;
    BOOL  __hasAccurateCounts;
    BOOL  __isCountingAssetTypes;
    PUPhotosPickerViewController * _activePhotosPickerViewController;
    struct NSObject { Class x1; } * _album;
    PHAssetCollection * _assetCollection;
    struct { 
        BOOL sectionHeadersEnabled; 
    }  _needsUpdateFlags;
}

@property (setter=_setAlbumSpec:, nonatomic, retain) PUPhotosAlbumViewControllerSpec *_albumSpec;
@property (setter=_setHasAccurateCounts:, nonatomic) BOOL _hasAccurateCounts;
@property (setter=_setCountingAssetTypes:, nonatomic) BOOL _isCountingAssetTypes;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *album;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *assetCollectionAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL shouldShowSectionHeaders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_albumSpec;
- (void)_countAssetTypesIfNeeded;
- (id)_globalHeaderTitle;
- (BOOL)_hasAccurateCounts;
- (void)_invalideSectionHeaders;
- (BOOL)_isCountingAssetTypes;
- (void)_setAlbumSpec:(id)arg1;
- (void)_setCountingAssetTypes:(BOOL)arg1;
- (void)_setHasAccurateCounts:(BOOL)arg1;
- (void)_setNeedsUpdate;
- (void)_updateSectionHeadersIfNeeded;
- (struct NSObject { Class x1; }*)album;
- (BOOL)allowSelectAllButton;
- (id)assetCollection;
- (id)assetCollectionAssets;
- (BOOL)canBeginStackCollapseTransition;
- (int)cellFillMode;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (struct CGPoint { float x1; float x2; })contentOffsetForPreheating;
- (void)didTapHeaderView:(id)arg1;
- (id)filterPredicateForAlbum:(struct NSObject { Class x1; }*)arg1;
- (float)globalHeaderHeight;
- (void)handleAddFromAction;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (id)initWithAlbumSpec:(id)arg1;
- (id)initWithSpec:(id)arg1;
- (BOOL)isCameraRoll;
- (BOOL)isTrashBinViewController;
- (id)localizedTitleForAssets:(id)arg1;
- (id)newGridLayout;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (double)sectionedGridLayout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1 existingFetchResult:(id)arg2;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3 existingFetchResults:(id)arg4;
- (void)setSessionInfo:(id)arg1;
- (void)setupScrubber;
- (BOOL)shouldShowSectionHeaders;
- (void)updateLayoutMetrics;
- (BOOL)updateSpec;
- (void)updateTitle;
- (unsigned int)userEventSourceType;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wantsGlobalFooter;

@end
