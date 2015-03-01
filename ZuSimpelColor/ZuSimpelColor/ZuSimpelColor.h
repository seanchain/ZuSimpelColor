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
#define aqua [ZuSimpelColor R:0 G:255 B:255]//浅绿色
#define aquamarine [ZuSimpelColor R:127 G:255 B:255]//碧绿色
#define azure [ZuSimpelColor R:240 G:255 B:255] //天蓝色
#define beige [ZuSimpelColor R:245 G:245 B:220] //米色
#define bisque [ZuSimpelColor R:255 G:228 B:196] //橘黄色
#define black [ZuSimpelColor R:0 G:0 B:0] //黑色
#define blanchedalmond [ZuSimpelColor R:255 G:235 B:205] //白杏色
#define bluecolor [ZuSimpelColor R:0 G:0 B:225] //蓝色
#define blueviolet [ZuSimpelColor R:138 G:43 B:226] //紫罗兰色



@interface ZuSimpelColor : UIViewController

+ (UIColor *) R:(NSUInteger)r G:(NSUInteger)g B:(NSUInteger)b;

@end
