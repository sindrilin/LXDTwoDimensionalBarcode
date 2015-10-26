//
//  UIImage+RoundRectImage.h
//  LXDTwoDimensionalBarcode
//
//  Created by 林欣达 on 15/10/14.
//  Copyright © 2015年 cnpayany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (RoundRectImage)

/*!
 * @function imageOfRoundRectWithImage: radius:
 *
 * @abstract
 * Create a round rect on provided image.
 *
 * @discussion
 * Create a round rect on provided image, however
 * return nil if image is nil.
 *
 * @param image
 * The target image we will create round rect on it.
 *
 *  @param size
 * The target param device image size
 *
 *  @param radius
 * Offer a CGFloat-type value to device radius on round rect.
 * The param must between 5.0 and 10.0.
 */
+ (UIImage *)imageOfRoundRectWithImage: (UIImage *)image
                                  size: (CGSize)size
                                radius: (CGFloat)radius;

@end
