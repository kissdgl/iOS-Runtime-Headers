/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBChannelMuteUnmute : PBCodable <NSCopying> {
    NSString * _articleId;
    NSData * _articleSessionId;
    NSString * _articleSessionIdDeprecated;
    NSData * _articleViewingSessionId;
    NSString * _articleViewingSessionIdDeprecated;
    NSString * _campaignId;
    NSString * _campaignType;
    NSString * _channelMuteUnmuteFeedId;
    NSString * _creativeId;
    int  _feedType;
    NSData * _feedViewExposureId;
    NSString * _feedViewExposureIdDeprecated;
    int  _groupType;
    struct { 
        unsigned int feedType : 1; 
        unsigned int groupType : 1; 
        unsigned int muteUnmuteLocation : 1; 
        unsigned int userAction : 1; 
        unsigned int isUserSubscribedToFeed : 1; 
    }  _has;
    BOOL  _isUserSubscribedToFeed;
    int  _muteUnmuteLocation;
    NSString * _referencedArticleId;
    NSString * _sourceChannelId;
    int  _userAction;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleSessionId;
@property (nonatomic, retain) NSString *articleSessionIdDeprecated;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic, retain) NSString *articleViewingSessionIdDeprecated;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic, retain) NSString *channelMuteUnmuteFeedId;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, retain) NSString *feedViewExposureIdDeprecated;
@property (nonatomic) int groupType;
@property (nonatomic, readonly) BOOL hasArticleId;
@property (nonatomic, readonly) BOOL hasArticleSessionId;
@property (nonatomic, readonly) BOOL hasArticleSessionIdDeprecated;
@property (nonatomic, readonly) BOOL hasArticleViewingSessionId;
@property (nonatomic, readonly) BOOL hasArticleViewingSessionIdDeprecated;
@property (nonatomic, readonly) BOOL hasCampaignId;
@property (nonatomic, readonly) BOOL hasCampaignType;
@property (nonatomic, readonly) BOOL hasChannelMuteUnmuteFeedId;
@property (nonatomic, readonly) BOOL hasCreativeId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic, readonly) BOOL hasFeedViewExposureId;
@property (nonatomic, readonly) BOOL hasFeedViewExposureIdDeprecated;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasMuteUnmuteLocation;
@property (nonatomic, readonly) BOOL hasReferencedArticleId;
@property (nonatomic, readonly) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (nonatomic) int muteUnmuteLocation;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic) int userAction;

- (void).cxx_destruct;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (id)articleId;
- (id)articleSessionId;
- (id)articleSessionIdDeprecated;
- (id)articleViewingSessionId;
- (id)articleViewingSessionIdDeprecated;
- (id)campaignId;
- (id)campaignType;
- (id)channelMuteUnmuteFeedId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (id)feedViewExposureIdDeprecated;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (BOOL)hasArticleId;
- (BOOL)hasArticleSessionId;
- (BOOL)hasArticleSessionIdDeprecated;
- (BOOL)hasArticleViewingSessionId;
- (BOOL)hasArticleViewingSessionIdDeprecated;
- (BOOL)hasCampaignId;
- (BOOL)hasCampaignType;
- (BOOL)hasChannelMuteUnmuteFeedId;
- (BOOL)hasCreativeId;
- (BOOL)hasFeedType;
- (BOOL)hasFeedViewExposureId;
- (BOOL)hasFeedViewExposureIdDeprecated;
- (BOOL)hasGroupType;
- (BOOL)hasIsUserSubscribedToFeed;
- (BOOL)hasMuteUnmuteLocation;
- (BOOL)hasReferencedArticleId;
- (BOOL)hasSourceChannelId;
- (BOOL)hasUserAction;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUserSubscribedToFeed;
- (void)mergeFrom:(id)arg1;
- (int)muteUnmuteLocation;
- (BOOL)readFrom:(id)arg1;
- (id)referencedArticleId;
- (void)setArticleId:(id)arg1;
- (void)setArticleSessionId:(id)arg1;
- (void)setArticleSessionIdDeprecated:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setArticleViewingSessionIdDeprecated:(id)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setChannelMuteUnmuteFeedId:(id)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setFeedViewExposureIdDeprecated:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasFeedType:(BOOL)arg1;
- (void)setHasGroupType:(BOOL)arg1;
- (void)setHasIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setHasMuteUnmuteLocation:(BOOL)arg1;
- (void)setHasUserAction:(BOOL)arg1;
- (void)setIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setMuteUnmuteLocation:(int)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setUserAction:(int)arg1;
- (id)sourceChannelId;
- (int)userAction;
- (void)writeTo:(id)arg1;

@end
