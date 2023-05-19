/*
 * s=1/1!+1/2!+1/3!+....1/N!
 * 显示时小数部分占16位，计算时要求从第一项从开始往后累加，N为任意自然数，int
 *
 */

#include<stdio.h>
int main()
{
    int n,i;
    double sum = 1,ss =0;
    printf("plz input n:");
    scanf("%d",&n);
    for(i = 1;i<=n;i++)
    {
        sum = sum*i;
        ss = ss + 1/sum;
    }
    printf("/nS = 1/1!+1/2!+....+1/%d! = %.16lf",n,ss);
    return 0;
}