//
//  WSPieForeBGView.h
//  PieChart
//
//  Created by iMac on 17/2/7.
//  Copyright © 2017年 zws. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^selectBlock)(CGFloat angle,CGPoint p);


@interface WSPieForeBGView : UIView

@property (copy, nonatomic) selectBlock select;

@end
