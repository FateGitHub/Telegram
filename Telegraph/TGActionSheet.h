#import <UIKit/UIKit.h>

typedef enum {
    TGActionSheetActionTypeGeneric = 0,
    TGActionSheetActionTypeCancel = 1,
    TGActionSheetActionTypeDestructive = 2,
    TGActionSheetActionTypeLined = 3
} TGActionSheetActionType;

@interface TGActionSheetAction : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *action;
@property (nonatomic) TGActionSheetActionType type;
@property (nonatomic, assign) bool disableAutomaticSheetDismiss;

- (instancetype)initWithTitle:(NSString *)title action:(NSString *)action;
- (instancetype)initWithTitle:(NSString *)title action:(NSString *)action type:(TGActionSheetActionType)type;

@end

@interface TGActionSheet : UIActionSheet

- (instancetype)initWithTitle:(NSString *)title actions:(NSArray *)actions actionBlock:(void (^)(id target, NSString *action))actionBlock target:(id)target;

@end
