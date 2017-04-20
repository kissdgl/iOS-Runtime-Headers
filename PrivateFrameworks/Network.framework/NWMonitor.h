/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWMonitor : NSObject <NSURLSessionTaskDelegate> {
    NWNetworkDescription * _bestAvailableNetworkDescription;
    NWEndpoint * _endpoint;
    unsigned int  _interfaceIndex;
    NSURL * _lastProbeURL;
    NSUUID * _lastProbeUUID;
    unsigned int  _mID;
    NSArray * _networkDescriptionArray;
    NWParameters * _parameters;
    NWPathEvaluator * _pathEvaluator;
    int  _status;
}

@property (retain) NWNetworkDescription *bestAvailableNetworkDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NWEndpoint *endpoint;
@property (readonly) unsigned int hash;
@property unsigned int interfaceIndex;
@property (retain) NSURL *lastProbeURL;
@property (retain) NSUUID *lastProbeUUID;
@property unsigned int mID;
@property (retain) NSArray *networkDescriptionArray;
@property (retain) NWParameters *parameters;
@property (retain) NWPathEvaluator *pathEvaluator;
@property (nonatomic, readonly) NSString *privateDescription;
@property int status;
@property (readonly) Class superclass;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)copySavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (void)initialize;
+ (id)mainOperationQueue;
+ (id)monitorWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (id)monitorWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (id)queue;
+ (void)saveMonitor:(id)arg1;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)bestAvailableNetworkDescription;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)endpoint;
- (void)evaluateStartingAtIndex:(unsigned int)arg1 probeUUID:(id)arg2 probeWasSuccessful:(BOOL)arg3;
- (unsigned int)hash;
- (unsigned int)interfaceIndex;
- (BOOL)isEqual:(id)arg1;
- (id)lastProbeURL;
- (id)lastProbeUUID;
- (unsigned int)mID;
- (BOOL)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (id)networkDescriptionArray;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)parameters;
- (id)pathEvaluator;
- (id)privateDescription;
- (void)setBestAvailableNetworkDescription:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setInterfaceIndex:(unsigned int)arg1;
- (void)setLastProbeURL:(id)arg1;
- (void)setLastProbeUUID:(id)arg1;
- (void)setMID:(unsigned int)arg1;
- (void)setNetworkDescriptionArray:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setPathEvaluator:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
