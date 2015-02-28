//
//  ZuSimpelColor.h
//  ZuSimpelColor
//
//  Created by Sean Chain on 3/1/15.
//  Copyright (c) 2015 Sean Chain. All rights reserved.
//

#import <UIKit/UIKit.h>

#define aliceblue [ZuSimpelColor R:240 G:248 B:255] //爱丽丝蓝
#define antiquewhite [ZuSimpelColor R:250 G:235 B:215] //古董白
#define aqua [ZuSimpelColor R:0 G:255 B:255]


@interface ZuSimpelColor : UIViewController

+ (UIColor *) R:(NSUInteger)r G:(NSUInteger)g B:(NSUInteger)b;

@end
