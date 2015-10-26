//
//  UIImage+LXDCreateBarcode.h
//  LXDTwoDimensionalBarcode
//
//  Created by 林欣达 on 15/10/13.
//  Copyright © 2015年 cnpayany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (LXDCreateBarcode)

/*!
 * @function imageOfQRFromURL:
 *
 * @abstract
 * Use a effective network address to create a two-dimension code.
 *
 * @discussion
 * Use a effective network address to create a two-dimension code, however
 * return nil if network address is invalid. this will return a black color image.
 *
 * @param networkAddress
 * The target network address which includes link-data.
 * The result of passing nil in this param is nil or invalid.
 */
+ (UIImage *)imageOfQRFromURL: (NSString *)networkAddress;


/*!
 * @function imageOfQRFromURL:
 *
 * @abstract
 * Use a effective network address to create a two-dimension code.
 * Provide a CGFloat type value to device code's size.
 *
 * @discussion
 * Use a effective network address to create a two-dimension code, however
 * return nil if network address is invalid. this will return a black color image.
 *
 * @param networkAddress
 * The target network address which includes link-data.
 * The result of passing nil in this param is nil or invalid.
 *
 * @param codeSize
 * The target will decide width of two-dimension code and scale of height.
 *  Default is 160, it will be 160 if the param is less than default value.
 */
+ (UIImage *)imageOfQRFromURL: (NSString *)networkAddress
                     codeSize: (CGFloat)codeSize;


/*!
 * @function imageOfQRFromURL: codeColor:
 *
 * @abstract
 * Use a effective network address to create a two-dimension code.
 * Provide a CGFloat type value to device code's size.
 * Use RGB value to set the code color.
 *
 * @discussion
 * Use a effective network address to create a two-dimension code, however
 * return nil if network address is invalid.
 *
 * @param networkAddress
 * The target network address which includes link-data.
 * The result of passing nil in this param is nil or invalid.
 *
 * @param codeSize
 * The target will decide width of two-dimension code and scale of height.
 *  Default is 160, it will be 160 if the param is less than default value.
 *
 *  @param red
 *  The param decide red color space on the two-dimension code.
 *
 *  @param green
 *  The param decide green color space on the two-dimension code.
 *
 *  @param blue
 *  The param decide blue color space on the two-dimension code.
 */
+ (UIImage *)imageOfQRFromURL: (NSString *)networkAddress
                     codeSize: (CGFloat)codeSize
                          red: (CGFloat)red
                        green: (CGFloat)green
                         blue: (CGFloat)blue;


/*!
 * @function imageOfQRFromURL: codeColor:
 *
 * @abstract
 * Use a effective network address to create a two-dimension code.
 * Provide a CGFloat type value to device code's size.
 * Use RGB value to set the code color.
 * The method will insert an small image into the code if the insertImage param is not nill.
 *
 * @discussion
 * Use a effective network address to create a two-dimension code, however
 * return nil if network address is invalid.
 *
 * @param networkAddress
 * The target network address which includes link-data.
 * The result of passing nil in this param is nil or invalid.
 *
 * @param codeSize
 * The target will decide width of two-dimension code and scale of height.
 *  Default is 160, it will be 160 if the param is less than default value.
 *
 *  @param red
 *  The param decide red color space on the two-dimension code.
 *
 *  @param green
 *  The param decide green color space on the two-dimension code.
 *
 *  @param blue
 *  The param decide blue color space on the two-dimension code.
 *
 *  @param  insertImage
 *  The target image will insert into the two-dimension code and show in the center.
 *  The image's size will be 1/4 of the two-dimension code's size.
 *  Provide a more clearly image will get better effective.
 */
+ (UIImage *)imageOfQRFromURL: (NSString *)networkAddress
                     codeSize: (CGFloat)codeSize
                          red: (CGFloat)red
                        green: (CGFloat)green
                         blue: (CGFloat)blue
                  insertImage: (UIImage *)insertImage;

/*!
 * @function imageOfQRFromURL: codeColor:
 *
 * @abstract
 * Use a effective network address to create a two-dimension code.
 * Provide a CGFloat type value to device code's size.
 * Use RGB value to set the code color.
 * The method will insert an small image into the code if the insertImage param is not nill.
 * The method will make the inserted image to round rect.
 *
 * @discussion
 * Use a effective network address to create a two-dimension code, however
 * return nil if network address is invalid.
 *
 * @param networkAddress
 * The target network address which includes link-data.
 * The result of passing nil in this param is nil or invalid.
 *
 * @param codeSize
 * The target will decide width of two-dimension code and scale of height.
 *  Default is 160, it will be 160 if the param is less than default value.
 *
 *  @param red
 *  The param decide red color space on the two-dimension code.
 *
 *  @param green
 *  The param decide green color space on the two-dimension code.
 *
 *  @param blue
 *  The param decide blue color space on the two-dimension code.
 *
 *  @param  insertImage
 *  The target image will insert into the two-dimension code and show in the center.
 *  The image's size will be 1/4 of the two-dimension code's size.
 *  Provide a more clearly image will get better effective.
 *
 *  @param roundRadius
 * Offer a CGFloat-type value to device radius on round rect.
 * The param must between 2.0 and 8.0.
 */
+ (UIImage *)imageOfQRFromURL: (NSString *)networkAddress
                     codeSize: (CGFloat)codeSize
                          red: (CGFloat)red
                        green: (CGFloat)green
                         blue: (CGFloat)blue
                  insertImage: (UIImage *)insertImage
                  roundRadius: (CGFloat)roundRadius;

@end
