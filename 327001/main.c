//计算员工应付工资，其中工作要求40h，另外一小时工资为8.25
//if和else语句后面可以不加大括号，直接输出需要的东西，但是分号必须在整句完成过后才能写

#include<stdio.h>
int main()
{
    const double RATE = 8.25;
    const int STANDARD = 40;
    double pay = 0.0;
    int hours;//一小时工资8.25，定义为常量。定义标准工作时间40h常量。定义需要支付的工资pay，是浮点数，不能用整数型int定义。定义工作时间hours

    printf("请输入工作的小时数：");
    scanf("%d",&hours);

    if (hours>STANDARD)
        pay = STANDARD*RATE+(hours-STANDARD)*(RATE*1.5);
    else
        pay = hours*RATE;//if else语句，可以不用大括号，直接将需要输出的值算出来

    printf("应付工资：%f\n",pay);

    return 0;
}