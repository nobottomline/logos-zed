#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>

%config(generator=internal);

%group SpringBoardHooks

%hook SBApplication

- (NSString *)displayName {
    NSString *name = %orig;
    return [name stringByAppendingString:@" •"];
}

%end

%hook SBIconController

- (void)viewDidLoad {
    %orig;
    NSLog(@"Loaded icon controller: %@", self);
}

%end

%end

%group PreferencesHooks

%hook PSListController

- (void)viewWillAppear:(BOOL)animated {
    %orig(animated);
    self.title = @"Logos Example";
}

%end

%end

%ctor {
    NSString *processName = NSProcessInfo.processInfo.processName;

    if ([processName isEqualToString:@"SpringBoard"]) {
        %init(SpringBoardHooks);
    } else if ([processName isEqualToString:@"Preferences"]) {
        %init(PreferencesHooks, PSListController=objc_getClass("PSListController"));
    }
}
