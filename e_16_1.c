/*
 * 判定形参a所指的N阶矩阵是否位幻方
 * 若是，则返回1，否则0；
 * 幻方：每行每列主副对角线上的元素之和都相等
 */

#include<stdio.h>
#define N 3
int fun(int (*a)[N])
{
    int i,j,m1,m2,row,colum;
    m1=m2=0;
    for(i=0;i<N;i++)
    {
        j = N-i-1;
        m1 += a[i][j];
        m2+=a[i][j];
    }
    if(m1!=m2)
        return 0;
    for(i=0;i<N;i++)
    {
        row =colum = 0;
        for(j=0;j<N;j++)
        {
            row += a[i][j] ;
            colum += a[i][j];
        }
        if((row!= colum)|| (row!= m1)  )
            return 0;
    }
    return 1;
}
int main()
{
    int x[N][N],i ,j;
    printf("Enter number for array:\n");
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            scanf("%d",&x[i][j]);
        printf("Array:\n");
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
                printf("%3d",x[i][j]);
            printf("\n");
        }
        if(fun(x)) printf("The Array is a magic square \n");
        else
            printf("The Array is not a magic square\n");
        return 0;
}