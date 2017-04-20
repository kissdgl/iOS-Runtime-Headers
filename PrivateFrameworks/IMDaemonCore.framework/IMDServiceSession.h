/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDServiceSession : NSObject <IMConnectionMonitorDelegate, IMServiceSessionProtocol, IMSystemMonitorListener> {
    IMDAccount * _account;
    NSMutableArray * _accounts;
    BOOL  _activated;
    BOOL  _awaitingDataContext;
    BOOL  _badPass;
    NSMutableDictionary * _buddies;
    int  _buddyChangeLevel;
    NSMutableSet * _changedBuddies;
    NSMutableDictionary * _chatRoomToGroupChatIdentifierMap;
    NSMutableDictionary * _chatSuppressionFlagMap;
    NSMutableDictionary * _chatSuppressionTimerMap;
    IMConnectionMonitor * _connectionMonitor;
    NSMutableDictionary * _groupChatIdentifierToChatRoomMap;
    NSMutableDictionary * _localProperties;
    NSRecursiveLock * _lock;
    NSString * _loginID;
    IMTimer * _messageExpireStateTimer;
    IMTimer * _messageRoutingTimer;
    IMTimer * _messageWatchdogTimer;
    NSMutableSet * _messagesReceivedDuringStorage;
    NSString * _password;
    unsigned int  _pendingReadReceiptFromStorageCount;
    NSString * _proxyAccount;
    NSString * _proxyHost;
    NSString * _proxyPassword;
    unsigned short  _proxyPort;
    int  _proxyType;
    NSString * _pwRequestID;
    NSTimer * _reconnectTimer;
    NSMutableSet * _registeredChats;
    BOOL  _saveKeychainPassword;
    NSString * _serverHost;
    unsigned short  _serverPort;
    IMDService * _service;
    BOOL  _shouldReconnect;
    NSTimer * _storageTimer;
    NSMutableDictionary * _suppressedMessages;
    IMSystemProxySettingsFetcher * _systemProxySettingsFetcher;
    BOOL  _useSSL;
}

@property (nonatomic, readonly, retain) IMDAccount *account;
@property (nonatomic, readonly, retain) NSDictionary *accountDefaults;
@property (nonatomic, readonly, retain) NSString *accountID;
@property (nonatomic, readonly) BOOL accountNeedsLogin;
@property (nonatomic, readonly) BOOL accountNeedsPassword;
@property (nonatomic, readonly) BOOL accountShouldBeAlwaysLoggedIn;
@property (nonatomic, readonly, retain) NSArray *accounts;
@property (nonatomic, readonly, retain) NSArray *allBuddies;
@property (nonatomic, readonly) BOOL allowedAsChild;
@property (nonatomic, readonly, retain) NSDictionary *buddyPictures;
@property (readonly, retain) NSDictionary *buddyProperties;
@property (nonatomic, readonly, retain) NSString *displayName;
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, readonly) BOOL networkConditionsAllowLogin;
@property (nonatomic, readonly) BOOL overrideNetworkAvailability;
@property (nonatomic, readonly, retain) NSString *password;
@property (nonatomic, readonly, retain) NSString *proxyAccount;
@property (nonatomic, readonly, retain) NSString *proxyHost;
@property (nonatomic, readonly, retain) NSString *proxyPassword;
@property (nonatomic, readonly) unsigned short proxyPort;
@property (nonatomic, readonly) int proxyType;
@property (nonatomic, readonly, retain) NSDictionary *registrationAlertInfo;
@property (nonatomic, readonly) int registrationError;
@property (nonatomic, readonly) int registrationStatus;
@property (nonatomic, readonly, retain) NSString *serverHost;
@property (nonatomic, readonly) unsigned short serverPort;
@property (nonatomic, readonly, retain) IMDService *service;
@property (nonatomic, readonly) BOOL useSSL;

+ (id)__allServiceSessionsWeakReferenceArray;
+ (void)__registerNewServiceSession:(id)arg1;
+ (id)_firewallUserNotificationForService:(id)arg1;
+ (id)allServiceSessions;
+ (id)existingServiceSessionForService:(id)arg1;
+ (void)initialize;

