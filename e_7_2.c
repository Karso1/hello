//根据形参m的值，在m行m列二维数组输出数据

#include<stdio.h>
#define M 10
int a[M][M]={0} ;
void fun(int a[][M],int m)
{
    int j,k;
    for(j=0;j<m;j++)
        for(k=0;k<m;k++)
            a[j][k]=(k+1)*(j+1);
}

int main()
{
    int i,j,n;
    printf("Enter n:");
    scanf("%d",&n);
    fun(a,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}