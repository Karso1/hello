#include<stdio.h>
double fac(int n);//阶乘函数
int main()
{
    int i = 0;
    double eps,n=0,s=1,PI;
    scanf("%le",&eps);//以科学计数法形式的双精度浮点数
    for(i=1; ;i += 2)
    {
        s*=i;
        PI += fac(n)/s;
        if(fac(n)/s<eps)
            break;
        n++;
    }
    printf("PI = %.5lf",2.0*PI);
    return 0;
}
double fac(int n)
{
    int i;
    double s = 1;
    if(n == 0)
        s = 1;
    else
        for(i = 1;i<=n;i++)
            s*=i;
        return s;
}