/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLProtectionSpace : NSObject <NSCopying, NSSecureCoding> {
    NSURLProtectionSpaceInternal * _internal;
}

@property (nonatomic, readonly, copy) NSString *_sf_highLevelDomainAndPort;
@property (readonly, copy) NSString *authenticationMethod;
@property (readonly, copy) NSString *host;
@property (readonly) BOOL isProxy;
@property (readonly) int port;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *proxyType;
@property (readonly, copy) NSString *realm;
@property (readonly) BOOL receivesCredentialSecurely;
@property (nonatomic, readonly) struct __CFString { }*safari_protocolAsSecAttrProtocolValue;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (BOOL)supportsSecureCoding;

- (struct _CFURLProtectionSpace { }*)_CFURLProtectionSpace;
- (struct _CFURLProtectionSpace { }*)_cfurlprtotectionspace;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (id)_internalInit;
- (id)authenticationMethod;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)distinguishedNames;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)host;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)initWithProxyHost:(id)arg1 port:(int)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isProxy;
- (int)port;
- (id)protocol;
- (id)proxyType;
- (id)realm;
- (BOOL)receivesCredentialSecurely;
- (struct __SecTrust { }*)serverTrust;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_highLevelDomainAndPort;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_HTMLFormProtectionSpaceForURL:(id)arg1;

- (id)safari_URL;
- (id)safari_addressString;
- (BOOL)safari_allowsCredentialSaving;
- (int)safari_compareToHighLevelDomainFromProtectionSpace:(id)arg1;
- (int)safari_compareToHighLevelDomainFromProtectionSpaceOrderingDecimalCharactersLast:(id)arg1;
- (id)safari_creationDateOfCredentialWithUser:(id)arg1;
- (id)safari_protectionSpaceByReplacingHostWithHighlevelDomain;
- (struct __CFString { }*)safari_protocolAsSecAttrProtocolValue;

@end
