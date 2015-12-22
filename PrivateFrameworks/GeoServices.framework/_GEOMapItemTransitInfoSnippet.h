/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOMapItemTransitInfoSnippet : NSObject <GEOMapItemTransitInfo> {
    NSString *_displayName;
    NSArray *_labelItems;
    GEOPDTransitInfoSnippet *_transitInfoSnippet;
}

@property (nonatomic, readonly) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *departureSequences;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) BOOL hasTransitIncidentComponent;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) BOOL isTransitIncidentsTTLExpired;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) NSDate *lastFullScheduleValidDate;
@property (nonatomic, readonly) NSArray *lines;
@property (nonatomic, readonly) unsigned int linesCount;
@property (nonatomic, readonly) unsigned int numAdditionalDepartures;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *systems;
@property (nonatomic, readonly) unsigned int systemsCount;

- (id)connections;
- (void)dealloc;
- (id)departureSequences;
- (id)departureSequencesForSystem:(id)arg1 excludingLines:(id)arg2 direction:(id)arg3 validForDateFromBlock:(id /* block */)arg4;
- (id)directionsForSystem:(id)arg1 excludingLines:(id)arg2 validForDateFromBlock:(id /* block */)arg3 hasSequencesWithNoDirection:(out BOOL*)arg4;
- (id)displayName;
- (BOOL)hasTransitIncidentComponent;
- (id)incidents;
- (id)initWithTransitInfoSnippet:(id)arg1;
- (BOOL)isTransitIncidentsTTLExpired;
- (id)labelItems;
- (id)lastFullScheduleValidDate;
- (id)lines;
- (unsigned int)linesCount;
- (unsigned int)numAdditionalDepartures;
- (id)sequencesForSystem:(id)arg1 excludingLines:(id)arg2 direction:(id)arg3 validForDateFromBlock:(id /* block */)arg4;
- (id)systems;
- (unsigned int)systemsCount;

@end