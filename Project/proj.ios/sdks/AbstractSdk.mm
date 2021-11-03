
#import "AbstractSdk.h"
@implementation AbstractSdk

@synthesize isLandScape;
@synthesize hasFloatFrame;
@synthesize hasExitDialog;

- (id)init
{
    self = [super init];
    
    if (self)
    {
        [self sdkInit];
    }
    
    return self;
}

- (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{}

- (void)applicationWillResignActive:(UIApplication *)application
{}

- (void)applicationDidEnterBackground:(UIApplication *)application
{}

- (void)applicationWillEnterForeground:(UIApplication *)application
{}

- (void)applicationDidBecomeActive:(UIApplication *)application
{}

- (void)applicationWillTerminate:(UIApplication *)application
{}

- (NSString*) version
{
    return @"1.0.0.0";
}

- (void) sdkInit
{
    self.isLandScape          = NO;
    self.hasFloatFrame        = NO;
    self.hasExitDialog        = NO;
}

- (void)login
{
    NSLog(@"login");
}

- (void)logout
{
    NSLog(@"logout");
}

- (void) exit
{
    NSLog(@"exit");
}

- (void) pay:(NSDictionary*)dict
{}

- (void) submit:(NSDictionary*)dict
{
    //--1为进入游戏，2为创建角色，3为角色升级，4为退出
//    NSString* action = [dict objectForKey:@"point"];
}

- (void) showFloatFrame:(int)pos
{}

- (void) hideFloatFrame
{}

- (void) clickFloatFrame
{}

@end
