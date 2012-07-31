//
//  MainViewController.h
//  DSC
//
//  Created by Larry on 7/31/12.
//  Copyright (c) 2012 Larry. All rights reserved.
//

#import "FlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
