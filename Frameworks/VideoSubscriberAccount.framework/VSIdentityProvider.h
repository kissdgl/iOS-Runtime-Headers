/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appAdamID;
    NSURL * _appStoreRoomURL;
    NSURL * _authenticationURL;
    BOOL  _developer;
    NSString * _nameForSorting;
    BOOL  _prohibitedByStore;
    VSOptional * _providerID;
    VSOptional * _providerInfo;
    NSArray * _supportedAuthenticationSchemes;
    NSArray * _supportedTemplates;
    VSOptional * _uniqueID;
}

@property (nonatomic, copy) NSString *appAdamID;
@property (nonatomic, copy) NSURL *appStoreRoomURL;
@property (nonatomic, copy) NSURL *authenticationURL;
@property (getter=isDeveloper, nonatomic) BOOL developer;
@property (nonatomic, readonly) VSOptional *displayName;
@property (nonatomic, copy) NSString *nameForSorting;
@property (getter=isProhibitedByStore, nonatomic) BOOL prohibitedByStore;
@property (nonatomic, retain) VSOptional *providerID;
@property (nonatomic, retain) VSOptional *providerInfo;
@property (nonatomic, copy) NSArray *supportedAuthenticationSchemes;
@property (nonatomic, copy) NSArray *supportedTemplates;
@property (nonatomic, readonly) BOOL supportsTemplatesSufficientForCurrentPlatform;
@property (nonatomic, readonly) BOOL supportsTemplatesSufficientForSomeKnownPlatform;
@property (nonatomic, retain) VSOptional *uniqueID;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)appStoreRoomURL;
- (id)authenticationURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDeveloper;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isProhibitedByStore;
- (id)nameForSorting;
- (id)providerID;
- (id)providerInfo;
- (void)setAppAdamID:(id)arg1;
- (void)setAppStoreRoomURL:(id)arg1;
- (void)setAuthenticationURL:(id)arg1;
- (void)setDeveloper:(BOOL)arg1;
- (void)setNameForSorting:(id)arg1;
- (void)setProhibitedByStore:(BOOL)arg1;
- (void)setProviderID:(id)arg1;
- (void)setProviderInfo:(id)arg1;
- (void)setSupportedAuthenticationSchemes:(id)arg1;
- (void)setSupportedTemplates:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)supportedAuthenticationSchemes;
- (id)supportedTemplates;
- (BOOL)supportsRequestsExpectingAuthenticationSchemes:(id)arg1;
- (BOOL)supportsTemplatesSufficientForCurrentPlatform;
- (BOOL)supportsTemplatesSufficientForSomeKnownPlatform;
- (id)uniqueID;

@end
