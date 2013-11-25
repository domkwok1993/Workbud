//
//  MasterViewController.h
//  Workbud
//
//  Created by Antonio Coppola on 25/11/13.
//  Copyright (c) 2013 Antonio Coppola & Dominic Kwok. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
