# LXDTwoDimensionalBarcode
二维码生成demo。使用image的类别来扩展创建二维码的方法。

#使用方法
UIImage * qrCode = [UIImage imageOfQRFromURL: @"https://www.baidu.com" codeSize: 160.f];<br>
UIImageView * imageView = [[UIImageView alloc] initWithImage: qrCode];<br>
imageView.center = self.view.center;<br>
[self.view addSubview: imageView];<br>

[我的博客][http://www.jianshu.com/users/0cf7d455eb9e/latest_articles]
