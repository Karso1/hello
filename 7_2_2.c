/*
 * 给定一个n阶方阵，计算除了副对角线，最后一列最后一行的所有元素之和
 * 输入：第一行给出正整数n（1<n<=10)，随后给出n行n列，数字间用空格分隔
 */

#include<stdio.h>
int main()
{
    int a[10][10]={0},n,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i==n-1 || j==n-1)
                continue;
            sum += a[i][j];
            //以上三行可以简化成
            //if(!(i+j==n-1 || j==n-1 || i == n-1))
            //当不满足以上三个条件才执行加的操作，不满足为0，！0为1
            //  sum += a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}