/*
 * 魔偶公司2006年产值为5000万，计划以后每年的增长率为x（输入5，表示5%）
 * 计算该企业的产值翻翻以及翻番时的产值，然后输出（单位为万， 考虑小数
 *
 */
#include<math.h>
#include<stdio.h>
int main()
{
    int i;
    double x1,m,cz;

    printf("plz input x:");

    scanf("%lf",&x1);

    m = x1/100;
    for(i = 2006;cz<10000;i++)
    {
        cz = 5000*pow((1+m),(i-2006));
    }
    printf("\nyear = %d nian,chanzhi = %.2f\n",i-1,cz);

    return 0;
}