#import <UIKit/UIKit.h>

%config(generator=internal);

%group iOS17

%hook SBApplicationController

%property (nonatomic, retain) NSString *lastBundleIdentifier;

- (void)uninstallApplication:(SBApplication *)application {
    %log;
    %orig;
    self.lastBundleIdentifier = [application bundleIdentifier];
}

%new(v@:@)
- (void)handleCustomObject:(id)object {
    NSLog(@"custom: %@", object);
}

%end

%subclass GLRuntimeBanner : UIView

%property (nonatomic, copy) NSString *title;

%new
- (instancetype)initWithTitle:(NSString *)title {
    if ((self = %orig)) {
        self.title = title;
    }
    return self;
}

%end

%end

%hookf(BOOL, MGGetBoolAnswer, CFStringRef string) {
    if (CFEqual(string, CFSTR("StarkCapability"))) {
        return YES;
    }

    return %orig;
}

%ctor {
    %init(iOS17);
    Class bannerClass = %c(GLRuntimeBanner);
    NSLog(@"Loaded %@", bannerClass);
}
