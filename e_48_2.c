#include<stdio.h>
#define N 4
void fun(int a[][N],int b[])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        b[i]=a[i][0];
        for(j=1;j<=N-1;j++)
            if(b[i]>a[i][j])
                b[i]=a[i][j];
    }
}

int main()
{
    int a[N][N]={{1,23,1,4},{12,3,41,1},{123,4,5,6},{17,8,3,5}},b[N];
    int i;
    fun(a,b);
    for(i=0;i<N;i++)
        printf("%d,",b[i]);
    printf("\n");
    return 0;
}