//
//  UserSelector.h
//  CoreDataToDo
//
//  Created by Jeremy Petter on 2015-05-26.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "User.h"

@class UserSelectorVC;

@protocol UserSelectorDelegate <NSObject>

-(void) userSelector: (UserSelectorVC*)userSelector DidSave: (User*) user;

@end

@interface UserSelectorVC : UITableViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) id<UserSelectorDelegate> delegate;
@property (strong, nonatomic) User* selectedUser;
@property (nonatomic) NSFetchedResultsController *fetchedResultsController;

@end
