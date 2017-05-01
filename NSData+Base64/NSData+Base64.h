#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSData (Base64)

// Returns a Base 64 encoded string representation of the data object.
//
- (NSString *) base64EncodingWithLineLength:(unsigned int) lineLength;

@end


