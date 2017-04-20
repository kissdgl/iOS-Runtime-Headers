/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {
    float  mHorizontalScaleFactor;
    struct map<unsigned long, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __tree<std::__1::__value_type<unsigned long, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, SFUtility::ObjcSharedPtr<NSObject> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::less<unsigned long>, true> > { unsigned long x_3_2_1; } x_1_1_3; } x1; } * mMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) float horizontalScaleFactor;
@property (readonly) Class superclass;

- (int)count;
- (void)dealloc;
- (void)enumerateHeadersWithBlock:(id /* block */)arg1;
- (id)headerForKey:(unsigned long)arg1 willModify:(BOOL)arg2;
- (id)headerForKey:(unsigned long)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
- (float)horizontalScaleFactor;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (unsigned long)lowerBound:(unsigned long)arg1;
- (unsigned long)maxKey;
- (unsigned long)minKey;
- (id)packageLocator;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned long)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setHeader:(id)arg1 forKey:(unsigned long)arg2;
- (void)setHorizontalScaleFactor:(float)arg1;
- (void)shiftKeysAtIndex:(unsigned long)arg1 amount:(long)arg2;
- (unsigned long)upperBound:(unsigned long)arg1;

@end
