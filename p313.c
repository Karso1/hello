/*
 * 求任意地一个M*N矩阵的鞍点
 * 鞍点：指该位置上的元素在该行上位最大，在该列上为最小，矩阵中可能没有鞍点，但最多一个鞍点
 * 2<=m<=20;2<=n<=20
 */

#include<stdio.h>
int main()
{
    int a1[20][20],i,j,ii,maxi,minj,mi,mj,mi1,m,n,z1=0;
    printf("plz input m and n:");
    scanf("%d %d",&m,&n );
    printf("plz input a juzhen %d hang,%d lie:\n",m,n);
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<=m-1;i++)
    {
        maxi = a1[i][0];
        for(j=0;j<=n-1;j++)
        {
            if(a1[i][j]>maxi)
            {
                maxi=a1[i][j];
                mi =i;
                mj=j;
            }
        }
        minj=a1[0][mj];
        for(ii=0;ii<=m-1;ii++)
        {
            if(a1[ii][mj]<minj)
            {
                minj=a1[ii][mj];
                mi1=ii;
            }
        }
        if(maxi == minj&& mi ==mi1)
        {
            printf("you an dian,wei:juzhen[%d][%d]=%d\n",mi,mj,maxi);
            z1=1;
        }
    }
    if(z1==0)
    {
        printf("mei you an dain.\n ");
    }
    return 0;
}