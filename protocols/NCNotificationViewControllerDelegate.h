/* Generated by RuntimeBrowser.
 */

@protocol NCNotificationViewControllerDelegate <NSObject>

@required

- (void)notificationViewController:(void *)arg1 executeAction:(void *)arg2 withParameters:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NCNotificationViewController *, NCNotificationAction *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)notificationViewController:(void *)arg1 requestPermissionToExecuteAction:(void *)arg2 withParameters:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NCNotificationViewController *, NCNotificationAction *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*

@optional

- (UIView *)customBackgroundViewForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)longLookWillDismissForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)longLookWillPresentForNotificationViewController:(NCNotificationViewController *)arg1;
- (MTMaterialSettings *)materialSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })notificationViewController:(NCNotificationViewController *)arg1 convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toLocalWindowSpaceFromView:(UIView *)arg3;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didCommitToLongLookPresentation:(BOOL)arg2 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didCommitToShortLookPresentation:(BOOL)arg2 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didDismissLongLook:(BOOL)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didDismissShortLook:(BOOL)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didPresentLongLook:(BOOL)arg2;
- (UIViewController *)notificationViewController:(NCNotificationViewController *)arg1 preferredViewControllerForPresentingFromViewController:(UIViewController *)arg2;
- (void)notificationViewController:(void *)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: NCNotificationViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (BOOL)notificationViewController:(NCNotificationViewController *)arg1 suggestsDismissingShortLookWithSource:(id)arg2;
- (int)notificationViewControllerDateFormatStyle:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerDidEndUserInteraction:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerIsReadyToBePresented:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldAllowInteractionGesture:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldBlurShortLook:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldPan:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(NCNotificationViewController *)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })presentationFrameForNotificationViewController:(NCNotificationViewController *)arg1;
- (BOOL)shouldAddHintTextForNotificationViewController:(NCNotificationViewController *)arg1;
- (BOOL)shouldLoadAudioAccessoryViewForNotificationViewController:(NCNotificationViewController *)arg1;
- (BOOL)showAdditionalMessageLinesForNotificationViewController:(NCNotificationViewController *)arg1;

@end
