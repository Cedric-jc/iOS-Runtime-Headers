/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerTransitioningDelegate : NSObject <UIForceTransitioningDelegate> {
    UIInteractionProgress * interactionProgressForPresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIInteractionProgress *interactionProgressForPresentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_interactionControllerForTransitionOfType:(int)arg1 forAlertController:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionProgressForPresentation;
- (void)setInteractionProgressForPresentation:(id)arg1;

@end
