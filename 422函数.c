/*
 * 函数
 *
 * 分类：库函数，自定义函数
 *
 *
 */

#include<stdio.h>
int get_max(int x,int y)
{
    return(x>y?x:y);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    //求较大值
    int m = get_max(a,b);
    printf("%d",m);
    return 0;
}
/*
 * 实际参数，实参，真实传给函数的参数，可以是常量变量表达式函数等等
 * 无论实参是哪种类型的量，在进行函数调用时，他们都必须有确定的值，以便把这些只传送给形参
 *
 * 形参，形式参数。指的是函数名后括号内的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单），所以叫形式参数
 * 形式参数当函数调用完成之后会销毁，因此形式参数值在函数范围内有效
 *
 * 函数调用
 * 传值调用，函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参
 * 传址调用，把函数外部创建变量的内存地址传递给函数参数的一种调用函数方式。可以让函数和函数外边的变量建立其真正的联系，也就是函数内部可以直接操作函数外部的变量
 *
 *
 */

//写一个函数判断一个数是不是素数
//打印一百到两百之间的素数
/*
#include<stdio.h>
int is_prime(int n )
 {
    int j = 0;
    for (j = 2;j<= sqrt(n);j++)
    {
    if(n%j == 0)
    {
    return 0;
    }
}
 }
 return 1;
 }

 int main()
{
    int count = 0;
    int i = 0;
    for (i = 100;i <= 200;i++)
    {


    }
    printf("\ncount = %d\n",count);
    return 0;
}*/

