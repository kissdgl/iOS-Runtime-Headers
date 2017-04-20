/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATRemoteTaskOperation : CATTaskOperation {
    CATTaskClient * _client;
    NSNumber * _remotePhase;
    NSError * mClientError;
}

@property (nonatomic, readonly) CATTaskClient *client;
@property (nonatomic, copy) NSNumber *remotePhase;

+ (id)invalidRemoteTaskWithRequest:(id)arg1 error:(id)arg2;
+ (BOOL)isCancelable;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelOperationIfNeeded;
- (id)client;
- (void)clientFailedWithError:(id)arg1;
- (void)fetchProgress;
- (id)initWithRequest:(id)arg1 client:(id)arg2;
- (id)initWithRequest:(id)arg1 clientError:(id)arg2;
- (BOOL)isAsynchronous;
- (void)main;
- (void)operationWillFinish;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)processMessage:(id)arg1;
- (void)processNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (id)remotePhase;
- (void)setRemotePhase:(id)arg1;
- (void)updateCompletedUnitCount:(int)arg1 andTotalUnitCount:(int)arg2;
- (void)updateProgressWithRemoteProgress:(id)arg1;

@end
