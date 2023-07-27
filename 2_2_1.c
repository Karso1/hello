/*
 * 计算分段函数，x=0为0；x！=0为1/x
 */

#include<stdio.h>
int main()
{
    double a,b;
    scanf("%d",&a);
    if(a == 0)
    {
        b=0;
        printf("%.2lf",b);
    }
    else
    {
        b=1/a;
        printf("%.2lf",b);
    }
    return 0;
}