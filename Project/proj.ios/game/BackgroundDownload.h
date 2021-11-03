#import <TiercelObjCBridge/TiercelObjCBridge-Swift.h>
#import "NativeBridge.h"

@interface BackgroundDownload: NSObject

+ (BackgroundDownload*) sharedInstance;
- (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)application:(UIApplication *)application handleEventsForBackgroundURLSession:(NSString *)identifier completionHandler:(void (^)(void))completionHandler API_AVAILABLE(ios(7.0));

- (void) download_update:(TRDownloadTask *)task;
- (void) update_percent:(double)percent;
- (void) download_init;
- (void) download_start:(NSString *)url fileName:(NSString *)fileName fileMd5:(NSString *)fileMd5;
- (void) download_pause:(NSString *)url;
- (void) download_cancel:(NSString *)url;
- (void) download_delete;

@property (strong, nonatomic) TRSessionManager *sessionManager;

@end
