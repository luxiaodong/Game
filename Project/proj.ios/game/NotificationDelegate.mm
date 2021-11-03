
#import "NotificationDelegate.h"
#import <UserNotifications/UserNotifications.h>

@implementation NotificationDelegate

static NotificationDelegate* _sharedInstance = nil;

+ (NotificationDelegate*)sharedInstance
{
    @synchronized(self.class)
    {
        if (_sharedInstance == nil) {
            _sharedInstance = [[self.class alloc] init];
        }

        return _sharedInstance;
    }
}

-(void) application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    UIUserNotificationType userNotificationTypes = (UIUserNotificationTypeAlert |
                                                    UIUserNotificationTypeBadge |
                                                    UIUserNotificationTypeSound);
    UIUserNotificationSettings *settings = [UIUserNotificationSettings settingsForTypes:userNotificationTypes
                                                                             categories:nil];
    [application registerUserNotificationSettings:settings];

//    UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
//    center.delegate = self;

    [application registerForRemoteNotifications];
//  [application unregisterForRemoteNotifications];
}

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken
{
    NSLog(@"success %@", [NSString stringWithFormat:@"%@", deviceToken]);
//    NSString *str  =[[NSString alloc] initWithData:deviceToken encoding:NSUTF8StringEncoding];
//    NSLog(@"success ==================> %@", str);
//    PFInstallation *currentInstallation = [PFInstallation currentInstallation];
//    [currentInstallation setDeviceTokenFromData:deviceToken];
//    [currentInstallation saveInBackground];
}

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error
{
    NSLog(@"failed %@", [NSString stringWithFormat:@"%@", error]);
}

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler
{
    NSLog(@"didReceiveRemoteNotification");
    if (userInfo)
    {
        //发送lua前要检测lua虚拟机是否启动,没有的话要缓存起来.
        completionHandler(UIBackgroundFetchResultNewData);
    }
    else
    {
        completionHandler(UIBackgroundFetchResultNoData);
    }
}

// 此两个回调方法对应可操作通知类型
//- (void)application:(UIApplication *)application handleActionWithIdentifier:(nullable NSString *)identifier forRemoteNotification:(NSDictionary *)userInfo completionHandler:(void(^)())completionHandler {
//}

//- (void)application:(UIApplication *)application handleActionWithIdentifier:(nullable NSString *)identifier forRemoteNotification:(NSDictionary *)userInfo withResponseInfo:(NSDictionary *)responseInfo completionHandler:(void(^)())completionHandler {
//}

@end
