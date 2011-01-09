/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableDictionary, NSString;



@interface MKAddressBookAddress : NSObject <HistoryItem>
{
    NSMutableDictionary *_info;
    NSInteger _addressID;
    void *_record;
    NSInteger _recordID;
    void *_addressBook;
    NSString *_lastValidatedAddress;
}

@property(readonly) NSString *singleLineAddress;
@property(readonly) NSString *singleLineAddressWithHomeCountry;
@property(readonly) BOOL isValid;
@property(readonly) NSInteger recordID;
@property(readonly) void *record;
@property(copy) NSString *lastValidatedAddress;
@property(readonly) NSInteger addressID;


- (void*)record;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (NSInteger)type;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isValid;
- (void)dealloc;
- (id)initWithRecord:(void*)arg1 addressID:(NSInteger)arg2 addressBook:(void*)arg3;
- (void)_checkValid;
- (id)lastValidatedAddress;
- (void)setLastValidatedAddress:(id)arg1;
- (id)initWithRecord:(void*)arg1 addressID:(NSInteger)arg2;
- (NSInteger)addressID;
- (id)singleLineAddress;
- (id)singleLineAddressWithHomeCountry;
- (NSInteger)recordID;

@end