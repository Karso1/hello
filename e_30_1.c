#include<stdio.h>
#include<stdlib.h>
#define N 20
void fun (int *a)
{
    int i,x,n=0;
    x=rand()%20;
    while(n<N)
    {
        for(i=0;i<n;i++)
            if(x==a[i]) break;

            if(i==n)
            {
                a[n]=x;
                n++;
            }
            x=rand()%20;
    }
}
int main()
{
    int x[N]={0},i;
    fun(x);
    printf("The result :\n");
    for(i=0;i<N;i++)
    {
        printf("%4d",x[i]);
        if((i+1)%5==0)
            printf("\n");
    }
    printf("\n");
    return 0;
}