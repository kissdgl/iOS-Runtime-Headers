/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceCrop : PHObject {
    NSData * _resourceData;
    short  _state;
}

@property (nonatomic, readonly) NSData *resourceData;
@property (nonatomic, readonly) short state;

+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)arg1;
+ (id)fetchFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFaceCropsWithOptions:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;

- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (id)resourceData;
- (short)state;

@end
