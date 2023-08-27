/*
 * 根据形参n计算并返回阶乘n
 * 为避免每次阶乘都要从1开乘，程序中使用静态结构体变量old保存上次计算的阶乘
 * 每次计算时，要比较新的参数n与上次计算的阶数n，以便决定计算方法
 */

#include<stdio.h>
#include<stdlib.h>
long fun(int n);
struct Ord
{
    int n;
    long ordor;
};

int main()
{
    int i,n;
    for(i=0;i<5;i++)
    {
        n=rand()%10;//随机生成0-9的数字算其阶乘
        //共算五次
        printf("%d %ld\n",n,fun(n));
    }
    return 0;
}

long fun(int n)
{
    static struct Ord old = {0,1};
    int i;
    if(n == old.n)
    {
        return old.n;
    }
    if(n>old.n)
        for(i=old.n+1;i<=n;i++)
            old.ordor*=i;
        else
            for(i=old.n;i>n;i--)
                old.ordor /= i;

            old.n = n;
            return (old.ordor);
}