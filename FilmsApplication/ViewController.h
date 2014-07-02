//
//  ViewController.h
//  FilmsApplication
//
//  Created by itisioslab on 01.07.14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UISwitch *switchOutlet;
}
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UIImageView *image;


- (IBAction)switch:(id)sender;

@property NSString *value;
@property UIImage *img;

@end
