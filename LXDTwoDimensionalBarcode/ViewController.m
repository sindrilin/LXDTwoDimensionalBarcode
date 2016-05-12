//
//  ViewController.m
//  LXDTwoDimensionalBarcode
//
//  Created by 林欣达 on 15/10/13.
//  Copyright © 2015年 cnpayany. All rights reserved.
//

#import "ViewController.h"
#import "UIImage+LXDCreateBarcode.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

#pragma mark - event
- (IBAction)createBarcode:(id)sender
{
    UIImage * image = [UIImage imageOfQRFromURL: @"https://appsto.re/cn/Jd2W-.i " codeSize: 1000 red: 0 green: 0 blue: 0 insertImage: [UIImage imageNamed: @"applicationIcon"] roundRadius: 15.0f];
    CGSize size = image.size;
    UIImageView * imageView = [[UIImageView alloc] initWithFrame:  ((CGRect){(CGPointZero), (size)})];
    imageView.center = self.view.center;
    imageView.image = image;
    [self.view addSubview: imageView];
}

@end
