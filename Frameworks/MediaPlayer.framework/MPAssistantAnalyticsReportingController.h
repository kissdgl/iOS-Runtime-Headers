/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAssistantAnalyticsReportingController : NSObject {
    NSString * _lastSiriReferenceIdentifierWithLikelyToKeepUp;
    NSHashTable * _players;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (id)_init;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)registerPlayer:(id)arg1;
- (void)unregisterPlayer:(id)arg1;

@end
