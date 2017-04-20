/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleIDsWidgetSectionSpecificConfig : PBCodable <NSCopying> {
    NSMutableArray * _articles;
}

@property (nonatomic, retain) NSMutableArray *articles;

+ (Class)articlesType;

- (void)addArticles:(id)arg1;
- (id)articles;
- (id)articlesAtIndex:(unsigned int)arg1;
- (unsigned int)articlesCount;
- (void)clearArticles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setArticles:(id)arg1;
- (void)writeTo:(id)arg1;

@end
