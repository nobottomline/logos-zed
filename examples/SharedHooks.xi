#import <Foundation/Foundation.h>

#define GL_HOOK_CLASS NSObject
#define GL_GROUP_NAME SharedObjectiveCHooks
#define GL_DESCRIPTION_SUFFIX @" [Logos]"

%group GL_GROUP_NAME

%hook GL_HOOK_CLASS

- (NSString *)description {
    NSString *original = %orig;
    return [original stringByAppendingString:GL_DESCRIPTION_SUFFIX];
}

%end

%end

%ctor {
    %init(GL_GROUP_NAME);
}
