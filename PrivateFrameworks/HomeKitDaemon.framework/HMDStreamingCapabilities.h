/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDStreamingCapabilities : NSObject <NSSecureCoding> {
    unsigned int  _streamingTierType;
    NSDictionary * _supportedAudioCodecs;
    NSSet * _supportedAudioSampleRates;
    NSSet * _supportedBitRateSettings;
    NSSet * _supportedH264Levels;
    NSSet * _supportedH264Profiles;
    NSSet * _supportedPacketizationModes;
    NSSet * _supportedVideoCodecs;
    NSSet * _supportedVideoResolutions;
    BOOL  _supportsComfortNoise;
}

@property (nonatomic) unsigned int streamingTierType;
@property (nonatomic, readonly) NSDictionary *supportedAudioCodecs;
@property (nonatomic, readonly) NSSet *supportedAudioSampleRates;
@property (nonatomic, readonly) NSSet *supportedBitRateSettings;
@property (nonatomic, readonly) NSSet *supportedH264Levels;
@property (nonatomic, readonly) NSSet *supportedH264Profiles;
@property (nonatomic, readonly) NSSet *supportedPacketizationModes;
@property (nonatomic, readonly) NSSet *supportedVideoCodecs;
@property (nonatomic, readonly) NSSet *supportedVideoResolutions;
@property (nonatomic) BOOL supportsComfortNoise;

+ (BOOL)is16x9Resolution:(id)arg1;
+ (BOOL)is4x3Resolution:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)translateCapabilities:(id)arg1;

- (void).cxx_destruct;
- (void)_updateWithStreamPreference:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamPreference:(id)arg1;
- (void)setStreamingTierType:(unsigned int)arg1;
- (void)setSupportsComfortNoise:(BOOL)arg1;
- (unsigned int)streamingTierType;
- (id)supportedAudioCodecs;
- (id)supportedAudioSampleRates;
- (id)supportedBitRateSettings;
- (id)supportedH264Levels;
- (id)supportedH264Profiles;
- (id)supportedPacketizationModes;
- (id)supportedVideoCodecs;
- (id)supportedVideoResolutions;
- (BOOL)supportsComfortNoise;
- (void)updateWithRemoteSettings:(id)arg1;

@end
