//
//  PEXCustomModel.h
//  AFJSONRPCClient-iOS10.0
//
//  Created by yulin chi on 2018/11/16.
//


NS_ASSUME_NONNULL_BEGIN

@interface PEXCustomModel : NSObject

/// 事件唯一标识
@property (nonatomic, copy) NSString *eventCode;
/// 事件名称
@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, strong) NSDictionary *extentions;
@property (nonatomic, copy) NSString *currentPageId;
@property (nonatomic, copy) NSString *currentPageName;


- (instancetype)ModelWithDict:(NSDictionary*)dict;
@end

NS_ASSUME_NONNULL_END
