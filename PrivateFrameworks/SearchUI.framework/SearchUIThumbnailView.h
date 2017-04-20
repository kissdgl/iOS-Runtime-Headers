/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIThumbnailView : UIView {
    SearchUIImageView * _imageView;
    UIView * _overlayPlayButton;
    SFSearchResult * _result;
}

@property (retain) SearchUIImageView *imageView;
@property (retain) UIView *overlayPlayButton;
@property (retain) SFSearchResult *result;

+ (id)suggestedQueryIcon;

- (void).cxx_destruct;
- (void)appIconImageDidChange:(id)arg1;
- (void)dealloc;
- (id)imageView;
- (id)initWithStyle:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)overlayPlayButton;
- (id)result;
- (void)setImageView:(id)arg1;
- (void)setOverlayPlayButton:(id)arg1;
- (void)setResult:(id)arg1;
- (BOOL)shouldVerticallyCenter;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateOverlayPlayButtonForResult:(id)arg1;
- (void)updateWithResult:(id)arg1;

@end
