#include<stdio.h>
#define N 3
void fun(int a[N][N],int *p)
{
    int i;
    for(i=0;i<N;i++)
    {
        p[i]=a[i][i]*2;
        p[N+i]=a[i][N-1-i]*3;
    }
}
int main()
{
    int a[N][N]={1,5,7,2,6,8,3,4,9}
    int b[2*N],i;
    fun(a,b);
    for(i=0;i<2*N;i++)
        printf("%d",b[i]);
    return 0;
}