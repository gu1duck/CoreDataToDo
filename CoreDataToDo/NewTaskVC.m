//
//  NewTaskVC.m
//  CoreDataToDo
//
//  Created by Jeremy Petter on 2015-05-26.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import "NewTaskVC.h"

@interface NewTaskVC ()

@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UITextField *assigneeField;
@property (weak, nonatomic) IBOutlet UILabel *priorityField;
@property (weak, nonatomic) IBOutlet UITextView *descriptionTextView;

@end

@implementation NewTaskVC

- (void)viewDidLoad {
    [super viewDidLoad];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}
- (IBAction)cancelButton:(id)sender {
    [self.delegate newTaskVCDidCancel:self];
}

- (IBAction)doneButton:(id)sender {
    
    self.draftTask.taskTitle = self.titleField.text;
    self.draftTask.taskPriority = [NSNumber numberWithInteger:[self.priorityField.text integerValue]];
    self.draftTask.taskDescription = self.descriptionTextView.text;
    [self.delegate newTaskVC:self didSaveTask:self.draftTask];
}

@end
