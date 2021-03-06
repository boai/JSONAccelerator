//
//  JSONFetcher.h
//  JSONModeler
//
//  Created by Jon Rexeisen on 11/3/11.
//  Copyright (c) 2011 Nerdery Interactive Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ModelerDocument.h"

@interface JSONFetcher : NSObject

@property (strong) ModelerDocument *document;

- (void) downloadJSONFromLocation: (NSString *) location withSuccess: (void (^)(id object))success 
                       andFailure:(void (^)(NSHTTPURLResponse *response, NSError *error))failure;

@end
