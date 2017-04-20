/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGestureKeyboardIntroduction : NSObject {
    id /* block */  m_completionBlock;
    UIKBKeyView * m_firstKeyView;
    NSTimer * m_gestureKeyboardInfoTimer;
    BOOL  m_hasPeeked;
    struct CGPoint { 
        float x; 
        float y; 
    }  m_initPoint;
    unsigned int  m_insertedTextLength;
    BOOL  m_isInTransition;
    UIKeyboardLayoutStar * m_layout;
    UIKBKeyView * m_secondKeyView;
    double  m_start;
    UIView * m_view;
}

- (void)dismissGestureKeyboardIntroduction;
- (void)dismissGestureKeyboardIntroduction:(id)arg1;
- (id)initWithLayoutStar:(id)arg1 completion:(id /* block */)arg2;
- (void)insertText:(id)arg1 forKey:(id)arg2;
- (void)playGestureKeyboardIntroduction:(id)arg1;
- (void)showGestureKeyboardIntroduction;
- (void)tryGestureKeyboardFromView:(id)arg1 withEvent:(id)arg2;

@end
