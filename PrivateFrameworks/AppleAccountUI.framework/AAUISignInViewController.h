/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUISignInViewController : UIViewController <RemoteUIControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate> {
    int  _akServiceType;
    BOOL  _allowsAccountCreation;
    NSArray * _compactConstraints;
    <AAUISignInViewControllerDelegate> * _delegate;
    NSArray * _expandedConstraints;
    UITableViewCell * _passwordCell;
    BOOL  _shouldAnticipatePiggybacking;
    BOOL  _showServiceIcons;
    AAUIBuddyView * _tableFooterView;
    AAUIHeaderView * _tableHeaderView;
    UITableView * _tableView;
    UITableViewCell * _usernameCell;
}

@property (setter=_setAkServiceType:, nonatomic) int _akServiceType;
@property (setter=_setShouldAnticipatePiggybacking:, nonatomic) BOOL _shouldAnticipatePiggybacking;
@property (nonatomic) BOOL allowsAccountCreation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISignInViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic) BOOL showServiceIcons;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) AAUIBuddyView *view;

- (void).cxx_destruct;
- (void)_actionButtonSelected:(id)arg1;
- (int)_akServiceType;
- (void)_attemptAuthentication;
- (void)_attemptAuthenticationWithContext:(id)arg1;
- (id)_attributedStringForFooter;
- (id)_authorizationValueForAuthenticationResults:(id)arg1;
- (void)_beginObservingKeyboardWillShowNotifications;
- (void)_beginObservingTextFieldDidChangeNotifications;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonSelected:(id)arg1;
- (float)_compressedHeightForView:(id)arg1 containedInView:(id)arg2;
- (void)_delegate_signInViewControllerDidCancel;
- (void)_delegate_signInViewControllerDidCompleteWithAuthenticationResults:(id)arg1;
- (void)_endObservingKeyboardWillShowNotifications;
- (void)_endObservingTextFieldDidChangeNotifications;
- (id)_fontForFooter;
- (BOOL)_hasValidCredentials;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_nextBarButtonItem;
- (void)_nextButtonSelected:(id)arg1;
- (id)_passwordCell;
- (void)_presentAppleIDPrivacyInformationPane;
- (void)_presentCreateAppleIDPane;
- (void)_presentForgotAppleIDPane;
- (void)_repairCloudAccountWithAuthenticationResults:(id)arg1;
- (void)_setAkServiceType:(int)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setShouldAnticipatePiggybacking:(BOOL)arg1;
- (BOOL)_shouldAnticipatePiggybacking;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (id)_tableView;
- (void)_textFieldDidChange:(id)arg1;
- (void)_updateConstraintsForTraitCollection:(id)arg1;
- (void)_updateContentInsetWithHeight:(float)arg1;
- (id)_usernameCell;
- (BOOL)allowsAccountCreation;
- (id)authenticationContext;
- (void)dealloc;
- (id)delegate;
- (float)heightForFooterInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)messageLabel;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)setAllowsAccountCreation:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowServiceIcons:(BOOL)arg1;
- (BOOL)showServiceIcons;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 interaction:(int)arg4;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
