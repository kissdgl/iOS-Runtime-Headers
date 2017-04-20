/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal * _mediaSelectionOption;
}

@property (getter=isAC3Only, readonly) BOOL AC3Only;
@property (getter=isCC, readonly) BOOL CC;
@property (getter=isSDH, readonly) BOOL SDH;
@property (getter=isAuxiliary, readonly) BOOL auxiliary;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (nonatomic, readonly) NSString *displayName;
@property (getter=isEasyReader, readonly) BOOL easyReader;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (getter=isMain, readonly) BOOL main;
@property (nonatomic, readonly) NSArray *mediaSubTypes;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) BOOL mpIsOnlyAC3;
@property (nonatomic, readonly) BOOL mpIsSDH;
@property (getter=isPlayable, nonatomic, readonly) BOOL playable;
@property (nonatomic, readonly) AVAssetTrack *track;
@property (nonatomic, readonly) int trackID;
@property (nonatomic, readonly) NSString *unicodeLanguageCode;
@property (nonatomic, readonly) NSString *unicodeLanguageIdentifier;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (BOOL)_plistHasOptionIdentifier:(id)arg1;
+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(BOOL)arg4;

- (id)_ancillaryDescription;
- (id)_displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)arg2;
- (id)_groupID;
- (id)_groupMediaCharacteristics;
- (id)_groupMediaType;
- (BOOL)_isAuxiliaryContent;
- (BOOL)_isDesignatedDefault;
- (BOOL)_isMainProgramContent;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(BOOL)arg2;
- (id)_taggedMediaCharacteristics;
- (id)_title;
- (id)_track;
- (id)associatedExtendedLanguageTag;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)associatedPersistentIDs;
- (id)associatedUnicodeLanguageIdentifier;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (id)displayName;
- (id)displayNameWithLocale:(id)arg1;
- (BOOL)displaysNonForcedSubtitles;
- (id)extendedLanguageTag;
- (id)fallbackIDs;
- (id)group;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (id)init;
- (id)initWithGroup:(id)arg1;
- (BOOL)isPlayable;
- (id)languageCode;
- (id)locale;
- (id)mediaCharacteristics;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (id)optionID;
- (id)outOfBandIdentifier;
- (id)outOfBandSource;
- (id)propertyList;
- (id)track;
- (int)trackID;
- (id)unicodeLanguageCode;
- (id)unicodeLanguageIdentifier;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (BOOL)isAC3Only;
- (BOOL)isAuxiliary;
- (BOOL)isCC;
- (BOOL)isEasyReader;
- (BOOL)isMain;
- (BOOL)isSDH;
- (int)languageCompare:(id)arg1;
- (id)localizedDisplayName;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)_languageOptionIdentifier;
- (id)makeNowPlayingInfoLanguageOption;
- (BOOL)mpIsOnlyAC3;
- (BOOL)mpIsSDH;

@end
