/*
 * 输入实型数据ab，然后输出ab的值，小数点后保留六位
 *
 */

#include<stdio.h>
int main()
{
    double a,b;
    printf("please input two numbers:");
    scanf("%lf, %lf",&a,&b);
    printf("a=%lf, b=%.6lf",a,b);//double默认保留六位小数
    return 0;
}