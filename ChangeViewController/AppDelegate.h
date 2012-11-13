//
//  AppDelegate.h
//  ChangeViewController
//
//  Created by Luis Enrique Espinoza Severino on 12-11-12.
//  Copyright (c) 2012 Home. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

- (void)changeVC;

@end
