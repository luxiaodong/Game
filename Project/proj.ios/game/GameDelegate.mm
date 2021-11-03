#import "NativeBridge.h"
#import "GameDelegate.h"
#import "Game-Swift.h"
#import "BackgroundDownload.h"
#import "SdkDelegate.h"
#import "NotificationDelegate.h"

@implementation GameDelegate

+(void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [[[SdkDelegate sharedInstance] currentSDK] application:application didFinishLaunchingWithOptions:launchOptions];
    [[BackgroundDownload sharedInstance] application:application didFinishLaunchingWithOptions:launchOptions];
    [[NotificationDelegate sharedInstance] application:application didFinishLaunchingWithOptions:launchOptions];
}

+ (void)applicationWillResignActive:(UIApplication *)application
{
    [[[SdkDelegate sharedInstance] currentSDK] applicationWillResignActive:application];
}

+ (void)applicationDidEnterBackground:(UIApplication *)application
{
    [[[SdkDelegate sharedInstance] currentSDK] applicationDidEnterBackground:application];
}

+ (void)applicationWillEnterForeground:(UIApplication *)application
{
    [[[SdkDelegate sharedInstance] currentSDK] applicationWillEnterForeground:application];
}

+ (void)applicationDidBecomeActive:(UIApplication *)application
{
    [[[SdkDelegate sharedInstance] currentSDK] applicationDidBecomeActive:application];
}

+ (void)applicationWillTerminate:(UIApplication *)application
{
    [[[SdkDelegate sharedInstance] currentSDK] applicationWillTerminate:application];
}

// 推送
+ (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken
{
    [[NotificationDelegate sharedInstance] application:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
}

+ (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error
{
    [[NotificationDelegate sharedInstance] application:application didFailToRegisterForRemoteNotificationsWithError:error];
}

+ (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler
{
    [[NotificationDelegate sharedInstance] application:application didReceiveRemoteNotification:userInfo fetchCompletionHandler:completionHandler];
}

// 后台下载
+ (void)application:(UIApplication *)application handleEventsForBackgroundURLSession:(NSString *)identifier completionHandler:(void (^)(void))completionHandler API_AVAILABLE(ios(7.0))
{
    [[BackgroundDownload sharedInstance] application:application handleEventsForBackgroundURLSession:identifier completionHandler:completionHandler];
}

+(void) handle_action:(NSString*)action WithDict:(NSDictionary*)dict
{
    if([action isEqualToString:@"sdk.test"])
    {
        [SwiftBridge test];
        [GameDelegate test];
    }
    // sdk交互关键字
    else if([action isEqualToString:@"sdk.init"])
    {
        [[[SdkDelegate sharedInstance] currentSDK] sdkInit];
    }
    else if([action isEqualToString:@"sdk.login"])
    {
        [[[SdkDelegate sharedInstance] currentSDK] login];
    }
    else if([action isEqualToString:@"sdk.logout"])
    {
        [[[SdkDelegate sharedInstance] currentSDK] logout];
    }
    else if([action isEqualToString:@"sdk.exit"])
    {
        [[[SdkDelegate sharedInstance] currentSDK] exit];
    }
    else if([action isEqualToString:@"sdk.pay"])
    {
        [[[SdkDelegate sharedInstance] currentSDK] pay:dict];
    }
    else if([action isEqualToString:@"sdk.submit"])
    {
        [[[SdkDelegate sharedInstance] currentSDK] submit:dict];
    }
    // 后台下载交互关键字
    else if([action isEqualToString:@"download.init"])
    {
        [[BackgroundDownload sharedInstance] download_init];
    }
    else if([action isEqualToString:@"download.start"])
    {
        NSString* url = [dict objectForKey:@"url"];
        NSString* fileName = [dict objectForKey:@"fileName"];
        NSString* fileMd5 = [dict objectForKey:@"fileMd5"];
        [[BackgroundDownload sharedInstance] download_start:url fileName:fileName fileMd5:fileMd5];
    }
    else if([action isEqualToString:@"download.pause"])
    {
        NSString* url = [dict objectForKey:@"url"];
        [[BackgroundDownload sharedInstance] download_pause:url];
    }
    else if([action isEqualToString:@"download.cancel"])
    {
        NSString* url = [dict objectForKey:@"url"];
        [[BackgroundDownload sharedInstance] download_cancel:url];
    }
    else if([action isEqualToString:@"download.delete"])
    {
        [[BackgroundDownload sharedInstance] download_delete];
    }
}


+(void) test
{
    NSDictionary *dict = [NSDictionary dictionaryWithObjectsAndKeys:
                              @"sdk.test",@"action",
                              @"1",@"result",
                              @"test",@"msg",
                              nil];

    sendToCSharp(dict);
}

@end
