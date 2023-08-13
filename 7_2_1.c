/*
 * 求一个给定的m*n矩阵各行元素之和
 */
/*
#include<stdio.h>
int main()
{
    int m,n,a[6],s=0;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int j = 0;j<n;j++)
            s += a[j];
        printf("%d\n",s);
        s = 0;
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum_row=0,sum_col=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum_row += a[i][j];
        }
        printf("第%d行元素之和是%d\n",i,sum_row);
        sum_row = 0;
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            sum_col += a[i][j];
        }
        printf("第%d列元素之和是%d\n",j,sum_col);
        sum_col = 0;
    }
    return 0;
}