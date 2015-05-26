//
//  User.h
//  CoreDataToDo
//
//  Created by Jeremy Petter on 2015-05-26.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Task;

@interface User : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *assigned;
@end

@interface User (CoreDataGeneratedAccessors)

- (void)addAssignedObject:(Task *)value;
- (void)removeAssignedObject:(Task *)value;
- (void)addAssigned:(NSSet *)values;
- (void)removeAssigned:(NSSet *)values;

@end
