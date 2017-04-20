/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXBackBoardServer : AXServer {
    NSMutableArray * _eventListeners;
    BOOL  _overrideGestureRecognition;
    NSMutableArray * _zoomAttributeListeners;
}

@property (nonatomic) BOOL inPreboardMode;
@property (nonatomic) BOOL invertColorsEnabled;
@property (nonatomic) BOOL sessionIsLoginSession;

+ (id)server;

- (void)_didConnectToServer;
- (id)_handleEventListener:(id)arg1;
- (id)_handleZoomAttributesListener:(id)arg1;
- (id)_serviceName;
- (BOOL)_shouldDispatchLocally;
- (id)_springboardParametersForGuidedAccessAvailability;
- (void)_willClearServer;
- (int)accessibilityUIServicePID;
- (BOOL)adaptationEnabled;
- (void)adjustSystemZoom:(int)arg1;
- (id)backboardServiceInstance;
- (BOOL)blueLightStatusEnabled;
- (BOOL)brightnessFiltersEnabled;
- (unsigned int)contextIdForPosition:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)contextIdHostingContextId:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromContextId:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromContextId:(unsigned int)arg2 toContextId:(unsigned int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toContextId:(unsigned int)arg2;
- (void)dealloc;
- (void)disableBrightnessFilters;
- (unsigned int)guidedAccessAvailability;
- (id)guidedAccessIgnoredRegions;
- (void)homeClickSwallowedForGuidedAccess;
- (BOOL)inPreboardMode;
- (id)init;
- (BOOL)invertColorsEnabled;
- (BOOL)isGuidedAccessActive;
- (BOOL)isGuidedAccessInWorkspace;
- (BOOL)isGuidedAccessSelfLockedToApp:(id)arg1;
- (BOOL)isGuidedAccessUnmanagedSelfLocked;
- (void)jetsamThirdPartyApps;
- (BOOL)loadGAXBundleForUnmanagedASAM;
- (id)performGuidedAccessAutomationCommand:(id)arg1 error:(id*)arg2;
- (void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3;
- (void)postEvent:(id)arg1 systemEvent:(BOOL)arg2;
- (void)registerAccessibilityUIServicePID:(int)arg1;
- (void)registerAssistiveTouchPID:(int)arg1;
- (void)registerGestureConflictWithZoom:(id)arg1;
- (void)registerSiriViewServicePID:(int)arg1;
- (void)registerZoomAttributesChangeHandler:(id /* block */)arg1;
- (void)requestGuidedAccessSession:(BOOL)arg1 appID:(id)arg2 completion:(id /* block */)arg3;
- (void)resetAccessibilityFeatures;
- (void)restoreCachedBrightnessFilters;
- (BOOL)sessionIsLoginSession;
- (void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3;
- (void)setCapsLockLightOn:(BOOL)arg1;
- (void)setHearingAidControlIsVisible:(BOOL)arg1;
- (void)setInPreboardMode:(BOOL)arg1;
- (void)setInvertColorsEnabled:(BOOL)arg1;
- (void)setLockScreenDimTimerEnabled:(BOOL)arg1;
- (void)setSessionIsLoginSession:(BOOL)arg1;
- (void)setSwitchControlRendersDeviceUnusable:(BOOL)arg1;
- (void)setVoiceOverItemChooserVisible:(BOOL)arg1;
- (void)setZoomInitialFocusRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromContext:(unsigned int)arg2;
- (BOOL)supportsAccessibilityDisplayFilters;
- (BOOL)supportsAdaptation;
- (BOOL)supportsBlueLightReduction;
- (void)toggleGuidedAccess;
- (BOOL)tripleClickHomeButtonPress;
- (void)userEventOccurred;
- (void)zoomAttributesChanged:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })zoomInitialFocusRectWithQueryingContext:(unsigned int)arg1;

@end
