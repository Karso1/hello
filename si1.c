/*
 * simple imitate简单模拟
 * 不需要去考虑算法，按题目要求表达出来即可
 *
 * 促销计算
 * 某百货公司为了促销，采用购物打折的优惠方法，每位顾客一次购物：
 * 在1k以上，按9.5折扣
 * 2k以上，0.9
 * 3k，0.85
 * 5k，0.8
 * 输入购物款数，计算并输出优惠价
 */

#include<stdio.h>
//#include<bits/stdc++.h>//万能头文件

int main()
{
    double a;
    printf("plz input ur cost");
    scanf("%lf",&a);
    //使用%g可以自动去掉小数点后多余的0，如果时整数则显示整数
    if(a>1000)printf("discount=1,pay=%g\n",a);
    if(a>=1000 && a<2000)printf("discount=0.95,pay=%g\n",a*0.95);
    if(a>=2000 && a<3000)printf("discount=0.9,pay=%g\n",a*0.9);
    if(a>=3000 && a<5000)
        printf("discount=0.85,pay=%g\n",a*0.8);
    if(a>=5000)
        printf("discount=0.8,pay=%g\n",a*0.8);
    return 0;
}