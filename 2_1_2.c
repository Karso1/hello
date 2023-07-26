/*
 * 温度转换
 */

#include<stdio.h>
int change(int F)
{
    int C;
    return C = 5*(F-32)/9;
}
void main()
{
    int F;
    scanf("%d",&F);
    printf("%d",change(F));
}