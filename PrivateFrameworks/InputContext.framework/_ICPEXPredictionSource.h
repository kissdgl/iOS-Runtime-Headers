/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICPEXPredictionSource : NSObject <_ICPredictionSource> {
    PEXQuickTypeBroker * _pexBroker;
}

@property (nonatomic, retain) PEXQuickTypeBroker *pexBroker;

- (void).cxx_destruct;
- (id)_pexKeyForLMKey:(id)arg1;
- (id)_pexTagForTITextContentTag:(id)arg1;
- (void)addSearchContext:(id)arg1 toDictionary:(id)arg2;
- (id)buildConnnectionsLinguisticRequestWithTrigger:(id)arg1;
- (id)buildConnnectionsRequestWithTrigger:(id)arg1;
- (id)buildEventRequestWithTrigger:(id)arg1;
- (id)buildPeopleRequestWithTrigger:(id)arg1;
- (void)connectionsPredictionsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned int)arg3 timeout:(float)arg4 handler:(id /* block */)arg5;
- (void)eventPredictionsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned int)arg3 timeout:(float)arg4 handler:(id /* block */)arg5;
- (BOOL)generateNoresultExplanation:(id*)arg1;
- (id)init;
- (id)initForTesting;
- (BOOL)isFirstPersonTrigger:(id)arg1;
- (void)namesWithContactsLimit:(unsigned int)arg1 withFoundLimit:(unsigned int)arg2 timeout:(float)arg3 handler:(id /* block */)arg4;
- (void)peoplePredictionsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned int)arg3 timeout:(float)arg4 handler:(id /* block */)arg5;
- (id)pexBroker;
- (void)resetBrokerForTesting;
- (void)setPexBroker:(id)arg1;
- (id)toCamelCase:(id)arg1;

@end
