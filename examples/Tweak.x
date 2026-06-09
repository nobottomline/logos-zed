#import <Foundation/Foundation.h>

%hook NSObject

- (NSString *)description {
    NSString *original = %orig;
    return [original stringByAppendingString:@" (hooked)"];
}

%end

%ctor {
    %init;
}
