/*
 * 输入四个数，计算之和
 */

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d%d%d%d",a/1000,a%1000/100,a%100/10,a%10);
    return 0;
}