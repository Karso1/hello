#include<stdio.h>
#define N 20
int fun(int *a,int n,int x)
{
    int p=0,i;
    a[n]=x;
    while(x!=a[p])
        p = p+1;
    if(p==n)return -1;
    else
    {
        for(i=p;i<n-1;i++)
            a[i]=a[i+1];
        return n-1;
    }
}
int main()
{
    int w[N]={-3,123,43,42,4124,51,12,42,62,551},x,n,i ;
    n = 10;
    printf("The original data:\n");
    for(i=0;i<n;i++)
        printf("%5d",w[i]);
    printf("\nInput x:\n");
    scanf("%d",&x);
    printf("Delete :%d\n",x);
    n =fun(w,n,x);
    if(n==-1)
        printf("***Not be foung!***\n");
    else
    {
        printf("The data after deleted\n");
        for(i=0;i<n;i++)
            printf("%5d",w[i]);
        printf("\n");
    }
    return 0;
}