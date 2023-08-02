#include<stdio.h>
double jie(int n);
int main()
{
    int i,n;
    double e =1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        e += 1/jie(i);
    }
    printf("%.8lf",e);
    return 0;
}
double jie(int n)
{
    int i;
    double s = 1;
    for(i = 1;i<=n;i++)
        s *= i;
    return s;
}