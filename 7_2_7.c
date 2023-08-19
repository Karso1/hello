/*
 * 方阵循环右移
 *
 * 将给定n阶方阵中的每个元素循环向右移动m个位置
 * 即将第0，1，，n-1列变换为第n-m，n-m+1，，n-1，0，1，，，n-m-1列
 *
 * 输入：第一行给出m和n(1<=n<=6)，接下来一共n行，n列
 * 输出：按照输入格式输出移动后的方阵
 */

#include<stdio.h>
int main()
{
    int m,n,a[6][6],i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=n-m;j<n;j++)//先输出右移后超出最后一列的数
        {
            printf("%d ",a[i][j]);
        }
        for(j=0;j<n-m;j++)//再输出右移后没有超过最后一列的数
            printf("%d ",a[i][j]);
        printf("\n");
    }


    return 0;
}