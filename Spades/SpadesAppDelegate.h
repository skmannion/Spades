//
//  SpadesAppDelegate.h
//  Spades
//
//  Created by Russell de Moose on 10/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SpadesViewController;

@interface SpadesAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet SpadesViewController *viewController;

@end
