//
//  ApexConfigInfo.h
//  ApexDataCollection
//
//  Created by 李聪 on 2020/8/19.
//  Copyright © 2020 雷春雨. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ApexConfigInfo : NSObject


//example: 0: click, 1: view_page, 2: custom, 3:code_start, 4: hot_start, 5: use_end
/// 用于数据上报的token
@property (nonatomic, copy) NSString *token;


/// 在token中解析得到的
@property (nonatomic, copy) NSString *ip;

/// token的失效时间，在token中解析得到
@property (nonatomic, copy) NSString *end_ts;

//离线token
@property (nonatomic, copy) NSString *offlineToken;

/// App和H5打通
@property (nonatomic, assign) BOOL appAndH5Enabled;

/// 实时上报开关
@property (nonatomic, assign) BOOL byRealtimeEnabled;

/// 按实时上报事件类型
@property (nonatomic, copy) NSArray *byRealtimeEventTypes;

/// 按规则上报开关
@property (nonatomic, assign) BOOL byRuleEnabled;

/// 按规则上报事件类型
@property (nonatomic, copy) NSArray *byRuleEventTypes;

/// 实时触点服务地址
@property (nonatomic, copy) NSString *contactServiceUrl;

/// 所属项目ID
@property (nonatomic, copy) NSString *displayProjectId;

/// 关联的触点事件Code
@property (nonatomic, copy) NSArray *eventCodes;

/// 不采集的属性
@property (nonatomic, copy) NSArray *excludedAttributeIds;

/// 不采集的属性名字
@property (nonatomic, copy) NSArray *excludedAttributeNames;

/// 不采集的属性开关
@property (nonatomic, assign) BOOL excludedAttributesEnabled;

/// 开发工具日志开关
@property (nonatomic, assign) BOOL logEnabled;

/// 离线服务地址
@property (nonatomic, copy) NSString *offlineServiceUrl;

/// 所属产品ID
@property (nonatomic, copy) NSString *productId;

/// 所属产品名称
@property (nonatomic, copy) NSString *productName;

/// 所属项目ID
@property (nonatomic, copy) NSString *projectId;

/// 所属项目名称
@property (nonatomic, copy) NSString *projectName;

/// 上报环境(0.测试环境 1.生产环境)
@property (nonatomic, copy) NSString * reportEnvironment;

/// 所属租户ID
@property (nonatomic, copy) NSString * tenantId;

/// 是否允许采集数据
@property (nonatomic, assign) BOOL shouldTrackerAction;

/// 上报的时间间隔
@property (nonatomic, assign) int uploadTimeInterval;

/// 上报的url
@property (nonatomic, copy) NSString *uploadUrl;

/// 上报的最大条数
@property (nonatomic, assign) int uploadMaxCount;

/// 获取离线token地址
@property (nonatomic, copy) NSString * offlineTokenUrl;

/// 获取在线token地址
@property (nonatomic, copy) NSString * onlineTokenUrl;

/// 获取appsecrect的链接
@property (nonatomic, copy) NSString * appSecretUrl;

@property (nonatomic, strong) NSArray *allEventTypes;  //按照后台对应的0，1，2，3创建所有事件类型数组
@property (nonatomic, strong) NSArray *defaultTypes; //默认事件类型  冷启动、热启动、使用结束

+ (instancetype)shareCollector;

@end

NS_ASSUME_NONNULL_END
