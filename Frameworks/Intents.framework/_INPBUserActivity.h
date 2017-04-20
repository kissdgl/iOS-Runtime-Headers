/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBUserActivity : PBCodable <NSCopying> {
    NSData * _data;
    NSString * _title;
    PBUnknownFields * _unknownFields;
    NSString * _uri;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) BOOL hasData;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic, readonly) BOOL hasUri;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *uri;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasData;
- (BOOL)hasTitle;
- (BOOL)hasUri;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUri:(id)arg1;
- (id)title;
- (id)unknownFields;
- (id)uri;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
