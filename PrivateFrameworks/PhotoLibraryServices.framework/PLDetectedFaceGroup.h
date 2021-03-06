/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDetectedFaceGroup : PLManagedObject

@property (nonatomic, retain) PLPerson *associatedPerson;
@property (nonatomic, retain) NSSet *detectedFaces;
@property (nonatomic) PLDetectedFace *keyFace;
@property (nonatomic) short personBuilderState;
@property (nonatomic) int unnamedFaceCount;
@property (nonatomic, retain) NSString *uuid;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

- (void)awakeFromInsert;
- (id)mutableDetectedFaces;
- (void)refreshFaces;

@end
