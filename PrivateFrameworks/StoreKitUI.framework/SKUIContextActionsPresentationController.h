/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIContextActionsPresentationController : UIPresentationController {
    UIVisualEffectView * _backgroundView;
    id /* block */  _dismissalAnimations;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, copy) id /* block */ dismissalAnimations;

- (void).cxx_destruct;
- (id)backgroundView;
- (id /* block */)dismissalAnimations;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (void)setBackgroundView:(id)arg1;
- (void)setDismissalAnimations:(id /* block */)arg1;
- (BOOL)shouldRemovePresentersView;

@end
