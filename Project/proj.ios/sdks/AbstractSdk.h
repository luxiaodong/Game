#import "NativeBridge.h"

@interface AbstractSdk: NSObject

- (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)applicationWillResignActive:(UIApplication *)application;
- (void)applicationDidEnterBackground:(UIApplication *)application;
- (void)applicationWillEnterForeground:(UIApplication *)application;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)applicationWillTerminate:(UIApplication *)application;

- (NSString*) version;
- (void) sdkInit;
- (void) login;
- (void) logout;
- (void) exit;
- (void) pay:(NSDictionary*)dict;
- (void) submit:(NSDictionary*)dict;
- (void) showFloatFrame:(int)pos;
- (void) hideFloatFrame;
- (void) clickFloatFrame;

@property (nonatomic, assign) bool isLandScape;
@property (nonatomic, assign) bool hasFloatFrame;
@property (nonatomic, assign) bool hasExitDialog;

@end
