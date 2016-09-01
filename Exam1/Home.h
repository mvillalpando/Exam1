//
//  Home.h
//  Exam1
//
//  Created by Carlos E. Villalpando on 8/31/16.
//  Copyright © 2016 Organo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WebServices.h"
#import "Declarations.h"

@interface Home : UIViewController

@property (strong, nonatomic) IBOutlet UIButton *btnLoad;
@property (strong, nonatomic) IBOutlet UILabel *lblCityValue;
@property (strong, nonatomic) IBOutlet UILabel *lblTempValue;
@property (strong, nonatomic) IBOutlet UILabel *lblPressureValue;
@property (strong, nonatomic) IBOutlet UILabel *lblHumidityValue;
@property (strong, nonatomic) IBOutlet UILabel *lblTempMinValue;
@property (strong, nonatomic) IBOutlet UILabel *lblTempMaxValue;
@property (strong, nonatomic) IBOutlet UILabel *lblSeaLevelValue;
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityLoad;
@property (strong, nonatomic) IBOutlet UITextField *txtLatitude;
@property (strong, nonatomic) IBOutlet UITextField *txtLongitude;
@property (strong, nonatomic) IBOutlet UILabel *lblGroundLevel;

- (IBAction)btnLoadPressed:(id)sender;
@end
