//
//  WSShowInfoView.h
//  PieChart
//
//  Created by iMac on 17/2/7.
//  Copyright © 2017年 zws. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WSShowInfoView : UIView

@property (copy, nonatomic) NSString * showContentString;


- (void)updateFrameTo:(CGRect)frame andBGColor:(UIColor *)bgColor andShowContentString:(NSString *)contentString;

@end
