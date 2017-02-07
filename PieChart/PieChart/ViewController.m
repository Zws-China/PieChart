//
//  ViewController.m
//  PieChart
//
//  Created by iMac on 17/2/7.
//  Copyright © 2017年 zws. All rights reserved.
//

#import "ViewController.h"
#import "WSPieChart.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    WSPieChart *pie = [[WSPieChart alloc] initWithFrame:CGRectMake(10, 100, self.view.frame.size.width-20, self.view.frame.size.width)];
    pie.valueArr = @[@50,@20,@33,@22,@32,@33,@66,@10];
    pie.descArr = @[@"1月份",@"2月份",@"3月份",@"4月份",@"5月份",@"6月份",@"7月份",@"8月份",];
    pie.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:pie];
    pie.positionChangeLengthWhenClick = 20;
    pie.showDescripotion = YES;
    [pie showAnimation];

    
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
