/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppBuild : PBCodable <NSCopying> {
    _INPBAppId * _appId;
    _INPBBuildId * _buildId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBAppId *appId;
@property (nonatomic, retain) _INPBBuildId *buildId;
@property (nonatomic, readonly) BOOL hasAppId;
@property (nonatomic, readonly) BOOL hasBuildId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (void).cxx_destruct;
- (id)appId;
- (id)buildId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAppId;
- (BOOL)hasBuildId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setBuildId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
