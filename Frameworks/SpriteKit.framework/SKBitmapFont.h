/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKBitmapFont : NSObject <NSCoding> {
    float  _baseLine;
    struct map<unsigned short, float, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, float> > > { 
        struct __tree<std::__1::__value_type<unsigned short, float>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, float>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, float> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, float>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, float>, std::__1::less<unsigned short>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _characterAdvanceByChar;
    struct map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > > { 
        struct __tree<std::__1::__value_type<unsigned int, float>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, float> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, float>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _characterKerningByCharPair;
    struct map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > > { 
        struct __tree<std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, SKSpriteNode *> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, SKSpriteNode *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _characterSpriteByChar;
    NSArray * _characterSprites;
    NSString * _fileName;
    NSString * _filePath;
    NSString * _fontName;
    BOOL  _internal;
    float  _lineHeight;
}

+ (id)_fontForFileNamed:(id)arg1;
+ (id)fontForFileNamed:(id)arg1;
+ (id)fontWithTexture:(id)arg1 fontDataString:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)advanceForCharacterNamed:(unsigned short)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fontName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)kerningForCharacterNamed:(unsigned short)arg1 followedBy:(unsigned short)arg2;
- (float)lineHeight;
- (BOOL)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2;
- (id)spriteForCharacterNamed:(unsigned short)arg1;

@end
