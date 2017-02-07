//
//  WSPieChart.h
//  PieChart
//
//  Created by iMac on 17/2/7.
//  Copyright © 2017年 zws. All rights reserved.
//

#import "WSChart.h"
#import <UIKit/UIKit.h>

@interface WSPieChart : WSChart




/**
 *  数值数组
 */
@property (nonatomic, strong) NSArray * valueArr;


/**
 *  名称数组
 */
@property (nonatomic, strong) NSArray * descArr;


/**
 *  颜色数组
 */
@property (nonatomic, strong) NSArray * colorArr;


/**
 *  点击饼状图时偏移多少
 */
@property (assign , nonatomic) CGFloat positionChangeLengthWhenClick;


/**
 *  显示饼图详情
 */
@property (nonatomic,assign) BOOL showDescripotion;





@end
