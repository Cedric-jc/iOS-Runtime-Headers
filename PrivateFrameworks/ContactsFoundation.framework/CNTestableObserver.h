/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNTestableObserver : NSObject <CNObserver> {
    NSMutableArray *_results;
    CNVirtualScheduler *_scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSArray *resultValues;
@property (readonly) NSArray *results;
@property (readonly) Class superclass;

+ (id)observerWithScheduler:(id)arg1;

- (void)dealloc;
- (id)initWithScheduler:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)resultValues;
- (id)results;

@end