//
//  RootViewController.h
//  Journal_Niu
//
//  Created by WP on 16/4/18.
//  Copyright © 2016年 yangyang.niu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Config.h"
#import "YLAPI.h"
#import "MJRefresh.h"
#import "WPAlertView.h"
#import "MBProgressHUD.h"

@interface RootViewController : UIViewController

- (id)initViewControllerWithStoryBoardID:(NSString *)storyBoard_id;

- (void)showHUD;

- (void)hideHUD;

@end
