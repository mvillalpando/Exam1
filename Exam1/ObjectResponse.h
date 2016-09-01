//
//  GeoApi.h
//  Exam1
//
//  Created by Carlos E. Villalpando on 8/31/16.
//  Copyright © 2016 Organo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Coord.h"
#import "MainObject.h"

@interface ObjectResponse : NSObject
@property (nonatomic,strong) Coord *coord;
@property (nonatomic,strong) MainObject *main;
@property (nonatomic,strong) NSString *name;

@end
