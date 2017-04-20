/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFPunchout : NSObject <NSSecureCoding, SFProtobufObject> {
    NSString * _bundleIdentifier;
    NSString * _label;
    NSString * _name;
    NSArray * _urls;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) PBCodable *protobufMessage;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *urls;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (id)punchoutWithURL:(id)arg1;
+ (id)punchoutWithURLs:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (BOOL)canOpenURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)name;
- (id)preferredOpenableURL;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (Class)protobufClass;

- (id)protobufMessage;

@end
