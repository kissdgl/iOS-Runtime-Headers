/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDNowPlayingViewController : UIViewController {
    MCDLabelButton * _albumArtistLabelButton;
    NSLayoutConstraint * _artistAlbumLabelConstraint;
    UIImageView * _artworkView;
    UITapGestureRecognizer * _backPressRecognizer;
    UIFocusContainerGuide * _controlsFocusContainerGuide;
    <MCDNowPlayingViewControllerDataSource> * _dataSource;
    <MCDNowPlayingViewControllerDelegate> * _delegate;
    UILongPressGestureRecognizer * _fastForwardButtonLongPressRecognizer;
    NSString * _forwardTransportButtonImageIdentifier;
    BOOL  _handledWillAppear;
    int  _heldAction;
    BOOL  _highTouchMode;
    BOOL  _isScrubbing;
    UITapGestureRecognizer * _knobPressRecognizer;
    UILongPressGestureRecognizer * _leftButtonLongPressRecognizer;
    UILongPressGestureRecognizer * _leftNudgeLongPressRecognizer;
    UITapGestureRecognizer * _leftNudgePressRecognizer;
    UIColor * _navbarColor;
    BOOL  _navbarHidesShadow;
    UINavigationBar * _navigationBar;
    MCDPlayModeControlView * _playModeControlView;
    UIViewController * _playModeViewController;
    NSString * _previousTransportButtonImageIdentifier;
    MCDProgressView * _progressView;
    UILongPressGestureRecognizer * _rightNudgeLongPressRecognizer;
    UITapGestureRecognizer * _rightNudgePressRecognizer;
    BOOL  _titleUpdated;
    MCDTitleView * _titleView;
    MCDTransportControlView * _transportControlView;
    UIViewController * _transportViewController;
    BOOL  _viewHasShifted;
}

@property (nonatomic, retain) NSLayoutConstraint *artistAlbumLabelConstraint;
@property (nonatomic, readonly) UIImageView *artworkView;
@property (nonatomic, readonly) UITapGestureRecognizer *backPressRecognizer;
@property (nonatomic, retain) UIFocusContainerGuide *controlsFocusContainerGuide;
@property (nonatomic) <MCDNowPlayingViewControllerDataSource> *dataSource;
@property (nonatomic) <MCDNowPlayingViewControllerDelegate> *delegate;
@property (nonatomic, retain) UILongPressGestureRecognizer *fastForwardButtonLongPressRecognizer;
@property (nonatomic, retain) NSString *forwardTransportButtonImageIdentifier;
@property (nonatomic, readonly) UITapGestureRecognizer *knobPressRecognizer;
@property (nonatomic, retain) UILongPressGestureRecognizer *leftButtonLongPressRecognizer;
@property (nonatomic, retain) UILongPressGestureRecognizer *leftNudgeLongPressRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *leftNudgePressRecognizer;
@property (nonatomic, readonly) MCDPlayModeControlView *playModeControlView;
@property (nonatomic, retain) NSString *previousTransportButtonImageIdentifier;
@property (nonatomic, readonly) MCDProgressView *progressView;
@property (nonatomic, retain) UILongPressGestureRecognizer *rightNudgeLongPressRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *rightNudgePressRecognizer;
@property (nonatomic) BOOL titleUpdated;
@property (nonatomic, readonly) MCDTitleView *titleView;
@property (nonatomic, readonly) MCDTransportControlView *transportControlView;

- (void).cxx_destruct;
- (void)_addToLibraryButtonTouchUp:(id)arg1;
- (void)_didUpdateSupportedCommandsNotification:(id)arg1;
- (void)_fastForwardButtonLongPress:(id)arg1;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)_handleWillAppear;
- (void)_initializeTransportControls;
- (void)_itemChanged:(id)arg1;
- (void)_leftButtonLongPress:(id)arg1;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_leftNudgePress:(id)arg1;
- (void)_moreButtonTouchUp:(id)arg1;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_repeatButtonTouchUp:(id)arg1;
- (void)_respondToHeldAction;
- (void)_rightNudgePress:(id)arg1;
- (void)_sendAction:(int)arg1 withState:(int)arg2;
- (void)_sendHeldAction;
- (void)_shuffleButtonTouchUp:(id)arg1;
- (void)_updatePlayModesState;
- (void)_updateRepeatStateWithType:(int)arg1;
- (void)_updateShuffleStateWithType:(int)arg1;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(int)arg3;
- (void)albumArtistButtonTapped:(id)arg1;
- (id)artistAlbumLabelConstraint;
- (id)artworkView;
- (id)backPressRecognizer;
- (id)controlsFocusContainerGuide;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)fastForwardButtonLongPressRecognizer;
- (id)forwardTransportButtonImageIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)knobPressRecognizer;
- (id)leftButtonLongPressRecognizer;
- (id)leftNudgeLongPressRecognizer;
- (id)leftNudgePressRecognizer;
- (void)loadView;
- (id)playModeControlView;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)previousTransportButtonImageIdentifier;
- (id)progressView;
- (void)reloadData;
- (id)rightNudgeLongPressRecognizer;
- (id)rightNudgePressRecognizer;
- (void)setArtistAlbumLabelConstraint:(id)arg1;
- (void)setControlsFocusContainerGuide:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFastForwardButtonLongPressRecognizer:(id)arg1;
- (void)setForwardTransportButtonImageIdentifier:(id)arg1;
- (void)setLeftButtonLongPressRecognizer:(id)arg1;
- (void)setLeftNudgeLongPressRecognizer:(id)arg1;
- (void)setLeftNudgePressRecognizer:(id)arg1;
- (void)setPreviousTransportButtonImageIdentifier:(id)arg1;
- (void)setRightNudgeLongPressRecognizer:(id)arg1;
- (void)setRightNudgePressRecognizer:(id)arg1;
- (void)setTitleUpdated:(BOOL)arg1;
- (BOOL)titleUpdated;
- (id)titleView;
- (id)transportControlView;
- (void)updatePlayControlsWithElapsedTime:(double)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
