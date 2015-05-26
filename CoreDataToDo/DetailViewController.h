//
//  DetailViewController.h
//  CoreDataToDo
//
//  Created by Jeremy Petter on 2015-05-26.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Task* detailTask;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

