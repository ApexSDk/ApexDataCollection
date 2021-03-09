//
//  ApexVisualManager.h
//  ApexDataCollection
//
//  Created by IOS02 on 2020/10/14.
//  Copyright © 2020 雷春雨. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ApexVisualManager : NSObject
@property (nonatomic, assign) BOOL isVisualing;//正在圈选模式中
@property(nonatomic, strong) NSString *webSocketUrl;

+ (instancetype)shareVisualManager;
- (void)startVisual;
- (void)endVisual;
- (void)sendVisualParam:(NSMutableDictionary *)param;
@end

NS_ASSUME_NONNULL_END
