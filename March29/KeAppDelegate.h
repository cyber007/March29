//
//  KeAppDelegate.h
//  March29
//
//  Created by admin on 3/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class View;

@interface KeAppDelegate : UIResponder <UIApplicationDelegate> {
    View *view;
    UIWindow *_window;
}


@property (strong, nonatomic) UIWindow *window;

@end
