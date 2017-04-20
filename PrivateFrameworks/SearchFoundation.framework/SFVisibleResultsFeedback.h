/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFVisibleResultsFeedback : SFFeedback <NSCopying, SFProtobufObject> {
    NSArray * _results;
    unsigned int  _triggerEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PBCodable *protobufMessage;
@property (nonatomic, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int triggerEvent;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 triggerEvent:(unsigned int)arg2;
- (id)results;
- (void)setResults:(id)arg1;
- (void)setTriggerEvent:(unsigned int)arg1;
- (unsigned int)triggerEvent;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (Class)protobufClass;

- (id)protobufMessage;

@end
