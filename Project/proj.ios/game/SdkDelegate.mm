
#import "SdkDelegate.h"
@implementation SdkDelegate

static SdkDelegate* _sharedInstance = nil;

+ (SdkDelegate*)sharedInstance
{
    @synchronized(self.class)
    {
        if (_sharedInstance == nil) {
            _sharedInstance = [[self.class alloc] init];
        }

        return _sharedInstance;
    }
}

-(AbstractSdk*)currentSDK
{
    if(nil == self.abstractSdk)
    {
        //用宏分开具体的 sdk
        self.abstractSdk = [[AbstractSdk alloc] init];
    }
    
    return self.abstractSdk;
}

@end
