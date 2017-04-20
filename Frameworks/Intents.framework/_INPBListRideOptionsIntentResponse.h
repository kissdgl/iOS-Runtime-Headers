/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBListRideOptionsIntentResponse : PBCodable <NSCopying> {
    _INPBTimestamp * _expirationDate;
    NSMutableArray * _paymentMethods;
    NSMutableArray * _rideOptions;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBTimestamp *expirationDate;
@property (nonatomic, readonly) BOOL hasExpirationDate;
@property (nonatomic, retain) NSMutableArray *paymentMethods;
@property (nonatomic, retain) NSMutableArray *rideOptions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;
+ (Class)paymentMethodsType;
+ (Class)rideOptionsType;

- (void).cxx_destruct;
- (void)addPaymentMethods:(id)arg1;
- (void)addRideOptions:(id)arg1;
- (void)clearPaymentMethods;
- (void)clearRideOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expirationDate;
- (BOOL)hasExpirationDate;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentMethods;
- (id)paymentMethodsAtIndex:(unsigned int)arg1;
- (unsigned int)paymentMethodsCount;
- (BOOL)readFrom:(id)arg1;
- (id)rideOptions;
- (id)rideOptionsAtIndex:(unsigned int)arg1;
- (unsigned int)rideOptionsCount;
- (void)setExpirationDate:(id)arg1;
- (void)setPaymentMethods:(id)arg1;
- (void)setRideOptions:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
