#include<stdio.h>
#include<stdlib.h>
#define N 10
void NONO(FILE *fp,int pd[],int n);
void fun(int *dp,int n,int upordown)
{
    int i,dorx;
    dorx=0;
    if(upordown ==0)
    {
        for(i=1;i<n;i++)
            if(dp[dorx]>dp[i])
                dorx=i;
    }
    else
    {
        for(i=1;i<n;i++)
            if(dp[dorx]<dp[i])
                dorx=i;
    }
    i = dp[0];
    dp[0]=dp[dorx];
    dp[dorx]=i;
}
void display(int pd[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%4d",pd[i]);
    printf("\n");
}

void main()
{
    int data[N],i,n=N;
    FILE *out;
    out = fopen("out.dat","w");
    for(i=0;i<N;i++)
        data[i]=rand()%90+10;
    for(i=0;i<N-1;i++)
        fun(data+i,n-i,0);
    display(data,n);
    NONO(out,data,n);
    for(i=0;i<N;i++)
        data[i]=rand()%90+10;
    for(i=0;i<N-1;i++)
        fun(data+i,n-i,1);
    display(data,n);
    NONO(out,data,n);
    fclose(out);
    return 0;
}