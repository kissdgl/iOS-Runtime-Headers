/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBNotificationCenterDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isBatteryWidgetAlwaysAvailable, nonatomic, readonly) BOOL batteryWidgetAlwaysAvailable;
@property (nonatomic) BOOL didPurgeNonASTCSnapshots;
@property (nonatomic) BOOL didPurgeNonCAMLSnapshots;
@property (nonatomic, readonly) BOOL showInternalWidgets;
@property (nonatomic, readonly) BOOL showWidgetSnapshotDebugLabels;
@property (nonatomic, readonly) BOOL useDuetRecommendations;
@property (getter=isWidgetLoggingEnabled, nonatomic, readonly) BOOL widgetLoggingEnabled;
@property (getter=isWidgetSnapshottingEnabled, nonatomic, readonly) BOOL widgetSnapshottingEnabled;

- (void)_bindAndRegisterDefaults;

@end
