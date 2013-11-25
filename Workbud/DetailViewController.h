//
//  DetailViewController.h
//  Workbud
//
//  Created by Antonio Coppola on 25/11/13.
//  Copyright (c) 2013 Antonio Coppola & Dominic Kwok. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
