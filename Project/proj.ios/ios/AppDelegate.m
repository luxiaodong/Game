//
//  AppDelegate.m
//  Game
//
//  Created by Lu xiaodong on 2019/6/13.
//  Copyright © 2019 com.aoshitang. All rights reserved.
//

#import "AppDelegate.h"
#import "GameDelegate.h"

@interface AppDelegate ()

@property (nonatomic, strong) UINavigationController* navigationController;

@end

@implementation AppDelegate

- (UIWindow *)unityWindow{
    return UnityGetMainWindow();
}

- (void) showUnityWindow
{
    [self.unityWindow makeKeyAndVisible];
}

- (void) hideUnityWindow
{
    [self.window makeKeyAndVisible];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
//    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
//    self.window.backgroundColor = [UIColor whiteColor];
//    ViewController* viewController = [[ViewController alloc] initWithNibName:nil bundle:nil];
//    self.navigationController = [[UINavigationController alloc] initWithRootViewController:viewController];
//    self.window.rootViewController = viewController;

    self.unityController = [[UnityAppController alloc] init];
    [self.unityController application:application didFinishLaunchingWithOptions:launchOptions];
    [self showUnityWindow];

    [GameDelegate application:application didFinishLaunchingWithOptions:launchOptions];
    return YES;
}


- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
    [GameDelegate applicationWillResignActive:application];
    [self.unityController applicationWillResignActive:application];
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    
    [GameDelegate applicationDidEnterBackground:application];
    [self.unityController applicationDidEnterBackground:application];
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
    
    [GameDelegate applicationWillEnterForeground:application];
    [self.unityController applicationWillEnterForeground:application];
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    
    [GameDelegate applicationDidBecomeActive:application];
    [self.unityController applicationDidBecomeActive:application];
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    
    [GameDelegate applicationWillTerminate:application];
    [self.unityController applicationWillTerminate:application];
}

// 推送
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken
{
    [GameDelegate application:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
}

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error
{
    [GameDelegate application:application didFailToRegisterForRemoteNotificationsWithError:error];
}

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler
{
    [GameDelegate application:application didReceiveRemoteNotification:userInfo fetchCompletionHandler:completionHandler];
}

// 后台下载
- (void)application:(UIApplication *)application handleEventsForBackgroundURLSession:(NSString *)identifier completionHandler:(void (^)(void))completionHandler API_AVAILABLE(ios(7.0)){

    [GameDelegate application:application handleEventsForBackgroundURLSession:identifier completionHandler:completionHandler];
}

@end
