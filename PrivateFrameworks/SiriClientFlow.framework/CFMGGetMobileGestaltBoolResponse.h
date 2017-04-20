/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFMGGetMobileGestaltBoolResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic) BOOL value;

+ (id)getMobileGestaltBoolResponse;
+ (id)getMobileGestaltBoolResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(BOOL)arg1;
- (BOOL)value;

@end
