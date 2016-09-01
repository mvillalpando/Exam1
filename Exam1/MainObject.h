//
//  MainObject.h
//  Exam1
//
//  Created by Carlos E. Villalpando on 9/1/16.
//  Copyright © 2016 Organo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MainObject : NSObject
@property (nonatomic) float temp;
@property (nonatomic) float pressure;
@property (nonatomic) float humidity;
@property (nonatomic) float temp_min;
@property (nonatomic) float temp_max;
@property (nonatomic) float sea_level;
@property (nonatomic) float grnd_level;

@end
