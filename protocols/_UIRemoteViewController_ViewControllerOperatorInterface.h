/* Generated by RuntimeBrowser.
 */

@protocol _UIRemoteViewController_ViewControllerOperatorInterface

@required

- (void)__dismissActionSheetWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
- (void)__handleFocusMovementAction:(UIFocusMovementAction *)arg1;
- (void)__presentActionSheetFromYCoordinate:(float)arg1 withTitle:(NSString *)arg2 buttonTitles:(NSArray *)arg3 cancelButtonIndex:(int)arg4 destructiveButtonIndex:(int)arg5 style:(int)arg6;
- (void)__setServiceMaxFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)__setSupportedInterfaceOrientations:(NSArray *)arg1;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
- (void)__showEditAlertViewWithToken:(long)arg1 canUndo:(BOOL)arg2 canRedo:(BOOL)arg3;
- (void)__showServiceForText:(void *)arg1 selectedTextRangeValue:(void *)arg2 type:(void *)arg3 fromRectValue:(void *)arg4 replyHandler:(void *)arg5; // needs 5 arg types, found 14: NSString *, NSValue *, int, NSValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)__showServiceForText:(void *)arg1 type:(void *)arg2 fromRectValue:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 13: NSString *, int, NSValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)__trampolineButtonPressData:(NSData *)arg1 canceled:(BOOL)arg2;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(int)arg1 hidden:(int)arg2 updateAnimation:(int)arg3;
- (void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(int)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (void)__viewServiceDidUpdateTintColor:(UIColor *)arg1 duration:(double)arg2;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize { float x1; float x2; })arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServicePopoverDidChangeContentSize:(void *)arg1 animated:(void *)arg2 fence:(void *)arg3 withReplyHandler:(void *)arg4; // needs 4 arg types, found 9: struct CGSize { float x1; float x2; }, BOOL, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { float x1; float x2; }, void*
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize { float x1; float x2; })arg1 fence:(BKSAnimationFenceHandle *)arg2;

@end
