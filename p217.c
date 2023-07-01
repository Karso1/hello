/*
 * 求任意的一个M*N矩阵的对角线上元素之和
 * m（2<=m<=20)及矩阵元素从键盘输入
 */

#include<stdio.h>
int main()
{
    int a1[20][20],i,j,m,sum=0;
    printf("plz input m:");
    scanf("%d",&m);
    printf("plz input array:\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j=m-1;j++)
        {
            if(i==j||i+j+1==m)
            {
                sum=sum+a1[i][j];
            }
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}