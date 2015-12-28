#import <UIKit/UIKit.h>

@class OpenFlAppDelegate;

@interface OpenFlAppDelegate : NSObject <UIApplicationDelegate>

- (void)addAppDelegate:(id)delegate;

@property (nonatomic, retain) NSMutableArray *delegates;

+ (id)sharedInstance;

@end

