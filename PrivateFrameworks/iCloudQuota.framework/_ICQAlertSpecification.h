/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface _ICQAlertSpecification : NSObject {
    NSString * _altLockScreenMessage;
    NSString * _altMessage;
    int  _defaultButtonIndex;
    BOOL  _disableLockScreenAlert;
    NSMutableDictionary * _linkForButtonIndex;
    NSString * _lockScreenMessage;
    NSString * _lockScreenTitle;
    NSString * _message;
    NSDictionary * _serverDict;
    NSString * _title;
}

@property (nonatomic, retain) NSString *altLockScreenMessage;
@property (nonatomic, retain) NSString *altMessage;
@property (nonatomic) int defaultButtonIndex;
@property (nonatomic) BOOL disableLockScreenAlert;
@property (retain) NSMutableDictionary *linkForButtonIndex;
@property (nonatomic, retain) NSString *lockScreenMessage;
@property (nonatomic, retain) NSString *lockScreenTitle;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSDictionary *serverDict;
@property (nonatomic, retain) NSString *title;

+ (id)alertSpecificationDictionarySampleForLevel:(int)arg1;
+ (id)alertSpecificationSampleForLevel:(int)arg1;

- (void).cxx_destruct;
- (void)_setLinks:(id)arg1 defaultIndex:(unsigned int)arg2;
- (id)altLockScreenMessage;
- (id)altMessage;
- (int)defaultButtonIndex;
- (BOOL)disableLockScreenAlert;
- (id)init;
- (id)initWithServerDictionary:(id)arg1;
- (id)linkForButtonIndex;
- (id)linkForButtonIndex:(int)arg1;
- (id)lockScreenMessage;
- (id)lockScreenTitle;
- (id)message;
- (id)serverDict;
- (void)setAltLockScreenMessage:(id)arg1;
- (void)setAltMessage:(id)arg1;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)setDisableLockScreenAlert:(BOOL)arg1;
- (void)setLink:(id)arg1 forButtonIndex:(int)arg2;
- (void)setLink:(id)arg1 forButtonIndex:(int)arg2 defaultButton:(BOOL)arg3;
- (void)setLinkForButtonIndex:(id)arg1;
- (void)setLockScreenMessage:(id)arg1;
- (void)setLockScreenTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setServerDict:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
