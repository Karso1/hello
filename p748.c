/*
 * 从键盘上输入矩阵的阶数n(n<=14)
 * 矩阵总元素的值等于其位置的行数和列数之和的n倍
 * (行列式的值从0开始计数）
 */

#include<stdio.h>
int main()
{
    int a1[14][14],i,j,n,sum1=0,sum2=0;
    printf("plz input n :");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            a1[i][j]=n*(i+j);
        }
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("%4d",a1[i][j]);
            if(i != 0 && j != 0 && i != n-1 && j != n-1)
            {
                sum1 = sum1 + a1[i][j];
            }
            if(i==j)
            {
                sum2= sum2 + a1[i][j];
            }
        }
        putchar('\n');
    }
    printf("\nsum1=%d\nsum2=%d\n",sum1,sum2);
    return 0;
}