/*
 * 求以下三个数的和，保留2位小数。1~a之和  1~b的平方  1~c的倒数和
 * 输入格式：abc
 * 输出格式：1+2+……a+1^2+2^2+....+b^2+1/1+1/2+...+1/c
 */

#include<stdio.h>
int main()
{
    double a,b,c,sum1=0,sum2=0,sum3=0,i,sum=0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    for(i=1;i<=a;i++)
    {
        sum1+=i;
    }
    for(i=1;i<=b;i++)
    {
        sum2+=i*i;
    }
    for(i=1;i<=c;i++)
    {
        sum3+=1.0/i;
    }
    sum=sum1+sum2+sum3;
    printf("%.2lf",sum);
    return 0;

}