/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountCredential : NSObject <NSSecureCoding> {
    NSMutableDictionary * _credentialItems;
    NSString * _credentialType;
    BOOL  _dirty;
    NSMutableSet * _dirtyProperties;
    BOOL  _empty;
    ACAccount * _owningAccount;
    BOOL  _requiresTouchID;
}

@property (nonatomic, copy) NSString *credentialType;
@property (getter=isDirty, nonatomic) BOOL dirty;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (getter=isEmpty, nonatomic) BOOL empty;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, copy) NSString *findMyiPhoneToken;
@property (nonatomic, copy) NSString *hsaToken;
@property (nonatomic, copy) NSString *mapsToken;
@property (nonatomic, copy) NSString *oauthRefreshToken;
@property (nonatomic, copy) NSString *oauthToken;
@property (nonatomic, copy) NSString *oauthTokenNoSync;
@property (nonatomic, copy) NSString *oauthTokenSecret;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) BOOL requiresTouchID;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSDate *tokenExpiryDate;

+ (id)additionalServiceSegmentForAccountTypeIdentifier:(id)arg1;
+ (id)allSupportedKeys;
+ (id)credentialPolicyForAccountTypeIdentifier:(id)arg1 key:(id)arg2 clientID:(id)arg3;
+ (id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
+ (id)credentialWithPassword:(id)arg1;
+ (id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearDirtyProperties;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setOwningAccount:(id)arg1;
- (id)credentialItemForKey:(id)arg1;
- (id)credentialItems;
- (id)credentialType;
- (id)dirtyProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (id)findMyiPhoneToken;
- (unsigned int)hash;
- (id)hsaToken;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3;
- (id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
- (id)initWithPassword:(id)arg1;
- (BOOL)isDirty;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)keysForCredentialItems;
- (id)mapsToken;
- (id)oauthRefreshToken;
- (id)oauthToken;
- (id)oauthTokenNoSync;
- (id)oauthTokenSecret;
- (id)password;
- (BOOL)requiresTouchID;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (void)setCredentialType:(id)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)setEmpty:(BOOL)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setFindMyiPhoneToken:(id)arg1;
- (void)setHsaToken:(id)arg1;
- (void)setMapsToken:(id)arg1;
- (void)setOauthRefreshToken:(id)arg1;
- (void)setOauthToken:(id)arg1;
- (void)setOauthTokenNoSync:(id)arg1;
- (void)setOauthTokenSecret:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRequiresTouchID:(BOOL)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenExpiryDate:(id)arg1;
- (id)token;
- (id)tokenExpiryDate;

@end
