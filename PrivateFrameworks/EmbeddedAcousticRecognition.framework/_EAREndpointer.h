/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EAREndpointer : NSObject {
    struct unique_ptr<quasar::HybridEndpointer, std::__1::default_delete<quasar::HybridEndpointer> > { 
        struct __compressed_pair<quasar::HybridEndpointer *, std::__1::default_delete<quasar::HybridEndpointer> > { 
            struct HybridEndpointer {} *__first_; 
        } __ptr_; 
    }  _endpointer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)didEndpointWithFeatures:(id)arg1 task:(id)arg2 samplingRate:(unsigned int)arg3 audioTimestamp:(double)arg4;
- (id)initWithConfiguration:(id)arg1;

@end
