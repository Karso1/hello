/*
 * 求任意地一个m*n矩阵的最大数及其所在的行列数，m（2<=m<=20)及矩阵元素从键盘输入
 */

#include<stdio.h>
int main()
{
    int a1[20][20],i,j,maxi,maxj,max,m;
    printf("plz input m:");
    scanf("%d",&m);
    printf("\nplz input array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    max=a1[0][0];
    maxi =0;
    maxj=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(max<a1[i][j])
            {
                max=a1[i][j];
                maxi=i;
                maxj=j;
            }
        }
    }
    printf("\nmax=%d,i=%d,j=%d\n",max,maxi,maxj);
    return 0;
}