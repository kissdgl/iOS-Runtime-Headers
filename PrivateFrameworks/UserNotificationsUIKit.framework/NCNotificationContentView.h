/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationContentView : UIView <NCContentSizeCategoryAdjusting> {
    UIView * _accessoryView;
    BOOL  _adjustsFontForContentSizeCategory;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInsets;
    UIView * _contentView;
    NCLookViewFontProvider * _fontProvider;
    UILabel * _hintTextLabel;
    NSMapTable * _labelsToDrawingContexts;
    int  _lookStyle;
    UILabel * _outgoingPrimaryLabel;
    UILabel * _outgoingPrimarySubtitleLabel;
    UILabel * _outgoingSecondaryLabel;
    NSString * _preferredContentSizeCategory;
    UILabel * _primaryLabel;
    UILabel * _primarySubtitleLabel;
    UILabel * _secondaryLabel;
    NSMutableDictionary * _secondaryLabelWidthToMeasuredNumLines;
    UIImageView * _thumbnailImageView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *hintText;
@property (nonatomic) unsigned int messageNumberOfLines;
@property (getter=_outgoingPrimaryLabel, setter=_setOutgoingPrimaryLabel:, nonatomic, retain) UILabel *outgoingPrimaryLabel;
@property (getter=_outgoingPrimarySubtitleLabel, setter=_setOutgoingPrimarySubtitleLabel:, nonatomic, retain) UILabel *outgoingPrimarySubtitleLabel;
@property (getter=_outgoingSecondaryLabel, setter=_setOutgoingSecondaryLabel:, nonatomic, retain) UILabel *outgoingSecondaryLabel;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (getter=_primaryLabel, setter=_setPrimaryLabel:, nonatomic, retain) UILabel *primaryLabel;
@property (getter=_primarySubtitleLabel, setter=_setPrimarySubtitleLabel:, nonatomic, retain) UILabel *primarySubtitleLabel;
@property (nonatomic, retain) NSString *primarySubtitleText;
@property (nonatomic, retain) NSString *primaryText;
@property (getter=_secondaryLabel, setter=_setSecondaryLabel:, nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) NSString *secondaryText;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsetsForLongLook;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsetsForShortLook;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsetsForStyle:(int)arg1;
- (id)_fontProvider;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForThumbnailInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_hintTextBaselineOffset;
- (id)_hintTextLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_hintTextLabelBoundsForSize:(struct CGSize { float x1; float x2; })arg1 withContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (id)_lazyHintTextLabel;
- (id)_lazyOutgoingPrimaryLabel;
- (id)_lazyOutgoingPrimarySubtitleLabel;
- (id)_lazyOutgoingSecondaryLabel;
- (id)_lazyPrimaryLabel;
- (id)_lazyPrimarySubtitleLabel;
- (id)_lazySecondaryLabel;
- (id)_lazyThumbnailImageView;
- (id)_newHintTextLabel;
- (id)_newPrimaryLabel;
- (id)_newSecondaryLabel;
- (int)_numberOfLinesForLabel:(id)arg1 inRectWithSize:(struct CGSize { float x1; float x2; })arg2;
- (id)_outgoingPrimaryLabel;
- (id)_outgoingPrimarySubtitleLabel;
- (id)_outgoingSecondaryLabel;
- (id)_primaryLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_primaryLabelBoundsForSize:(struct CGSize { float x1; float x2; })arg1 withContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (id)_primarySubtitleLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_primarySubtitleLabelBoundsForSize:(struct CGSize { float x1; float x2; })arg1 withContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (float)_primarySubtitleTextBaselineOffsetForCurrentStyle;
- (float)_primaryTextBaselineOffsetWithBaseValue:(float)arg1;
- (id)_secondaryLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_secondaryLabelBoundsForSize:(struct CGSize { float x1; float x2; })arg1 withContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 andNumberOfLines:(float)arg3;
- (int)_secondaryLabelNumberOfLinesWithMeasuredNumberOfLines:(int)arg1;
- (float)_secondaryTextBaselineOffsetForCurrentStyle;
- (float)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(float)arg1;
- (float)_secondaryTextBaselineOffsetWithBaseValue:(float)arg1;
- (int)_secondaryTextMeasuredNumberOfLinesForWidth:(float)arg1;
- (void)_setFontProvider:(id)arg1;
- (void)_setOutgoingPrimaryLabel:(id)arg1;
- (void)_setOutgoingPrimarySubtitleLabel:(id)arg1;
- (void)_setOutgoingSecondaryLabel:(id)arg1;
- (void)_setPrimaryLabel:(id)arg1;
- (void)_setPrimarySubtitleLabel:(id)arg1;
- (void)_setSecondaryLabel:(id)arg1;
- (void)_setText:(id)arg1 withFinalLabel:(id)arg2 setter:(id /* block */)arg3 andTransitionLabel:(id)arg4 setter:(id /* block */)arg5;
- (struct CGSize { float x1; float x2; })_sizeThatFits:(struct CGSize { float x1; float x2; })arg1 withContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (void)_updateFontForHintTextLabel:(id)arg1 withStyle:(int)arg2;
- (void)_updateFontForPrimaryLabel:(id)arg1 withStyle:(int)arg2;
- (void)_updateFontForSecondaryLabel:(id)arg1 withStyle:(int)arg2;
- (id)accessoryView;
- (BOOL)adjustForContentSizeCategoryChange;
- (BOOL)adjustsFontForContentSizeCategory;
- (id)debugDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hintText;
- (id)initWithStyle:(int)arg1;
- (void)layoutSubviews;
- (unsigned int)messageNumberOfLines;
- (id)preferredContentSizeCategory;
- (id)primarySubtitleText;
- (id)primaryText;
- (id)secondaryText;
- (void)setAccessoryView:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)arg1;
- (void)setHintText:(id)arg1;
- (void)setMessageNumberOfLines:(unsigned int)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setPrimarySubtitleText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)thumbnail;
- (void)traitCollectionDidChange:(id)arg1;

@end
