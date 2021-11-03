#import <Foundation/Foundation.h>
#import "GameDelegate.h"

extern "C"
{
    void receiveFromCSharp(const char* str)
    {
        NSString* jsonString = [[NSString alloc] initWithUTF8String:str];
        NSLog(@"receiveFromCSharp %@", [NSString stringWithFormat:@"%@", jsonString]);
        
        NSData *jsonData = [jsonString dataUsingEncoding:NSUTF8StringEncoding];
        NSDictionary* dict = [NSJSONSerialization JSONObjectWithData:jsonData
                                                            options:NSJSONReadingMutableContainers
                                                              error:nil];
        
        NSString* action = [dict objectForKey:@"action"];
        [GameDelegate handle_action:action WithDict:dict];
    }

    void sendToCSharp(NSDictionary *dict)
    {
        NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dict options:0 error:nil];
        NSString *nsStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
        const char *str = [nsStr UTF8String];
        UnitySendMessage("GameObject", "ReceiveFromNative", str);
    }
}
