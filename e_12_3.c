//结构体struct mpow：a为底数，t为指数
//计算x所指数组中n各幂之和并返回
#include<stdio.h>
#define N 5
struct mpow
{
    double a;
    int t;
};
double fun(struct mpow *x,int n)
{
    int i,j;
    double s =0,m=1;
    for(i=0;i<n;i++)
    {
        m = 1;
        for(j=0;j<x[i].t;j++)
            m = m*x[i].a;
        s+=m;
    }
    return s;
}
void main()
{
    struct mpow x[N]={12 ,12 ,21,21,214,53,5,1};
    double sum;
    sum = fun(x,4);
    printf("sum = %lf\n",sum);
    return 0;
}