/*
 * 排版类问题
 *
 * 输出字符菱形
 *
 * 输入一个整数n表示菱形的对角半长度，用*把菱形画出来
 */

//分析：将其进行分解，从中间切开，上面一个三角形，下面一个三角形
//问题则转换为如何输出三角形，可以利用两个for循环控制来输出三角形

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //上三角
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j = n-i+1;j<n+i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //下三角
    //只需将上三角反过来输出
    for(int i =n-1;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            printf(" ");
        }
        for(int j =n-i+1;j<n+i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}