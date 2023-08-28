#include<stdio.h>
double fun(int n)
{
    double m=1.0,p=1.0;
    int i;
    for(i=1;i<=n;i++)
    {
        p = p*i;
        m = m+1.0/p;
    }
    return (m) ;
}

int main()
{
    int n;
    double s;
    printf("input n:");
    scanf("%d",&n);
    getchar();
    s = fun(n);
    printf("s= %f\n",s);
    return 0;
}