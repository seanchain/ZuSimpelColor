//
//  ViewController.m
//  ZuSimpelColor
//
//  Created by Sean Chain on 3/1/15.
//  Copyright (c) 2015 Sean Chain. All rights reserved.
//

#import "ViewController.h"
#import "ZuSimpelColor.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UILabel *lb = [[UILabel alloc] initWithFrame:CGRectMake(20, 40, 80, 80)];
    lb.backgroundColor = paleturquoise;
    [self.view addSubview:lb];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
