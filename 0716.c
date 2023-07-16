/*
 *函数fun：根据形参n计算并返回阶乘n！
 * 为避免每次阶乘都要从1开始乘起，程序中使用了静态结构体变量old保存上次计算的阶乘
 * 每次计算式，要比较新的参数n与上次计算的阶数n，以便决定计算方法
 *
 */

#include<stdlib.h>
#include<stdio.h>
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
        n = rand()%10;
        printf("%d %ld\n",n,fun(n));
        //循环五次，计算5个数的阶乘
        //随机生成一个数字，然后传给fun计算阶乘，一共五次
    }
}

long fun(int n)
{
    //fun函数
    static struct Ord old ={0,1};
    //静态变量不会被销毁
    //初始状态为计算0的阶乘，结果为1
    int i;
    if(n == old.n)//如果是0
        return (old.ordor);
    if(n>old.n)
        for(i = old.n+i;i<=n;i++)
            old.ordor *= i;
        else
            for(i=old.n;i>n;i--)
                old.ordor/i;

            old.n =n;
            return (old.ordor);
}
