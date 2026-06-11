#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>

static NSString *const GLNotificationName = @"GLApplicationDidActivate";
static BOOL (*GLOriginalFeatureCheck)(CFStringRef);

%group ApplicationHooks

%hook UIApplication

%property (nonatomic, assign) NSUInteger gl_activationCount;

- (void)setDelegate:(id<UIApplicationDelegate>)delegate {
    self.gl_activationCount += 1;
    %orig(delegate);
}

%new(B@:)
- (BOOL)gl_hasActiveDelegate {
    return self.delegate != nil;
}

- (void)_sendDidBecomeActiveNotification {
    %log;
    %orig;

    [[NSNotificationCenter defaultCenter]
        postNotificationName:GLNotificationName
                      object:self];
}

%end

%end

%hookf(BOOL, MGGetBoolAnswer, CFStringRef key) {
    GLOriginalFeatureCheck = &%orig;

    if (CFEqual(key, CFSTR("GLFeatureEnabled"))) {
        return YES;
    }

    return GLOriginalFeatureCheck(key);
}

%ctor {
    if (@available(iOS 17.0, *)) {
        %init(ApplicationHooks);
    }
}

%dtor {
    GLOriginalFeatureCheck = NULL;
}
