//
//  AppDelegate.h
//  Game
//
//  Created by Lu xiaodong on 2019/6/13.
//  Copyright © 2019 com.aoshitang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TiercelObjCBridge/TiercelObjCBridge-Swift.h>
#import "Game-Swift.h"
#import "ViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UIWindow *unityWindow;

@property (strong, nonatomic) UnityAppController *unityController;

-(void) showUnityWindow;
-(void) hideUnityWindow;

@end

