/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QueryResultSet_BackingStore : NSObject {
    struct vector<long long, std::__1::allocator<long long> > { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long long *, std::__1::allocator<long long> > { 
            long long *__first_; 
        } __end_cap_; 
    }  _persistentIDs;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { 
            char *__first_; 
        } __end_cap_; 
    }  _sections;
}

@property (nonatomic, readonly) unsigned int count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)backingStoreByRemovingPersistentIDs:(const struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > { struct __hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (BOOL)containsPersistentIDs:(const struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > { struct __hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (unsigned int)count;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (long long)persistentIDAtIndex:(unsigned int)arg1;
- (void)reverseEnumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (void)reverseEnumerateSectionsUsingBlock:(id /* block */)arg1;

@end
