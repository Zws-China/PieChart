# PieChart
饼状图，饼图，统计图



[GitHub: https://github.com/Zws-China/PieChart](https://github.com/Zws-China/PieChart)  


# PhotoShoot
![image](https://github.com/Zws-China/PieChart/blob/master/PieChart/PieChart/ppppp.png)


# How To Use

```ruby
#import "WSPieChart.h"

WSPieChart *pie = [[WSPieChart alloc] initWithFrame:CGRectMake(10, 100, self.view.frame.size.width-20, self.view.frame.size.width)];
pie.valueArr = @[@50,@20,@33,@22,@32,@33,@66,@10];
pie.descArr = @[@"1月份",@"2月份",@"3月份",@"4月份",@"5月份",@"6月份",@"7月份",@"8月份",];
pie.backgroundColor = [UIColor whiteColor];
[self.view addSubview:pie];
pie.positionChangeLengthWhenClick = 20;
pie.showDescripotion = YES;
[pie showAnimation];



```