/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <NSFilePresenter>, NSError, NSMutableSet, NSSet, NSURL;

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPFileCoordinatorDelegate, TSPObjectContextDelegate> {
    NSError *_error;
    BOOL _ignoreDocumentSupport;
    NSURL *_packageURL;
    NSMutableSet *_persistenceWarnings;
}

@property(readonly) BOOL areNewExternalReferencesToDataAllowed;
@property(readonly) NSError * error;
@property(readonly) <NSFilePresenter> * filePresenter;
@property BOOL ignoreDocumentSupport;
@property(readonly) BOOL isDocumentSupportTemporary;
@property(copy) NSURL * packageURL;
@property(readonly) NSSet * persistenceWarnings;

- (void).cxx_destruct;
- (void)addPersistenceWarnings:(id)arg1;
- (id)error;
- (BOOL)ignoreDocumentSupport;
- (id)init;
- (id)initWithPackageURL:(id)arg1;
- (id)packageURL;
- (void)performReadUsingAccessor:(id)arg1;
- (id)persistenceWarnings;
- (id)persistenceWarningsForData:(id)arg1 isReadable:(BOOL)arg2 isExternal:(BOOL)arg3;
- (void)presentPersistenceError:(id)arg1;
- (void)setIgnoreDocumentSupport:(BOOL)arg1;
- (void)setPackageURL:(id)arg1;

@end