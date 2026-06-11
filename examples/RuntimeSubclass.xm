#import <UIKit/UIKit.h>

%subclass GLOverlayController : UIViewController <UIGestureRecognizerDelegate>

%property (nonatomic, strong) UILabel *statusLabel;
%property (nonatomic, copy) NSString *message;

%new
- (instancetype)initWithMessage:(NSString *)message {
    self = %orig;

    if (self) {
        self.message = message;
    }

    return self;
}

- (void)viewDidLoad {
    %orig;

    UILabel *label = [[UILabel alloc] initWithFrame:self.view.bounds];
    label.text = self.message ?: @"Ready";
    label.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:label];
    self.statusLabel = label;
}

%new(v@:@)
- (void)handleTap:(UITapGestureRecognizer *)recognizer {
    if (recognizer.state == UIGestureRecognizerStateEnded) {
        self.statusLabel.text = @"Tapped";
    }
}

%new(B@:@)
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer
        shouldReceiveTouch:(UITouch *)touch {
    return touch.view != self.statusLabel;
}

%end

%ctor {
    Class overlayController = %c(GLOverlayController);
    NSLog(@"Registered runtime subclass: %@", overlayController);
}
