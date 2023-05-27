/*
 * 从键盘输入1-9数字，根据输入的数输出乘法口诀表
 * 要求输出的数占3个宽度，且左对齐
 */

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("input a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-3d",i,j,i*j);
            //d表示整数，3表示小数点左边输出位数，-表示左对齐
        }
        putchar('\n');
    }
    return 0;
}