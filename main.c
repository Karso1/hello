/*
 * 求任意一个m*n矩阵的周边元素之和，2<=m<=20以及矩阵元素从键盘输入
 *
 */

#include<stdio.h>
int main()
{
    int a1[20][20],i,j,m,sum=0;
    printf("plz input m:");
    scanf("%d",&m);
    printf("plz input array:\n");
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            if(i==0 || j==0 ||i==m-1||j==m-1)
            {
                sum = sum + a1[i][j];
            }
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}