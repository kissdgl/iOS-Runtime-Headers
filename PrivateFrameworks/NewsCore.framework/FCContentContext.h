/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCContentContext : NSObject <FCCKDatabaseDelegate, FCContentContext, FCNetworkReachabilityRequirementObserving> {
    FCAppConfiguration * _appConfiguration;
    FCArticleController * _articleController;
    NSURL * _assetCacheDirectoryURL;
    FCAssetManager * _assetManager;
    NSString * _contentDirectory;
    FCFlintResourceManager * _flintResourceManager;
    FCContentContextInternal * _internalContentContext;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    <FCNetworkReachabilityRequirement> * _supportedCountryNetworkReachabilityRequirement;
    FCTagController * _tagController;
    NSURL * _webArchiveCacheDirectoryURL;
}

@property (nonatomic, readonly) FCAppConfiguration *appConfiguration;
@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic, retain) NSURL *assetCacheDirectoryURL;
@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (nonatomic, copy) NSString *contentDirectory;
@property (nonatomic, readonly, copy) NSString *contentStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (nonatomic, readonly) BOOL hasBeenRateLimited;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) FCContentContextInternal *internalContentContext;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *supportedContentStoreFrontID;
@property (nonatomic, retain) <FCNetworkReachabilityRequirement> *supportedCountryNetworkReachabilityRequirement;
@property (nonatomic, readonly) FCTagController *tagController;
@property (nonatomic, retain) NSURL *webArchiveCacheDirectoryURL;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateReachabilityGivenRequirements;
- (id)appConfiguration;
- (id)articleController;
- (id)assetCacheDirectoryURL;
- (id)assetManager;
- (void)clearCloudKitCaches;
- (id)contentDirectory;
- (id)contentStoreFrontID;
- (void)databaseHasBeenRateLimited:(id)arg1 retryAfter:(double)arg2;
- (void)dealloc;
- (void)enableFlushingWithFlushingThreshold:(unsigned int)arg1;
- (id)flintResourceManager;
- (BOOL)hasBeenRateLimited;
- (id)initWithContentDatabase:(id)arg1 contentContainer:(id)arg2 contentHostDirectory:(id)arg3 contentDirectory:(id)arg4 networkBehaviorMonitor:(id)arg5 setupExcerptURLProtocol:(BOOL)arg6 desiredHeadlineFieldOptions:(unsigned int)arg7 feedUsage:(int)arg8;
- (id)initWithContentHostDirectory:(id)arg1 networkBehaviorMonitor:(id)arg2 desiredHeadlineFieldOptions:(unsigned int)arg3 feedUsage:(int)arg4;
- (id)internalContentContext;
- (id)networkBehaviorMonitor;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)arg1;
- (void)setAssetCacheDirectoryURL:(id)arg1;
- (void)setContentDirectory:(id)arg1;
- (void)setInternalContentContext:(id)arg1;
- (void)setSupportedCountryNetworkReachabilityRequirement:(id)arg1;
- (void)setWebArchiveCacheDirectoryURL:(id)arg1;
- (id)supportedContentStoreFrontID;
- (id)supportedCountryNetworkReachabilityRequirement;
- (id)tagController;
- (id)webArchiveCacheDirectoryURL;

@end
