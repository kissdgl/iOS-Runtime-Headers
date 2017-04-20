/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireETAProvider : GEOETAProvider <GEOPBSessionRequesterDelegate> {
    BOOL  _cancelled;
    id /* block */  _errorHandler;
    id /* block */  _finishedHandler;
    GEORequester * _requester;
    id /* block */  _simpleETARequestFinishedHandler;
    id /* block */  _willSendRequestHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_setFinishedHandler:(id /* block */)arg1;
- (void)_setSimpleETARequestFinishedHandler:(id /* block */)arg1;
- (void)cancelRequest;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterWillSendRequestForEstablishedConnection:(id)arg1 callback:(id /* block */)arg2;
- (void)startRequest:(id)arg1 connectionProperties:(const struct { unsigned int x1; double x2; unsigned int x3; }*)arg2 willSendRequest:(id /* block */)arg3 finished:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)startRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)startSimpleETARequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)updateRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;

@end
