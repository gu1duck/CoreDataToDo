//
//  Task.h
//  CoreDataToDo
//
//  Created by Jeremy Petter on 2015-05-26.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class User;

@interface Task : NSManagedObject

@property (nonatomic, retain) NSNumber * taskCompleted;
@property (nonatomic, retain) NSString * taskDescription;
@property (nonatomic, retain) NSNumber * taskPriority;
@property (nonatomic, retain) NSString * taskTitle;
@property (nonatomic, retain) User *owned;

@end
