/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDResources, CHDDataValuesCollection, CHDFormula;



@interface CHDData : NSObject 
{
    CHDDataValuesCollection *mDataValues;
    CHDFormula *mFormula;
    NSUInteger mContentFormatId;
    NSUInteger mDataValueIndexCount;
    EDResources *mResources;
}

+ (id)dataWithDataPointCount:(NSUInteger)arg1 resources:(id)arg2;
+ (id)dataWithResources:(id)arg1;

- (id)initWithDataPointCount:(NSUInteger)arg1 resources:(id)arg2;
- (NSUInteger)dataValueIndexCount;
- (NSUInteger)averageDataPointDecimalCount;
- (id)firstValueContentFormatWithWorkbook:(id)arg1;
- (void)setFormula:(id)arg1 chart:(id)arg2;
- (void)setDataValueIndexCount:(NSUInteger)arg1;
- (void)setContentFormatId:(NSUInteger)arg1;
- (void)setContentFormat:(id)arg1;
- (NSUInteger)countOfCellsBeingReferenced;
- (id)initWithResources:(id)arg1;
- (id)dataValues;
- (id)formula;
- (NSUInteger)contentFormatId;
- (id)contentFormat;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isEmpty;
     /* Encoded args for previous method: B8@0:4 */

- (void)dealloc;

@end