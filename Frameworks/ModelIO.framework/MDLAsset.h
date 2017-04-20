/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration> {
    NSURL * _URL;
    <MDLMeshBufferAllocator> * _bufferAllocator;
    NSMapTable * _components;
    double  _endTime;
    double  _frameInterval;
    <MDLObjectContainerComponent> * _masters;
    NSMutableArray * _objects;
    double  _startTime;
    MDLVertexDescriptor * _vertexDescriptor;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly) struct MDLAABB { } _bounds;
@property (nonatomic, readonly) struct { } boundingBox;
@property (nonatomic, readonly, retain) <MDLMeshBufferAllocator> *bufferAllocator;
@property (nonatomic, readonly, copy) NSArray *components;
@property (nonatomic, readonly) unsigned int count;
@property (nonatomic) double endTime;
@property (nonatomic) double frameInterval;
@property (nonatomic, retain) <MDLObjectContainerComponent> *masters;
@property (nonatomic) double startTime;
@property (nonatomic, readonly, retain) MDLVertexDescriptor *vertexDescriptor;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

+ (BOOL)canExportFileExtension:(id)arg1;
+ (BOOL)canImportFileExtension:(id)arg1;
+ (id)placeLightProbesWithDensity:(float)arg1 heuristic:(int)arg2 usingIrradianceDataSource:(id)arg3;

- (void).cxx_destruct;
- (id)URL;
- (struct MDLAABB { })_bounds;
- (void)_commonInit;
- (void)_conformVertexBuffers:(id)arg1 error:(id*)arg2;
- (void)addObject:(id)arg1;
- (struct { })boundingBox;
- (struct { })boundingBoxAtTime:(double)arg1;
- (id)bufferAllocator;
- (id)childObjectsOfClass:(Class)arg1;
- (id)componentConformingToProtocol:(id)arg1;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (double)endTime;
- (void)enumerateChildObjectsOfClass:(Class)arg1 usingBlock:(id /* block */)arg2 stopPointer:(BOOL*)arg3;
- (BOOL)exportAssetToURL:(id)arg1;
- (BOOL)exportAssetToURL:(id)arg1 error:(id*)arg2;
- (double)frameInterval;
- (id)init;
- (id)initWithBufferAllocator:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 preserveTopology:(BOOL)arg4 error:(id*)arg5;
- (id)masters;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objects;
- (void)removeObject:(id)arg1;
- (void)setComponent:(id)arg1 forProtocol:(id)arg2;
- (void)setEndTime:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setMasters:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (id)vertexDescriptor;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)assetWithSCNNode:(id)arg1;
+ (id)assetWithSCNNode:(id)arg1 bufferAllocator:(id)arg2;
+ (id)assetWithSCNScene:(id)arg1;
+ (id)assetWithSCNScene:(id)arg1 bufferAllocator:(id)arg2;

@end
