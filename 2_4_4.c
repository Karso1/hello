#include<stdio.h>
int main()
{
    int sum=0,n,i,m,x=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(m=1;m<=i;m++)
        {
            x *= m;
        }
        sum += x;
        x=1;
    }
    printf("%d",sum);
    return 0;
}