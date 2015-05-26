//
//  Task.h
//  
//
//  Created by Jeremy Petter on 2015-05-26.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Task : NSManagedObject

@property (nonatomic, retain) NSString * taskTitle;
@property (nonatomic, retain) NSString * taskDescription;
@property (nonatomic, retain) NSNumber * taskPriority;
@property (nonatomic, retain) NSNumber * taskCompleted;

@end
