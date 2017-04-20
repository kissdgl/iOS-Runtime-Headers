/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SFMutableResultSection : SFResultSection <NSCopying> {
    unsigned int  _domain;
    NSArray * _hiddenExtResults;
    BOOL  _isGlanceCategory;
    NSMutableOrderedSet * _resultSet;
    NSString * _resultSetIdentifier;
    BOOL  _serialized;
    int  _source;
    NSString * _sourceDomain;
}

@property (nonatomic) unsigned int domain;
@property (nonatomic, retain) NSArray *hiddenExtResults;
@property (nonatomic) BOOL isGlanceCategory;
@property (nonatomic, retain) NSMutableOrderedSet *resultSet;
@property (nonatomic, retain) NSString *resultSetIdentifier;
@property (nonatomic) BOOL serialized;
@property int source;
@property (nonatomic, retain) NSString *sourceDomain;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addHiddenExtResult:(id)arg1;
- (void)addResults:(id)arg1;
- (void)addResults:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addResultsFromArray:(id)arg1;
- (void)clearResults;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)hiddenExtResults;
- (unsigned int)indexOfResult:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultSection:(id)arg1;
- (BOOL)isGlanceCategory;
- (id)objectForFeedback;
- (id)objectForFeedbackWithResultsArray:(id)arg1;
- (void)removeResults:(id)arg1;
- (void)removeResultsAtIndex:(unsigned int)arg1;
- (void)removeResultsInArray:(id)arg1;
- (void)replaceResultsAtIndex:(unsigned int)arg1 withResults:(id)arg2;
- (id)resultSet;
- (id)resultSetIdentifier;
- (id)results;
- (id)resultsAtIndex:(unsigned int)arg1;
- (unsigned int)resultsCount;
- (BOOL)serialized;
- (void)setDomain:(unsigned int)arg1;
- (void)setHiddenExtResults:(id)arg1;
- (void)setIsGlanceCategory:(BOOL)arg1;
- (void)setResultSet:(id)arg1;
- (void)setResultSetIdentifier:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSerialized:(BOOL)arg1;
- (void)setSource:(int)arg1;
- (void)setSourceDomain:(id)arg1;
- (void)sortUsingComparator:(id /* block */)arg1;
- (int)source;
- (id)sourceDomain;

@end
