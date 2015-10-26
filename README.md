# LXDTwoDimensionalBarcode
二维码生成demo。使用image的类别来扩展创建二维码的方法。

#使用方法
UIImage * qrCode = [UIImage imageOfQRFromURL: @"https://www.baidu.com" codeSize: 160.f];
UIImageView * imageView = [[UIImageView alloc] initWithImage: qrCode];
imageView.center = self.view.center;
[self.view addSubview: imageView];
