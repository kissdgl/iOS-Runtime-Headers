/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUITableView : RUIElement <RUITableViewRowDelegate, RUITopLevelPageElement, RUIWebViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIDatePicker * _datePicker;
    RUITableViewRow * _defaultFirstResponderRow;
    NSIndexPath * _embeddedPickerRowIndexPath;
    RUIFooterElement * _footer;
    float  _fullscreenCellHeight;
    RUIHeaderElement * _header;
    NSString * _headerTitle;
    UIView<RUIHeader> * _headerView;
    float  _lastLayoutWidth;
    RUIObjectModel * _objectModel;
    RUIBarButtonItem * _oldLeftBarButtonItemForPicker;
    NSDate * _oldPickerDate;
    RUIBarButtonItem * _oldRightBarButtonItemForPicker;
    RUIPage * _page;
    _UIBackdropView * _pickerBackdrop;
    NSIndexPath * _pickerRowIndexPath;
    BOOL  _registeredForNotifications;
    NSMutableArray * _sections;
    UIPickerView * _selectPicker;
    BOOL  _showDatePicker;
    BOOL  _showSelectPicker;
    BOOL  _showingPickerNavBarButtons;
    RUISubHeaderElement * _subHeader;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) RUITableViewRow *defaultFirstResponderRow;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RUIFooterElement *footer;
@property (nonatomic, retain) NSDictionary *footerViewAttributes;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) RUIHeaderElement *header;
@property (nonatomic, retain) NSString *headerTitle;
@property (nonatomic, readonly) UIView<RUIHeader> *headerView;
@property (nonatomic, readonly) NSDictionary *headerViewAttributes;
@property (nonatomic) RUIObjectModel *objectModel;
@property (nonatomic) RUIPage *page;
@property (nonatomic, readonly) NSMutableArray *sections;
@property (nonatomic, retain) UIPickerView *selectPicker;
@property (getter=isShowingPicker, nonatomic, readonly) BOOL showingPicker;
@property (nonatomic, retain) RUISubHeaderElement *subHeader;
@property (readonly) Class superclass;

+ (void)_enableTestMode;

- (void).cxx_destruct;
- (BOOL)_becomeFirstResponderAtIndexPath:(id)arg1;
- (void)_clearPickers;
- (void)_datePickerRevert;
- (void)_enumerateRowsUsingBlock:(id /* block */)arg1;
- (void)_hideDatePickerNavBarButtonsIfNeeded;
- (void)_loadHeaderView;
- (id)_objectModelIndexPathForIndexPath:(id)arg1;
- (void)_registerForNotifications:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectPickerFrame;
- (void)_setBottomInset:(float)arg1;
- (void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg1;
- (struct CGSize { float x1; float x2; })_tableHeaderSizeForHeader:(id)arg1;
- (void)_textChanged:(id)arg1;
- (void)activateRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)automaticKeyboardDidHide:(id)arg1;
- (void)automaticKeyboardDidShow:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (void)datePickerDone:(id)arg1;
- (void)dealloc;
- (id)defaultFirstResponderRow;
- (id)footer;
- (id)footerViewAttributes;
- (id)header;
- (id)headerTitle;
- (id)headerView;
- (id)headerViewAttributes;
- (void)hidePickerViewAnimated:(BOOL)arg1;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (id)indexPathForRow:(id)arg1;
- (id)init;
- (void)insertRow:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)isShowingPicker;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)objectModel;
- (id)objectModelRowForIndexPath:(id)arg1;
- (id)page;
- (void)performAction:(int)arg1 forElement:(id)arg2 completion:(id /* block */)arg3;
- (void)populatePostbackDictionary:(id)arg1;
- (void)reloadHeadersAndFootersForSection:(id)arg1;
- (void)removeRowAtIndexPath:(id)arg1;
- (void)rowDidChange:(id)arg1 action:(int)arg2;
- (void)rowDidEndEditing:(id)arg1;
- (void)rowIsFirstResponder:(id)arg1;
- (id)rowWithIdentifier:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)sections;
- (id)selectPicker;
- (void)setAttributes:(id)arg1;
- (void)setDefaultFirstResponderRow:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setFooter:(id)arg1;
- (void)setFooterViewAttributes:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderViewAttributes:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setObjectModel:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setSelectPicker:(id)arg1;
- (void)setSelectedRadioGroupRow:(id)arg1;
- (void)setSubHeader:(id)arg1;
- (void)showPickerViewForRow:(id)arg1 animated:(BOOL)arg2;
- (id)sourceURL;
- (id)sourceURLForRUITableViewRow;
- (id)staticValues;
- (id)subElementWithID:(id)arg1;
- (id)subElementsWithName:(id)arg1;
- (id)subHeader;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (id)tableView;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)textFieldRow:(id)arg1 changeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldStartedEditing:(id)arg1;
- (id)titleLabel;
- (id)view;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayout;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)webViewOM:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;

@end
