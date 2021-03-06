//
//  MBProgressHUD+Extension.h
//  UDrivingCustomer
//
//  Created by dihong on 16/7/12.
//  Copyright © 2016年 Marike Jave. All rights reserved.
//

#import <MBProgressHUD/MBProgressHUD.h>

@interface MBProgressHUD (Extension)

+ (MBProgressHUD *)showProgressText:(NSString *)text addedTo:(UIView *)view animated:(BOOL)animated;

+ (MBProgressHUD *)showText:(NSString *)text addedTo:(UIView *)view animated:(BOOL)animated afterDelay:(NSTimeInterval)delay;

- (void)toText:(NSString *)text hide:(BOOL)animated afterDelay:(NSTimeInterval)delay;

@end
