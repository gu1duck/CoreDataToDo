//
//  MasterViewController.h
//  CoreDataToDo
//
//  Created by Jeremy Petter on 2015-05-26.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "NewTaskVC.h"

@interface TaskListVC : UITableViewController <NSFetchedResultsControllerDelegate, NewTaskVCDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) NSPredicate* predicate;


@end

