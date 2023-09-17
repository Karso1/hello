#include<stdio.h>
#define N 4
void fun(int a[][N],int b[])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        b[i]=a[i][0];
        for(j=1;j<N-1;j++)
            if(b[i]>a[i][j])
                b[i]=a[i][j];
    }
}
int main()
{
    int a[N][N]={{1,4,3,2},{8,6,5,7},{11,10,12,9},{13,16,14,15}},b[N];
    int i;
    fun(a,b);
    for(i=0;i<N;i++)
        printf("%d,",b[i]);
    printf("\n");
    return 0;
}