//
//  LXDScanView.h
//  LXDScanQRCode
//
//  Created by 林欣达 on 15/10/14.
//  Copyright © 2015年 cnpayany. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LXDScanView;
@protocol LXDScanViewDelegate <NSObject>

- (void)scanView: (LXDScanView *)scanView codeInfo: (NSString *)codeInfo;

@end

/*!
 *  @class
 *
 *  @abstract
 *  二维码/条形码扫描视图
 */
@interface LXDScanView : UIView

/*! 扫描回调代理人*/
@property (nonatomic, weak) id<LXDScanViewDelegate> delegate;

/*! 创建扫描视图，建议使用LXDScanCodeController*/
+ (instancetype)scanViewShowInController: (UIViewController *)controller;

/*! 开始扫描*/
- (void)start;
/*! 结束扫描*/
- (void)stop;

@end
