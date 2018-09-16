//
//  AppDelegate.h
//  The MoviesDB
//
//  Created by Eyad Heikal on 9/16/18.
//  Copyright © 2018 Eyad Heikal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

