/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationPersonalizedLimit : NSObject <FCFeedTransforming> {
    <FCFeedPersonalizing> * _feedPersonalizer;
    double  _timeInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) double timeInterval;

+ (id)transformationWithPersonalizer:(id)arg1 dateRange:(id)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 timeInterval:(double)arg2;

- (void).cxx_destruct;
- (id)feedPersonalizer;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setTimeInterval:(double)arg1;
- (double)timeInterval;
- (id)transformFeedItems:(id)arg1;

@end
