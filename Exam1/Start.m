//
//  ViewController.m
//  Exam1
//
//  Created by Carlos E. Villalpando on 8/31/16.
//  Copyright © 2016 Organo. All rights reserved.
//

#import "Start.h"
@import GoogleMaps;

@implementation Start {
    GMSMapView *mapView_;
}

- (void)viewDidLoad {
    // Create a GMSCameraPosition that tells the map to display the
    // coordinate -33.86,151.20 at zoom level 6.
    GMSCameraPosition *camera = [GMSCameraPosition cameraWithLatitude:20.791374
                                                            longitude:-103.6253715
                                                                 zoom:4];
    mapView_ = [GMSMapView mapWithFrame:CGRectZero camera:camera];
    mapView_.myLocationEnabled = YES;
    self.view = mapView_;
    
    // Creates a marker in the center of the map.
    GMSMarker *marker = [[GMSMarker alloc] init];
    marker.position = CLLocationCoordinate2DMake(20.791374, -103.6253715);
    marker.title = @"Zapopan, Jalisco";
    marker.snippet = @"Mexico";
    marker.map = mapView_;
}

@end