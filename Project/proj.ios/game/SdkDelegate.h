#import "AbstractSdk.h"

@interface SdkDelegate: NSObject

+ (SdkDelegate*) sharedInstance;
- (AbstractSdk*) currentSDK;

@property (strong, nonatomic) AbstractSdk *abstractSdk;

@end
