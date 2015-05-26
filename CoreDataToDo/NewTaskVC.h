//
//  NewTaskVC.h
//  CoreDataToDo
//
//  Created by Jeremy Petter on 2015-05-26.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@class NewTaskVC;

@protocol NewTaskVCDelegate <NSObject>

-(void)newTaskVCDidCancel:(NewTaskVC*)newTaskVC;
-(void)newTaskVC:(NewTaskVC*)newTaskVC didSaveTask:(Task*)task;

@end

@interface NewTaskVC : UITableViewController

@property (nonatomic, weak) id<NewTaskVCDelegate> delegate;
@property (nonatomic) Task* draftTask;

@end
