/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUInstallationConstraintMonitorPhoneCalls : SUInstallationConstraintMonitorBase {
    BOOL  _inSpringBoard;
    TUCallCenter * _queue_callCenter;
    BOOL  _queue_satisfied;
}

- (void)_callStatusChanged;
- (void)_queue_noteOnExistingPhoneCallDidChange:(BOOL)arg1;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 callCenter:(id)arg3 inSpringBoard:(BOOL)arg4 onExistingPhoneCall:(BOOL)arg5;
- (unsigned int)unsatisfiedConstraints;

@end
