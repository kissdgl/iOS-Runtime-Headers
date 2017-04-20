/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {
    BOOL  _automaticAppearanceWasEnabled;
    UIKeyboardDicationBackground * _background;
    <UIDictationViewDisplayDelegate> * _displayDelegate;
    UIButton * _endpointButton;
    UIButton * _endpointButtonLandscape;
    SUICFlamesView * _flamesView;
    BOOL  _keyboardInTransition;
    int  _state;
    UIButton * _waveTapEndpointButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <UIDictationViewDisplayDelegate> *displayDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)activeInstance;
+ (Class)dictationViewClass;
+ (struct CGSize { float x1; float x2; })layoutSize;
+ (id)sharedInstance;
+ (struct CGSize { float x1; float x2; })viewSize;

- (void)applicationEnteredBackground;
- (void)applicationWillResignActive;
- (float)audioLevelForFlamesView:(id)arg1;
- (struct CGPoint { float x1; float x2; })backgroundOffset;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (struct CGSize { float x1; float x2; })currentScreenSize;
- (void)dealloc;
- (id)displayDelegate;
- (BOOL)drawsOwnBackground;
- (id)endpointButton;
- (void)endpointButtonPressed;
- (void)finishReturnToKeyboard;
- (void)highlightEndpointButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowing;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint { float x1; float x2; })positionForShow;
- (void)prepareForReturnToKeyboard;
- (void)returnToKeyboard;
- (void)setDisplayDelegate:(id)arg1;
- (void)setState:(int)arg1;
- (void)show;
- (BOOL)visible;

@end
