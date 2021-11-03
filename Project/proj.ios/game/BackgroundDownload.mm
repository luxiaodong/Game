
#import "BackgroundDownload.h"

@implementation BackgroundDownload

static BackgroundDownload* _sharedInstance = nil;

+ (BackgroundDownload*)sharedInstance
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
    TRSessionConfiguration *configuraion = [[TRSessionConfiguration alloc] init];
    configuraion.allowsCellularAccess = NO;
    self.sessionManager = [[TRSessionManager alloc] initWithIdentifier:@"version.update" configuration:configuraion];
}

- (void)application:(UIApplication *)application handleEventsForBackgroundURLSession:(NSString *)identifier completionHandler:(void (^)(void))completionHandler API_AVAILABLE(ios(7.0))
{
    if (identifier == self.sessionManager.identifier) {
        self.sessionManager.completionHandler = completionHandler;
    }
}

-(void) download_update:(TRDownloadTask *)task
{
    double per = task.progress.fractionCompleted;
//    NSLog(@"update %f", per);
//    double speed = task.speed;
//    double remain = task.timeRemaining;
    [self update_percent:per];
}

-(void) update_percent:(double)percent
{
    NSDictionary *dict = [NSDictionary dictionaryWithObjectsAndKeys:
                          @"download.update",@"action",
                          @"1",@"result",
                          [NSString stringWithFormat:@"%.2f%%", percent * 100],@"percent",
                          nil];
    sendToCSharp(dict);
}

-(void) download_init
{
    NSLog(@" [BackgroundDownload] download_init");
    TRSessionManager *sessionManager = self.sessionManager;
    if (sessionManager.tasks.count > 0) {
        TRDownloadTask *task = sessionManager.tasks[0];
        [self download_update:task];
    }
    
    NSDictionary *backDict = [NSDictionary dictionaryWithObjectsAndKeys:
                          @"download.init",@"action",
                          @"1",@"result",
                          [NSString stringWithFormat:@"%lu", sessionManager.tasks.count],@"count",
                          nil];
    
    sendToCSharp(backDict);
}


- (void) download_start:(NSString *)url fileName:(NSString *)fileName fileMd5:(NSString *)fileMd5
{
    NSLog(@" [BackgroundDownload] download_start");
    TRSessionManager *sessionManager = self.sessionManager;
    [[[[[sessionManager downloadWithUrl:url headers:nil fileName:fileName] progressOnMainQueue:YES handler:^(TRDownloadTask * _Nonnull task) {
        [self download_update:task];
    }] successOnMainQueue:YES handler:^(TRDownloadTask * _Nonnull task) {
        [self download_update:task];
        NSLog(@" [BackgroundDownload] success");
        
        NSDictionary *backDict = [NSDictionary dictionaryWithObjectsAndKeys:
                              @"download.result",@"action",
                              @"1",@"result",
                              [sessionManager.cache filePathWithUrl:url],@"filePath",
                              nil];
        sendToCSharp(backDict);
        
    }] failureOnMainQueue:YES handler:^(TRDownloadTask * _Nonnull task) {
        [self download_update:task];
        NSLog(@" [BackgroundDownload] failed");
        
        NSDictionary *backDict = [NSDictionary dictionaryWithObjectsAndKeys:
                              @"download.result",@"action",
                              @"1",@"result",
                              nil];
        sendToCSharp(backDict);
        
    }] validateFileWithCode:fileMd5 type:TRFileVerificationTypeMd5 onMainQueue:YES handler:^(TRDownloadTask * _Nonnull task) {
        [self download_update:task];
        
        NSLog(@"=======================================");
        NSLog(@"%@", fileName);
        NSLog(@"%@", fileMd5);
        NSLog(@"%@", [sessionManager.cache downloadPath]);
        NSLog(@"%@", [sessionManager.cache downloadTmpPath]);
        NSLog(@"%@", [sessionManager.cache downloadFilePath]);
        NSLog(@"=======================================");
        NSLog(@"%@", [sessionManager.cache filePathWithUrl:url]);
        NSLog(@"%@", [sessionManager.cache fileExistsWithUrl:url] ? @"YES" : @"NO");
        NSLog(@"%ld", task.validation);
        
        if (task.validation == TRValidationCorrect) {
            NSLog(@"文件正确");
        } else {
            NSLog(@"文件错误");
        }
    }];
}

-(void) download_pause:(NSString *)url
{
    NSLog(@" [BackgroundDownload] download_pause");
    TRSessionManager *sessionManager = self.sessionManager;
    [sessionManager suspendWithUrl:url];
}

-(void) download_cancel:(NSString *)url
{
    NSLog(@" [BackgroundDownload] download_cancel");
    TRSessionManager *sessionManager = self.sessionManager;
    [sessionManager cancelWithUrl:url];
    [sessionManager removeWithUrl:url];
    
    [self update_percent:0.0f];
}

-(void) download_delete
{
    NSLog(@" [BackgroundDownload] download_delete");
    TRSessionManager *sessionManager = self.sessionManager;
    [sessionManager.cache clearDiskCache];
}


@end
