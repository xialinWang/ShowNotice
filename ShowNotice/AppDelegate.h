//
//  AppDelegate.h
//  ShowNotice
//
//  Created by 王小林 on 2016/11/15.
//  Copyright © 2016年 王小林. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

