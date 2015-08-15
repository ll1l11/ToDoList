//
//  ToDoItem.h
//  ToDoList
//
//  Created by w3 on 15/8/15.
//  Copyright (c) 2015年 w3. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
