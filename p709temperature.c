/*
 * 输入一个华氏温度，要求输出摄氏温度
 * c = 5（F-32)/9
 */
#include<stdio.h>
int main()
{
    double F,C;
    printf("Input the degree:");
    scanf("%lf",&F);
    C = 5*(F-32)/9;
    printf("F(%0.2lf)=C(%0.2lf)",F,C);
    return 0;
}