#include<stdio.h>
#define N 100
void fun(int *a,int n)
{
    int i,t;
    for(i=0;i<n;i++)
        a[i]=0;
    i=0;
    t=1;
    while(i<n)
    {
        a[i]=1;
        t++;
        i=i+t;
    }
}
int main()
{
    int a[N],i,n=30 ;
    fun(a,n);
    for(i=0;i<n;i++)
        if(a[i]==1)
            printf("%d\n",i );
        return 0;
}