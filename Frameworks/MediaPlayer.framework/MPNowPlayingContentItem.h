/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingContentItem : MPContentItem {
    <MPNowPlayingContentItemDescriptionDataSource> * _descriptionDataSource;
    <MPNowPlayingContentItemLanguageOptionDataSource> * _languageOptionDataSource;
    <MPNowPlayingContentItemLyricsDataSource> * _lyricsDataSource;
}

@property (nonatomic, copy) NSString *albumArtistName;
@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSString *collectionIdentifier;
@property (nonatomic, copy) NSString *directorName;
@property (nonatomic) double duration;
@property (nonatomic) int episodeNumber;
@property (getter=isExplicitItem, nonatomic) BOOL explicitItem;
@property (nonatomic, copy) NSString *localizedContentRating;
@property (nonatomic) unsigned int numberOfChildren;
@property (nonatomic) int playCount;
@property (nonatomic, copy) NSString *profileIdentifier;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic) int seasonNumber;
@property (nonatomic, copy) NSString *trackArtistName;

- (void).cxx_destruct;
- (unsigned int)_convertFromEditingStyleFlags:(int)arg1;
- (unsigned int)_convertFromPlaylistType:(int)arg1;
- (unsigned int)_convertFromRadioStationType:(int)arg1;
- (int)_convertToEditingStyleFlags:(unsigned int)arg1;
- (int)_convertToPlaylistType:(unsigned int)arg1;
- (int)_convertToRadioStationType:(unsigned int)arg1;
- (id)albumArtistName;
- (id)albumName;
- (id)availableLanguageOptions;
- (id)collectionIdentifier;
- (id)currentLanguageOptions;
- (id)descriptionDataSource;
- (id)directorName;
- (double)duration;
- (int)editingStyleFlags;
- (int)episodeNumber;
- (id)info;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isExplicitItem;
- (id)languageOptionDataSource;
- (id)localizedContentRating;
- (id)lyrics;
- (id)lyricsDataSource;
- (unsigned int)numberOfChildren;
- (int)playCount;
- (int)playlistType;
- (id)profileIdentifier;
- (int)radioStationType;
- (id)releaseDate;
- (int)seasonNumber;
- (id)sections;
- (id)seriesName;
- (void)setAlbumArtistName:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setCurrentLanguageOptions:(id)arg1;
- (void)setDescriptionDataSource:(id)arg1;
- (void)setDirectorName:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEditingStyleFlags:(int)arg1;
- (void)setEpisodeNumber:(int)arg1;
- (void)setExplicitItem:(BOOL)arg1;
- (void)setInfo:(id)arg1;
- (void)setLanguageOptionDataSource:(id)arg1;
- (void)setLocalizedContentRating:(id)arg1;
- (void)setLyrics:(id)arg1;
- (void)setLyricsDataSource:(id)arg1;
- (void)setNumberOfChildren:(unsigned int)arg1;
- (void)setPlayCount:(int)arg1;
- (void)setPlaylistType:(int)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setRadioStationType:(int)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSeasonNumber:(int)arg1;
- (void)setSections:(id)arg1;
- (void)setSeriesName:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTrackArtistName:(id)arg1;
- (double)startTime;
- (id)trackArtistName;

@end
