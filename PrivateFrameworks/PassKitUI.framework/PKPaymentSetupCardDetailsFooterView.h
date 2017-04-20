/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupCardDetailsFooterView : PKTableFooterView {
    int  _context;
    UIButton * _manualEntryButton;
    UIButton * _setupLaterButton;
}

@property (nonatomic) int context;
@property (nonatomic, retain) UIButton *manualEntryButton;
@property (nonatomic, retain) UIButton *setupLaterButton;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize { float x1; float x2; })arg2;
- (int)context;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(int)arg2;
- (BOOL)isBuddyiPad;
- (void)layoutSubviews;
- (id)manualEntryButton;
- (void)setButtonsEnabled:(BOOL)arg1;
- (void)setContext:(int)arg1;
- (void)setManualEntryButton:(id)arg1;
- (void)setSetupLaterButton:(id)arg1;
- (id)setupLaterButton;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
