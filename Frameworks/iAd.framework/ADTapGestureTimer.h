/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADTapGestureTimer : NSObject <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer * _gestureRecognizer;
    double  _maximumTimeSinceTap;
    struct CGPoint { 
        float x; 
        float y; 
    }  _mostRecentTapLocation;
    double  _mostRecentTapTimestamp;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITapGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned int hash;
@property (nonatomic) double maximumTimeSinceTap;
@property (nonatomic) struct CGPoint { float x1; float x2; } mostRecentTapLocation;
@property (nonatomic) double mostRecentTapTimestamp;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *view;
@property (nonatomic, readonly) BOOL wasViewTappedRecently;

- (void)_handleTapOnView:(id)arg1;
- (void)dealloc;
- (id)gestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithView:(id)arg1;
- (double)maximumTimeSinceTap;
- (struct CGPoint { float x1; float x2; })mostRecentTapLocation;
- (double)mostRecentTapTimestamp;
- (void)setGestureRecognizer:(id)arg1;
- (void)setMaximumTimeSinceTap:(double)arg1;
- (void)setMostRecentTapLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMostRecentTapTimestamp:(double)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (BOOL)wasViewTappedRecently;

@end
