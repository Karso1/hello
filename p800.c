/*
 * 求s=1/1！+2/2！+……+1/N！
 */

#include<stdio.h>
int main()
{
    int n;
    double Sum;
    printf("plz input n:\n");
    scanf("%d",&n);
    fun(&Sum,n);
    printf("S=1/1!+2/2!+……+1/%d!=%.16f\n",n,Sum);
    return 0;
}
void fun(double *sn,int n)
{
    int i;
    double Sum = 0,jc=1;
    for(i=0;i<=n;i++)
    {
        jc *= i;
        Sum += 1/jc;
    }
    *sn = Sum;
    //将计算结果通过指针参数返回给主调函数
}