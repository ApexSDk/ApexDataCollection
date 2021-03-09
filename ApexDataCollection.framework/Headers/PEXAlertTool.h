//
//  PEXAlertTool.h
//  ApexDataCollection
//
//  Created by IOS02 on 2020/10/23.
//  Copyright © 2020 雷春雨. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PEXAlertTool : NSObject
@property (nonatomic, strong) UIAlertController *alertController;

-(void)showAlert:(NSString *)message;
@end

NS_ASSUME_NONNULL_END
