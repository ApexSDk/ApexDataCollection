//
//  ApexBaseInfo.h
//  ApexDataCollection
//
//  Created by IOS02 on 2020/7/24.
//  Copyright © 2020 雷春雨. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface ApexBaseInfo : NSObject


/// 当前页面路径
@property (nonatomic, copy) NSString *currentPagePath;

/// 页面名字
@property (nonatomic, copy) NSString *currentPageName;

/// 页面id（页面的类名）
@property (nonatomic, copy) NSString *currentPageId;


/// 上次浏览页面路径
@property (nonatomic, copy) NSString *sourcePagePath;

/// 上次浏览页面名字
@property (nonatomic, copy) NSString *sourcePageName;

/// 上次浏览页面id（页面的类名）
@property (nonatomic, copy) NSString *sourcePageId;

/// 代码埋点上次浏览页面id
@property (nonatomic, copy) NSString *customSourcePageId;

/// 代码埋点上次浏览页面名字
@property (nonatomic, copy) NSString *customSourcePageName;

/// 代码埋点上次浏览页面id
@property (nonatomic, copy) NSString *vcSourcePageId;

/// 代码埋点上次浏览页面名字
@property (nonatomic, copy) NSString *vcSourcePageName;

/// 代码埋点上次浏览页面id
@property (nonatomic, copy) NSString *elSourcePageId;

/// 代码埋点上次浏览页面名字
@property (nonatomic, copy) NSString *elSourcePageName;


/// 冷启动或者热启动时，保存一个时间，退出时计算时长用
@property (nonatomic, copy) NSString *startTime;

/// 用户id
@property (nonatomic, copy) NSString *userId;
/// appkey
@property (nonatomic, copy) NSString *app_id;
/// appSecret
@property (nonatomic, copy) NSString *appSecret;
/// 用于数据上报的token
@property (nonatomic, copy) NSString *token;

/// 同一次会话ID
@property (nonatomic, copy) NSString *session_id;

/// 冷启动时间，用于计算与热启动时间的间隔
@property (nonatomic, copy) NSString *coldStartTime;

+ (instancetype)shareCollector;

/// 获取消息类型编号
- (NSString *)getMessageId;

/// 获取项目id
- (NSString *)getProjectId;

/// 获取产品id
- (NSString *)getAppId;

/// 获取产品密码
- (NSString *)getappSecret;

/// 获取token
- (NSString *)getToken;

/// 获取租户id
- (NSString *)getTenantId;

/// 获取屏幕高度
- (NSString *)getScreenHeight;

/// 获取屏幕宽度
- (NSString *)getScreenWidth;

/// 获取事件上报时间
- (NSString *)getUploadTime;

/// 获取操作系统
- (NSString *)getOsSystem;

/// 获取操作系统版本
- (NSString *)getOsVersion;

/// 获取设备id
- (NSString *)getDeviceId;

/// 获取设备机型
- (NSString *)getDeviceModel;

/// 获取设备品牌
- (NSString *)getDeviceBrand;

/// 获取设备类型
- (NSString *)getDeviceType;

/// 获取通用唯一识别码
- (NSString *)getDeviceUuid;

/// 获取运营商
- (NSString *)getCarriers;

/// 获取国际移动设备识别码
- (NSString *)getImei;

/// 获取设备mac地址
- (NSString *)getMac;

/// 获取广告标识
- (NSString *)getIdfa;

/// 获取应用开发商标识
- (NSString *)getIdfv;

/// 获取创略唯一ID
- (NSString *)getApexId;

/// 获取同一次会话ID
- (NSString *)getSessionId;

/// 获取sdk版本号
- (NSString *)getSdkVersion;

/// 获取sdk类型
- (NSString *)getSdkType;

/// 获取版本号
- (NSString *)getAppVersion;

/// 获取上报方式
- (NSString *)getSendType;

/// 获取信通院统一的第三方设备标识
- (NSString *)getOaid;

/// 获取网络类型
- (NSString *)getNetworkType;

///获取当前时间戳
- (NSString *)getCurrentTimeStamp;

/// 获取时间差
/// @param startTime 开始时间
/// @param endTime 结束时间
- (double)getDifferFromStartTime:(NSString *)startTime endTime:(NSString *)endTime;


/// 获取bundleid
+(NSString *) getBundleID;

@end

NS_ASSUME_NONNULL_END
