/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing> {
    NSMapTable * _assetHandles;
    NSObject<OS_dispatch_queue> * _assetHandlesQueue;
    FCAssetStore * _assetStore;
    FCCacheCoordinator * _cacheCoordinator;
    NSURL * _directoryURLForCachedAssets;
    BOOL  _flushUnusedAssets;
    FCKeyValueStore * _keyValueStore;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
}

@property (nonatomic, retain) NSMapTable *assetHandles;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetHandlesQueue;
@property (nonatomic, retain) FCAssetStore *assetStore;
@property (nonatomic, retain) FCCacheCoordinator *cacheCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *directoryURLForCachedAssets;
@property (nonatomic) BOOL flushUnusedAssets;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) FCKeyValueStore *keyValueStore;
@property (nonatomic, retain) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetKeyForRemoteURL:(id)arg1;
- (id)assetHandleForRemoteURL:(id)arg1 lifetimeHint:(int)arg2;
- (id)assetHandleForRemoteURL:(id)arg1 lifetimeHint:(int)arg2 transformer:(id)arg3;
- (id)assetHandles;
- (id)assetHandlesQueue;
- (id)assetStore;
- (id)cacheCoordinator;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)directoryURLForCachedAssets;
- (void)enableFlushingWithFlushingThreshold:(unsigned int)arg1;
- (BOOL)flushUnusedAssets;
- (id)init;
- (id)initWithName:(id)arg1 directory:(id)arg2 networkBehaviorMonitor:(id)arg3;
- (id)keyValueStore;
- (id)networkBehaviorMonitor;
- (id)operationToFetchFileForAssetHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)setAssetHandles:(id)arg1;
- (void)setAssetHandlesQueue:(id)arg1;
- (void)setAssetStore:(id)arg1;
- (void)setCacheCoordinator:(id)arg1;
- (void)setFlushUnusedAssets:(BOOL)arg1;
- (void)setKeyValueStore:(id)arg1;
- (void)setNetworkBehaviorMonitor:(id)arg1;

@end
