//
//  UserListVC.h
//  CoreDataToDo
//
//  Created by Jeremy Petter on 2015-05-26.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface UserListVC : UITableViewController

@property (nonatomic) NSFetchedResultsController* fetchedResultsController;
@property (nonatomic) NSManagedObjectContext* managedObjectContext;


@end
