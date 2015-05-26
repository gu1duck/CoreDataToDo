//
//  NewTaskVC.m
//  CoreDataToDo
//
//  Created by Jeremy Petter on 2015-05-26.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import "NewTaskVC.h"

@interface NewTaskVC ()

@property (nonatomic) Task* draftTask;
@property (nonatomic) NSManagedObjectContext* managedObjectContext;
@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UITextField *assigneeField;
@property (weak, nonatomic) IBOutlet UILabel *priorityField;
@property (weak, nonatomic) IBOutlet UITextView *descriptionTextView;

@end

@implementation NewTaskVC

- (void)viewDidLoad {
    [super viewDidLoad];
    NSEntityDescription* taskEntity = [NSEntityDescription entityForName:@"Task" inManagedObjectContext:self.managedObjectContext];
    self.draftTask = [[Task alloc] initWithEntity:taskEntity insertIntoManagedObjectContext:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}
- (IBAction)cancelButton:(id)sender {
    [self.delegate newTaskVCDidCancel:self];
}

- (IBAction)doneButton:(id)sender {
    
    
    [self.delegate newTaskVC:self didSaveTask:self.draftTask];
}

@end
