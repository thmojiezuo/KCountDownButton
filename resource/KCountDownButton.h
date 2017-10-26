//
//  KCountDownButton.h
//  KCountDownButton
//
//  Created by tenghu on 2017/10/26.
//  Copyright © 2017年 tenghu. All rights reserved.
//

//========== 倒计时button ==========//

#import <UIKit/UIKit.h>

@interface KCountDownButton : UIButton

/**
 构造方法
 
 @param duration 倒计时时间
 @param buttonClicked 按钮点击事件的回调
 @param countDownStart 倒计时开始时的回调
 @param countDownUnderway 倒计时进行中的回调（每秒一次）
 @param countDownCompletion 倒计时完成时的回调
 @return 倒计时button
 */

- (instancetype)initWithDuration:(NSInteger)duration
                   buttonClicked:(void(^)(void))buttonClicked
                  countDownStart:(void(^)(void))countDownStart
               countDownUnderway:(void(^)(NSInteger restCountDownNum))countDownUnderway
             countDownCompletion:(void(^)(void))countDownCompletion;


/** 开始倒计时 */
- (void)startCountDown;

@end
