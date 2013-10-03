//
//  GBAROMTableViewController.h
//  GBA4iOS
//
//  Created by Riley Testut on 7/18/13.
//  Copyright (c) 2013 Riley Testut. All rights reserved.
//

#import <RSTFileBrowserViewController/RSTFileBrowserViewController.h>

@class GBAROMTableViewController;

@protocol GBAROMTableViewControllerAppearanceDelegate <NSObject>

@optional

- (void)romTableViewControllerWillAppear:(GBAROMTableViewController *)romTableViewController;
- (void)romTableViewControllerWillDisappear:(GBAROMTableViewController *)romTableViewController;

@end

@interface GBAROMTableViewController : RSTFileBrowserViewController <UISplitViewControllerDelegate>

@property (weak, nonatomic) id<GBAROMTableViewControllerAppearanceDelegate> appearanceDelegate;

@end
