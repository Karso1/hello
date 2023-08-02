#include<stdio.h>
#include<math.h>
void fun(int ar[8],int m);
int main()
{
    int n,j,k,s;
    int sum,min,max,m;
    int a[8] = {0};
    scanf("%d",&n);
    scanf("%d",&n);
    min = pow(10,n-1);
    max = pow(10,n)-1;
    for(j=min;j<=max;j++)
    {
        if(j>50000000&&j<90000000||j>200000000&j<4000000000)
            continue;
        m = j;
        fun(a,m);
        sum = 0;
        for(k=1;k<=n;k++)
            sum += pow(a[k],n);
        if(sum == j)
            printf("%d\n",j);
    }
    return 0;
}
void fun(int ar[8],int m)
{
    int i=1;
    while(m)
    {
        ar[i]=m%10;
        m = m/10;
        if(m<10)
            ar[i+1]=m;
        i++;
    }
}