//
//  ToDoItem.h
//  ToDoList
//
//  Created by Scott Dierbeck on 2/25/15.
//  Copyright (c) 2015 Scott Dierbeck. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