- (void)__forceSetLoginStatus:(unsigned int)arg1 oldStatus:(unsigned int)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5 account:(id)arg6;
- (void)_abandonPWFetcher;
- (void)_abandonSystemProxySettingsFetcher;
- (void)_autoReconnectTimer:(id)arg1;
- (void)_callMonitorStateChanged:(id)arg1;
- (void)_clearAutoReconnectTimer;
- (void)_clearConnectionMonitor;
- (void)_clearDowngradeMarkersForChat:(id)arg1;
- (void)_data_connection_readyWithAccount:(id)arg1;
- (BOOL)_didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 attempts:(int)arg2 date:(id)arg3 account:(id)arg4;
- (void)_didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 attempts:(int)arg3 useMessageSuppression:(BOOL)arg4 completionBlock:(id /* block */)arg5;
- (void)_didReceiveMessagePlayedReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(int)arg3 completionBlock:(id /* block */)arg4;
- (void)_didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 attempts:(int)arg3 useMessageSuppression:(BOOL)arg4 completionBlock:(id /* block */)arg5;
- (void)_didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(int)arg3 completionBlock:(id /* block */)arg4;
- (void)_didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 attempts:(int)arg7 useMessageSuppression:(BOOL)arg8 account:(id)arg9 completionBlock:(id /* block */)arg10;
- (void)_doLoginIgnoringProxy:(BOOL)arg1;
- (void)_doLoginIgnoringProxy:(BOOL)arg1 withAccount:(id)arg2;
- (void)_endMessageSuppressionForChatGUID:(id)arg1;
- (void)_expireStateTimerFired;
- (void)_handleExpireStateDictionary:(id)arg1;
- (void)_handleFirewallUserNotificationDidFinish:(id)arg1;
- (void)_handleRoutingWithDictionary:(id)arg1;
- (void)_handleWatchdogWithDictionary:(id)arg1;
- (BOOL)_hasSuppressedMessageID:(id)arg1 chatGUID:(id)arg2;
- (void)_login_checkUsernameAndPasswordWithAccount:(id)arg1;
- (void)_login_serverSettingsReadyWithAccount:(id)arg1;
- (void)_login_usernameAndPasswordReadyWithAccount:(id)arg1;
- (void)_managedPrefsNotification:(id)arg1;
- (void)_mapRoomChatToGroupChat:(id*)arg1 style:(unsigned char*)arg2;
- (void)_markChatAsDowngraded:(id)arg1;
- (void)_networkChanged:(id)arg1;
- (id)_newHashForChat:(id)arg1 style:(unsigned char)arg2;
- (void)_processConnectionMonitorUpdate;
- (void)_processPotentialNetworkChange;
- (void)_reconnectIfNecessary;
- (void)_reconnectIfNecessaryWithAccount:(id)arg1;
- (void)_routingTimerFired;
- (void)_setAutoReconnectTimer;
- (void)_setPendingConnectionMonitorUpdate;
- (void)_setSuppressedMessage:(id)arg1 inChatWithGUID:(id)arg2;
- (void)_storageTimerFired;
- (void)_suppresionTimerFired:(id)arg1;
- (void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(BOOL)arg1;
- (void)_updateConnectionMonitorWithRemoteHost:(id)arg1;
- (void)_updateExpireStateForMessageGUID:(id)arg1;
- (void)_updateExpireStateTimerWithInterval:(double)arg1;
- (void)_updateRoutingForMessageGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3 account:(id)arg4;
- (void)_updateRoutingTimerWithInterval:(double)arg1;
- (void)_updateStorageTimerWithInterval:(double)arg1;
- (void)_updateWatchdogForMessageGUID:(id)arg1;
- (void)_updateWatchdogTimerWithInterval:(double)arg1;
- (void)_watchdogTimerFired;
- (void)_wentOfflineWithAccount:(id)arg1;
- (void)acceptSubscriptionRequest:(BOOL)arg1 from:(id)arg2;
- (id)account;
- (id)accountDefaults;
- (void)accountDefaultsChanged:(id)arg1;
- (id)accountID;
- (BOOL)accountNeedsLogin;
- (BOOL)accountNeedsPassword;
- (BOOL)accountShouldBeAlwaysLoggedIn;
- (id)accounts;
- (void)addAccount:(id)arg1;
- (void)addAliases:(id)arg1 account:(id)arg2;
- (id)allBuddies;
- (id)allowList;
- (BOOL)allowedAsChild;
- (void)authenticateAccount:(id)arg1;
- (void)autoLogin;
- (void)autoReconnect;
- (void)autoReconnectWithAccount:(id)arg1;
- (void)beginBuddyChanges;
- (BOOL)blockIdleStatus;
- (id)blockList;
- (unsigned int)blockingMode;
- (id)broadcaster;
- (id)broadcasterForACConferenceListeners;
- (id)broadcasterForAVConferenceListeners;
- (id)broadcasterForChatListeners;
- (id)broadcasterForChatObserverListeners;
- (id)broadcasterForListenersWithCapabilities:(unsigned int)arg1;
- (id)broadcasterForVCConferenceListeners;
- (id)buddyPictures;
- (id)buddyProperties;
- (BOOL)canMakeExpireStateChecks;
- (void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (id)canonicalFormOfChatRoom:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (void)canonicalizeChatIdentifier:(id*)arg1 style:(unsigned char*)arg2;
- (unsigned long long)capabilities;
- (void)changeGroup:(id)arg1 changes:(id)arg2;
- (void)changeGroups:(id)arg1;
- (void)changeLocalProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;
- (void)changeMyStatus:(id)arg1 changedKeys:(id)arg2;
- (void)changeProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;
- (id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2;
- (id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)chatRoomForGroupChatIdentifier:(id)arg1;
- (void)clearLocalProperties;
- (void)clearPropertiesOfBuddy:(id)arg1;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)dealloc;
- (void)declineInvitationToChat:(id)arg1 style:(unsigned char)arg2;
- (void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)decrementPendingReadReceiptFromStorageCount;
- (id)defaultChatSuffix;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7 account:(id)arg8;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 unformattedNumber:(id)arg3 countryCode:(id)arg4 forChat:(id)arg5 style:(unsigned char)arg6;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 account:(id)arg6;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 account:(id)arg4;
- (void)didLeaveChat:(id)arg1 style:(unsigned char)arg2;
- (void)didLeaveChat:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (void)didReceiveBalloonPayload:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 messageGUID:(id)arg4 account:(id)arg5;
- (void)didReceiveDisplayNameChange:(id)arg1 fromID:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4 account:(id)arg5;
- (void)didReceiveError:(unsigned int)arg1 forMessageID:(id)arg2 forceError:(BOOL)arg3;
- (void)didReceiveError:(unsigned int)arg1 forMessageID:(id)arg2 forceError:(BOOL)arg3 account:(id)arg4;
- (void)didReceiveErrorMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveInvitation:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4;
- (BOOL)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2;
- (BOOL)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2 account:(id)arg3;
- (void)didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 useMessageSuppression:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)didReceiveMessagePlayedReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 useMessageSuppression:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 useMessageSuppression:(BOOL)arg7 account:(id)arg8 completionBlock:(id /* block */)arg9;
- (void)didReceiveMessages:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4;
- (void)didReceiveReplaceMessageID:(int)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didSendBalloonPayload:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 messageGUID:(id)arg4 account:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 forceDate:(id)arg5;
- (void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 forceDate:(id)arg4;
- (void)didSendMessagePlayedReceiptForMessageID:(id)arg1;
- (void)didSendMessagePlayedReceiptForMessageID:(id)arg1 account:(id)arg2;
- (void)didSendMessageReadReceiptForMessageID:(id)arg1;
- (void)didSendMessageReadReceiptForMessageID:(id)arg1 account:(id)arg2;
- (void)didSendMessageSavedReceiptForMessageID:(id)arg1;
- (void)didSendMessageSavedReceiptForMessageID:(id)arg1 account:(id)arg2;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6 account:(id)arg7;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 handleInfo:(id)arg4;
- (void)disallowReconnection;
- (id)displayName;
- (void)endBuddyChanges;
- (void)endMessageSuppression;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (id)groupChatIdentifierForChatRoom:(id)arg1;
- (id)groups;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (void)holdBuddyUpdates;
- (void)incrementPendingReadReceiptFromStorageCount;
- (id)initWithAccount:(id)arg1 service:(id)arg2;
- (void)invitePerson:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (BOOL)isActive;
- (BOOL)isAwaitingStorageTimer;
- (BOOL)isChatRegistered:(id)arg1 style:(unsigned char)arg2;
- (void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 joinProperties:(id)arg5;
- (void)joinChat:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 joinProperties:(id)arg4;
- (void)joinChat:(id)arg1 style:(unsigned char)arg2 joinProperties:(id)arg3;
- (void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 joinProperties:(id)arg6;
- (void)leaveAllChats;
- (void)leaveChat:(id)arg1 style:(unsigned char)arg2;
- (void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)leaveiMessageChat:(id)arg1 style:(unsigned char)arg2;
- (void)leaveiMessageChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (id)localPropertiesOfBuddy:(id)arg1;
- (id)localProperty:(id)arg1 ofBuddy:(id)arg2;
- (void)login;
- (id)loginID;
- (id)loginIDForAccount:(id)arg1;
- (void)loginServiceSessionWithAccount:(id)arg1;
- (void)loginWithAccount:(id)arg1;
- (void)logout;
- (void)logoutServiceSessionWithAccount:(id)arg1;
- (void)logoutWithAccount:(id)arg1;
- (void)markBuddiesAsChanged:(id)arg1;
- (BOOL)networkConditionsAllowLogin;
- (void)noteBadPassword;
- (void)noteItemFromStorage:(id)arg1;
- (void)noteLastItemFromStorage:(id)arg1;
- (void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1;
- (void)noteSuppressedMessageUpdate:(id)arg1;
- (void)notifyDidSendMessageID:(id)arg1;
- (void)notifyDidSendMessageID:(id)arg1 account:(id)arg2 shouldNotify:(BOOL)arg3;
- (void)notifyDidSendMessageID:(id)arg1 shouldNotify:(BOOL)arg2;
- (BOOL)overrideNetworkAvailability;
- (id)password;
- (void)passwordUpdatedWithAccount:(id)arg1;
- (unsigned int)pendingReadReceiptFromStorageCount;
- (id)pictureKeyForBuddy:(id)arg1;
- (id)pictureOfBuddy:(id)arg1;
- (void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 allowWatchdog:(BOOL)arg4 account:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 allowWatchdog:(BOOL)arg4 completionBlock:(id /* block */)arg5;
- (id)property:(id)arg1 ofBuddy:(id)arg2;
- (id)proxyAccount;
- (id)proxyHost;
- (id)proxyPassword;
- (unsigned short)proxyPort;
- (int)proxyType;
- (void)refreshServiceCapabilities;
- (void)registerAccount:(id)arg1;
- (void)registerChat:(id)arg1 groupID:(id)arg2 style:(unsigned char)arg3;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 account:(id)arg6;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3;
- (id)registrationAlertInfo;
- (int)registrationError;
- (int)registrationStatus;
- (void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3;
- (void)removeAccount:(id)arg1;
- (void)removeAliases:(id)arg1 account:(id)arg2;
- (void)removeChat:(id)arg1 style:(unsigned char)arg2;
- (void)removeChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)removePersonInfo:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)removePersonInfoFromiMessageChat:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)replayMessage:(id)arg1;
- (void)requestGroups;
- (void)requestProperty:(id)arg1 ofPerson:(id)arg2;
- (void)requestSubscriptionTo:(id)arg1;
- (void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)resumeBuddyUpdates;
- (void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(id)arg4 conference:(id)arg5;
- (void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3;
- (void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 toChatID:(id)arg4 identifier:(id)arg5 style:(unsigned char)arg6;
- (void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)sendFileTransfer:(id)arg1 toPerson:(id)arg2;
- (void)sendLocationSharingInfo:(id)arg1 toID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3;
- (void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4;
- (void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5;
- (void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3;
- (id)server;
- (id)serverHost;
- (unsigned short)serverPort;
- (id)service;
- (void)serviceSessionDidLoginWithAccount:(id)arg1;
- (void)serviceSessionDidLogoutWithAccount:(id)arg1;
- (void)serviceSessionDidLogoutWithMessage:(id)arg1 reason:(int)arg2 properties:(id)arg3 account:(id)arg4;
- (void)sessionDidBecomeActive;
- (void)sessionWillBecomeInactiveWithAccount:(id)arg1;
- (void)setAllowList:(id)arg1;
- (void)setBlockIdleStatus:(BOOL)arg1;
- (void)setBlockList:(id)arg1;
- (void)setBlockingMode:(unsigned int)arg1;
- (void)setIdleTime:(unsigned long)arg1;
- (void)setPendingReadReceiptFromStorageCount:(unsigned int)arg1;
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChat:(id)arg3 style:(unsigned char)arg4;
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3;
- (BOOL)shouldImitateGroupChatUsingChatRooms;
- (void)startWatchingBuddy:(id)arg1;
- (void)stopWatchingBuddy:(id)arg1;
- (void)systemDidUnlock;
- (void)systemProxySettingsFetcher:(id)arg1 retrievedAccount:(id)arg2 password:(id)arg3;
- (void)systemProxySettingsFetcher:(id)arg1 retrievedHost:(id)arg2 port:(unsigned short)arg3 protocol:(int)arg4;
- (void)unregisterAccount:(id)arg1;
- (void)unregisterChat:(id)arg1 style:(unsigned char)arg2;
- (void)unvalidateAliases:(id)arg1 account:(id)arg2;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3;
- (void)updateConnectionMonitorWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)updateDisplayName:(id)arg1 fromDisplayName:(id)arg2 forChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)useChatRoom:(id)arg1 forGroupChatIdentifier:(id)arg2;
- (BOOL)useSSL;
- (void)userNotificationDidFinish:(id)arg1;
- (void)validateAliases:(id)arg1 account:(id)arg2;
- (void)validateProfileWithAccount:(id)arg1;
- (struct _FZChatRoomValidity { int x1; unsigned short x2; })validityOfChatRoomName:(id)arg1;
- (BOOL)warnIfPortBlocked:(int)arg1 forAction:(id)arg2;

@end
