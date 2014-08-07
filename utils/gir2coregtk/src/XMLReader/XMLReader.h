//
// XMLReader.h
// Based on Simple XML to NSDictionary Converter by Troy Brant
// Original source here http://troybrant.net/blog/2010/09/simple-xml-to-nsdictionary-converter/
//

#import <Foundation/Foundation.h>

@interface XMLReader : NSObject
{
    NSMutableArray *dictionaryStack;
    NSMutableString *textInProgress;
    NSError **errorPointer;
}

+ (NSDictionary *)dictionaryForXMLData:(NSData *)data error:(NSError **)errorPointer;
+ (NSDictionary *)dictionaryForXMLString:(NSString *)string error:(NSError **)errorPointer;

@end

