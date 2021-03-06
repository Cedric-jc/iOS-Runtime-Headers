/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSHashTable : NSObject <NSCoding, NSCopying, NSFastEnumeration>

@property (readonly, copy) NSArray *allObjects;
@property (nonatomic, readonly) id anyObject;
@property (readonly) unsigned int count;
@property (readonly, copy) NSPointerFunctions *pointerFunctions;
@property (readonly, copy) NSSet *setRepresentation;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)hashTableWithOptions:(unsigned int)arg1;
+ (id)hashTableWithWeakObjects;
+ (id)weakObjectsHashTable;

- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (BOOL)containsObject:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void*)getItem:(const void*)arg1;
- (void)getKeys:(const void**)arg1 count:(unsigned int*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned int)arg1 capacity:(unsigned int)arg2;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned int)arg2;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (void)intersectHashTable:(id)arg1;
- (BOOL)intersectsHashTable:(id)arg1;
- (BOOL)isEqualToHashTable:(id)arg1;
- (BOOL)isSubsetOfHashTable:(id)arg1;
- (id)member:(id)arg1;
- (void)minusHashTable:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableSet;
- (id)objectEnumerator;
- (id)pointerFunctions;
- (void)removeAllItems;
- (void)removeAllObjects;
- (void)removeItem:(const void*)arg1;
- (void)removeObject:(id)arg1;
- (id)setRepresentation;
- (void)unionHashTable:(id)arg1;
- (unsigned int)weakCount;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_removeObjects:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (void)fc_addObjectsFromArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)pk_weakObjectsHashTableUsingPointerPersonality;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (BOOL)tsp_saveDataReferencesToMessage:(struct RepeatedPtrField<TSP::DataInfo> { void **x1; int x2; int x3; int x4; }*)arg1 dataArchiver:(id)arg2;

@end
