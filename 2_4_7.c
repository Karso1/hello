#include<stdio.h>
double jiecheng(int x)
{
    double s=1;
    int i = 1;
    for(i=1;i<=x;i++)
    {
        s *= i;
    }
    return s;
}
int main()
{
    int m,n;
    double sum;
    scanf("%d %d",&m,&n);

    sum = jiecheng(n) / (jiecheng(m)*jiecheng(n-m));
    printf("%.0lf",sum);
    return 0;
}