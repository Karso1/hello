#include<stdio.h>
int main()
{
    int n,i;
    double a =2,b=1,r,sum =0;
    r = b;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum += a/b;
        b=a;
        a = a + r;
        r = b;
    }
    printf("%.2f",sum);
    return 0;
}