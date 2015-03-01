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
#define brown [ZuSimpelColor R:165 G:42 B:42] //棕色
#define burlywood [ZuSimpelColor R:222 G:184 B:135] //实木色
#define eadetbhle [ZuSimpelColor R:95 G:158 B:160] //军蓝色
#define chartreuse [ZuSimpelColor R:127 G:255 B:0] //黄绿色
#define chocolate [ZuSimpelColor R:210 G:105 B:30] //巧克力色
#define coral [ZuSimpelColor R:255 G:127 B:80] //珊瑚色
#define cornflowerblue [ZuSimpelColor R:100 G:149 B:237] //菊蓝色
#define comsilk [ZuSimpelColor R:255 G:248 B:220] //米绸色
#define crimson [ZuSimpelColor R:220 G:20 B:60] //暗深红色
#define cyan [ZuSimpelColor R:0 G:255 B:255] //青色
#define darkblue [ZuSimpelColor R:0 G:0 B:139] //暗蓝色
#define darkcyan [ZuSimpelColor R:0 G:139 B:139] //暗青色

@interface ZuSimpelColor : UIViewController

+ (UIColor *) R:(NSUInteger)r G:(NSUInteger)g B:(NSUInteger)b;

@end
