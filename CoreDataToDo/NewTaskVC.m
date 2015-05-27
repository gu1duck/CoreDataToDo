//
//  NewTaskVC.m
//  CoreDataToDo
//
//  Created by Jeremy Petter on 2015-05-26.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import "NewTaskVC.h"
#import "UserSelectorVC.h"

@interface NewTaskVC ()<UserSelectorDelegate>

@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UITextField *assigneeField;
@property (weak, nonatomic) IBOutlet UILabel *priorityField;
@property (weak, nonatomic) IBOutlet UITextView *descriptionTextView;
@property (nonatomic) User* selectedUser;

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
    [self.delegate newTaskVC:self didSaveTask:self.draftTask forUser:self.selectedUser];
}

-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender{
    if ([segue.identifier isEqualToString:@"userSelector"]){
        UserSelectorVC* controller = segue.destinationViewController;
        controller.delegate = self;
        controller.managedObjectContext = self.managedObjectContext;
        controller.selectedUser = self.selectedUser;
        
    }
}

-(void)userSelector:(UserSelectorVC *)userSelector DidSave:(User *)user{
    self.selectedUser = user;
    self.assigneeField.text = user.name;
    [self.navigationController popViewControllerAnimated:YES];
}

//-(void)userSelectorDidCancel:(UserSelectorVC *)userSelector{
//    [self dismissViewControllerAnimated:YES completion:nil];
//}

@end
