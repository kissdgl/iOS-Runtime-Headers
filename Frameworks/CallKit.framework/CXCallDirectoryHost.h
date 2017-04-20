/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryHost : NSObject <CXCallDirectoryManagerDefaultHostProtocol, CXCallDirectoryManagerMaintenanceHostProtocol> {
    <CXCallDirectoryHostDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallDirectoryHostDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (BOOL)_connectionContainsCallDirectoryHostEntitlementCapability:(id)arg1;
- (void)_nsExtensionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)compactStoreWithReply:(id /* block */)arg1;
- (id)delegate;
- (id)delegateQueue;
- (oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)getExtensionsWithReply:(id /* block */)arg1;
- (id)init;
- (void)performDelegateCallback:(id /* block */)arg1;
- (void)prepareStoreIfNecessary;
- (id)queue;
- (oneway void)reloadExtensionWithIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (oneway void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)setQueue:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (oneway void)synchronizeExtensionsWithReply:(id /* block */)arg1;
- (id)xpcListener;

@end
