//
//  ApexDataSDK.h
//  ApexDataCollection
//
//  Created by IOS02 on 2020/7/23.
//  Copyright © 2020 雷春雨. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEXCustomModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface ApexDataSDK : NSObject
/// SDK获取单例
+ (instancetype)shareCollector;
/// SDK初始化方法
/// @param appkey 应用的key
- (void)initTrackWithAppkey:(NSString *)appkey;

/// 设置用户id
/// @param userId 用户的唯一标识
- (void)trackWithUserId:(nullable NSString *)userId;

/// 页面类型的代码埋点
/// @param eventCode 事件唯一代码
/// @param eventName 事件名称
/// @param currentPageId 当前页面page_id
/// @param currentPageName 当前页面名称
/// @param onPageStart 当前页面进入的时间戳 单位毫秒
/// @param onPageEnd 当前页面离开的时间戳 单位毫秒
/// @param extentions 扩展字典
-(void)setViewControllerTrackWithEventCode:(NSString *)eventCode eventName:(NSString *)eventName currentPageId:(NSString *)currentPageId currentPageName:(NSString *)currentPageName onPageStart:(NSNumber*)onPageStart onPageEnd:(NSNumber*)onPageEnd extentions:(nullable NSDictionary *)extentions;

/// 元素类型的代码埋点
/// @param eventCode 事件唯一代码
/// @param eventName 事件名称
/// @param currentPageId 当前页面page_id
/// @param currentPageName 当前页面名称
/// @param extentions 扩展字典
-(void)setElementTrackWithEventCode:(NSString *)eventCode eventName:(NSString *)eventName currentPageId:(NSString *)currentPageId currentPageName:(NSString *)currentPageName extentions:(nullable NSDictionary *)extentions;

/// 自定义类型的代码埋点
/// @param eventCode 事件唯一代码
/// @param eventName 事件名称
/// @param currentPageId 当前页面page_id
/// @param currentPageName 当前页面名称
/// @param extentions 扩展字典
-(void)setCustomTrackWithEventCode:(NSString *)eventCode eventName:(NSString *)eventName currentPageId:(NSString *)currentPageId currentPageName:(NSString *)currentPageName extentions:(nullable NSDictionary *)extentions;

-(void)visualVerify:(NSSet<UIOpenURLContext *> *)URLContexts API_AVAILABLE(ios(13.0));
-(void)visualVerifyByUrl:(NSURL *)url;
@end

NS_ASSUME_NONNULL_END
