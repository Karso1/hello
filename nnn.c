/*
 * 编写函数，计算并输出下列多项式之和
 * s=1+1/1！+1/2！+++++1/n！
 */

#include<stdio.h>

double fun(int n)
{
    int i,m=1;
    double s= 1;
    for (i=1;i<n;i++)
    {
        m *= i;
        s += 1.0/m;
    }
    return s;
}

int main()
{
    int n;
    double s;
    void NONO();
    printf("input n:\n");
    scanf("%d",&n);
    s = fun(n);
    printf("s = %f\n",s);
    return 0;
}
