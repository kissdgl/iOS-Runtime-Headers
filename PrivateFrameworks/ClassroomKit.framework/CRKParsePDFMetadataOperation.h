/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKParsePDFMetadataOperation : CATOperation {
    CRKBook * _book;
    NSString * _filePath;
    BOOL  _parseImage;
}

@property (nonatomic, readonly) CRKBook *book;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) BOOL parseImage;

- (void).cxx_destruct;
- (id)book;
- (id)filePath;
- (id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(BOOL)arg3;
- (void)main;
- (BOOL)parseImage;

@end
