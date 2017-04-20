/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource> {
    UIColor * __textColor;
    UIView * _bottomContainerView;
    UIPickerTableView * _bottomTable;
    BOOL  _isNoLongerInUse;
    float  _leftHitTestExtension;
    float  _middleBarHeight;
    UIView * _middleContainerView;
    UIPickerTableView * _middleTable;
    struct CATransform3D { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    }  _perspectiveTransform;
    UIPickerView * _pickerView;
    float  _rightHitTestExtension;
    float  _rowHeight;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _tableFrame;
    UIView * _topContainerView;
    UIPickerTableView * _topTable;
}

@property (getter=_textColor, setter=_setTextColor:, nonatomic, retain) UIColor *_textColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isNoLongerInUse;
@property (nonatomic) float leftHitTestExtension;
@property (nonatomic) struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } perspectiveTransform;
@property (nonatomic) float rightHitTestExtension;
@property (nonatomic) float rowHeight;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectionBarRect;
@property (nonatomic, readonly) int selectionBarRow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allVisibleCells;
- (void)_centerTableInContainer:(id)arg1;
- (BOOL)_containsTable:(id)arg1;
- (id)_createContainerViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_createTableViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 containingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)_horizontalBiasForEndTables;
- (void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(struct CGPoint { float x1; float x2; })arg2;
- (void)_pickerTableViewDidChangeContentOffset:(id)arg1;
- (BOOL)_pointLiesWithinEffectiveTableBounds:(struct CGPoint { float x1; float x2; })arg1;
- (id)_preferredTable;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(BOOL)arg2;
- (void)_sendCheckedRow:(int)arg1 inTableView:(id)arg2 checked:(BOOL)arg3;
- (void)_setTextColor:(id)arg1;
- (BOOL)_soundsEnabled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tableFrame;
- (id)_textColor;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_transformForTableWithPerspectiveTranslationX:(float)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_transformForTableWithTranslationX:(float)arg1;
- (BOOL)_usesCheckSelection;
- (id)_visibleCellClosestToPoint:(struct CGPoint { float x1; float x2; })arg1 inView:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_visibleGlobalRows;
- (void)beginUpdates;
- (id)cellForRowAtIndexPath:(id)arg1;
- (void)endUpdates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 tableFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 middleBarHeight:(float)arg3 rowHeight:(float)arg4 pickerView:(id)arg5 transform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg6;
- (BOOL)isNoLongerInUse;
- (BOOL)isRowChecked:(int)arg1;
- (float)leftHitTestExtension;
- (void)markAsNoLongerInUse;
- (int)numberOfRowsInSection:(int)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })perspectiveTransform;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;
- (void)reloadData;
- (float)rightHitTestExtension;
- (float)rowHeight;
- (BOOL)selectRow:(int)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3;
- (BOOL)selectRow:(int)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 updateChecked:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBarRect;
- (int)selectionBarRow;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setIsNoLongerInUse:(BOOL)arg1;
- (void)setLeftHitTestExtension:(float)arg1;
- (void)setPerspectiveTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setRightHitTestExtension:(float)arg1;
- (void)setRowHeight:(float)arg1;
- (void)setSelectionBarRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
