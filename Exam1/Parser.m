//
//  Parser.m
//  Exam1
//
//  Created by Carlos E. Villalpando on 8/31/16.
//  Copyright © 2016 Organo. All rights reserved.
//

#import "Parser.h"

@implementation Parser

+ (ObjectResponse *)parseGeoObject {
    //check for valid value
    if(mjsonGeo != nil) {
        // Using ObjectMapper Directly
        ObjectResponse *customizedObject = [[ObjectMapper sharedInstance] objectFromSource:mjsonGeo toInstanceOfClass:[ObjectResponse class]];
        return customizedObject;
    }
    return nil;
}


@end
