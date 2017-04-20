/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCallMetricsValue : PBCodable <NSCopying> {
    struct { 
        unsigned int timeToEstablish : 1; 
    }  _has;
    double  _timeToEstablish;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) BOOL hasTimeToEstablish;
@property (nonatomic) double timeToEstablish;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimeToEstablish;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimeToEstablish:(BOOL)arg1;
- (void)setTimeToEstablish:(double)arg1;
- (double)timeToEstablish;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
