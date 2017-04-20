/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARReply : NSObject <NSSecureCoding> {
    NSData * _data;
    NSString * _geoSessionEntityString;
    NSURLRequest * _httpRequest;
    NSURLResponse * _httpResponse;
    NSArray * _rawResponse;
    float  _scale;
    PARTask * _task;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, copy) NSString *geoSessionEntityString;
@property (nonatomic, retain) NSURLRequest *httpRequest;
@property (nonatomic, retain) NSURLResponse *httpResponse;
@property (nonatomic, retain) NSArray *rawResponse;
@property (nonatomic) float scale;
@property (nonatomic) PARTask *task;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)geoSessionEntityString;
- (id)httpRequest;
- (id)httpResponse;
- (id)initWithCoder:(id)arg1;
- (id)rawResponse;
- (float)scale;
- (void)setData:(id)arg1;
- (void)setGeoSessionEntityString:(id)arg1;
- (void)setHttpRequest:(id)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setRawResponse:(id)arg1;
- (void)setScale:(float)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
