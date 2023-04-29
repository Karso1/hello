/*
 * x只考虑整数int且必须定义为int，但fx完全可能超过int表示的范围
 * 通过键盘输入，然后输出函数值
 */

#include<stdio.h>
int main()
{
    int x;
    double s=0;
    printf("Plz input x:");
    scanf("%d",&x);
    if(x<0)
    {
        s = -5*(double)x+27;
        printf("%lf",s);
    }
    else
    {
        if (x == 0)
        {
            s = 7909;
            printf("%lf", s);
        }
        else
        {
            s = 2 * (double)x - 1;
            printf("%.0lf", s);
        }//double是lf，双精度。float是单精度用f
    }
    return 0;
}