/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSData, NSString;

@interface MKLocalSearchRequest : NSObject <NSCopying> {
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    BOOL _hasRegion;
    NSString *_naturalLanguageQuery;
    } _region;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
}

@property(readonly) BOOL _hasRegion;
@property(copy) NSString * naturalLanguageQuery;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property(retain) NSData * suggestionEntryMetadata;
@property(retain) NSData * suggestionMetadata;

+ (id)searchRequestWithCompletion:(id)arg1;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (BOOL)_hasRegion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)naturalLanguageQuery;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (void)setNaturalLanguageQuery:(id)arg1;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (id)suggestionEntryMetadata;
- (id)suggestionMetadata;

@end