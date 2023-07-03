/*
 * 求任意的一个M*N矩阵的第0行，第2行，和最后一行所有数值和
 * 4<=m<=20
 *
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
        for(j=0;j<=m-1;j++)
        {
            if(i==0 || i==2 || i==m-1)
            {
                sum = sum + a1[i][j];
            }
        }
    }
    printf("sum = %d",sum);
    return 0;
}