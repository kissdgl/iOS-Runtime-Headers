/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFrameView : WAKView <WebCoreFrameView> {
    WebFrameViewPrivate * _private;
}

@property (nonatomic) BOOL allowsScrolling;
@property (nonatomic, readonly) WAKView<WebDocumentView> *documentView;
@property (nonatomic, readonly) BOOL documentViewShouldHandlePrint;
@property (nonatomic, readonly) WebFrame *webFrame;

+ (BOOL)_canShowMIMETypeAsHTML:(id)arg1;
+ (Class)_viewClassForMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2;
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)arg1;

- (float)_area;
- (id)_contentView;
- (Class)_customScrollViewClass;
- (BOOL)_firstResponderIsFormControl;
- (void)_forwardMouseEvent:(id)arg1;
- (void)_frameSizeChanged;
- (void)_goBack;
- (void)_goForward;
- (BOOL)_hasScrollBars;
- (float)_horizontalKeyboardScrollDistance;
- (float)_horizontalPageScrollDistance;
- (void)_install;
- (BOOL)_isFlippedDocument;
- (BOOL)_isScrollable;
- (BOOL)_isVerticalDocument;
- (id)_largestChildWithScrollBars;
- (id)_largestScrollableChild;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (BOOL)_pageHorizontally:(BOOL)arg1;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)arg1;
- (BOOL)_pageVertically:(BOOL)arg1;
- (BOOL)_scrollHorizontallyBy:(float)arg1;
- (BOOL)_scrollLineHorizontally:(BOOL)arg1;
- (BOOL)_scrollLineVertically:(BOOL)arg1;
- (BOOL)_scrollOverflowInDirection:(unsigned char)arg1 granularity:(unsigned char)arg2;
- (BOOL)_scrollToBeginningOfDocument;
- (BOOL)_scrollToEndOfDocument;
- (BOOL)_scrollVerticallyBy:(float)arg1;
- (id)_scrollView;
- (void)_setDocumentView:(id)arg1;
- (void)_setWebFrame:(id)arg1;
- (float)_verticalKeyboardScrollDistance;
- (float)_verticalPageScrollDistance;
- (Class)_viewClassForMIMEType:(id)arg1;
- (id)_webView;
- (struct Frame { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; struct MainFrame {} *x4; struct Page {} *x5; struct RefPtr<WebCore::Settings> { struct Settings {} *x_6_1_1; } x6; struct FrameTree { struct Frame {} *x_7_1_1; struct Frame {} *x_7_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_7_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_7_1_4; struct RefPtr<WebCore::Frame> { struct Frame {} *x_5_2_1; } x_7_1_5; struct Frame {} *x_7_1_6; struct RefPtr<WebCore::Frame> { struct Frame {} *x_7_2_1; } x_7_1_7; struct Frame {} *x_7_1_8; unsigned int x_7_1_9; } x7; }*)_web_frame;
- (id)_webcore_effectiveFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)allowsScrolling;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)documentView;
- (BOOL)documentViewShouldHandlePrint;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)frameSizeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isOpaque;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)printDocumentView;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (BOOL)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setAllowsScrolling:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setNextKeyView:(id)arg1;
- (void)viewDidMoveToWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (id)webFrame;

@end
