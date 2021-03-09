//
//  PEXTraverseSubviews.h
//  ApexDataCollection
//
//  Created by IOS02 on 2020/9/15.
//  Copyright © 2020 雷春雨. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
#define kScreenHeight [UIScreen mainScreen].bounds.size.height
#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kIs_iphone_apex (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define kIs_iPhoneX_apex kScreenWidth >=375.0f && kScreenHeight >=812.0f&& kIs_iphone_apex
#define kStatusBarHeight_apex (CGFloat)(kIs_iPhoneX_apex?(44.0):(20.0))
#define kNavBarHeight_apex (44)

@interface PEXTraverseSubviews : NSObject

+(NSMutableDictionary *)TraverseSubviews;
//+(UIImage *)snapShotForView:(UIView *)view;
@end

NS_ASSUME_NONNULL_END
