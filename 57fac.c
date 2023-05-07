/*
 * 编写阶乘函数并调用
 */

#include<stdio.h>

long jc(long x)//编写阶乘函数，定义为long jc
{
    int n;//定义需要乘的次数n
    long result = 1;//定义函数中的最后阶乘结果为result
    for(n=1;n<=x;n++)
    {
        result *= n;// == result = result * n;
    }
    return result;//将此阶乘函数求出来的阶乘结果result返回
}
int main()
{
    long a;//定义整数a，a由用户输入
    long ret;//定义阶乘结果为ret
    printf("plz input a number:");//让用户输入一个需要阶乘的数字
    scanf("%ld",&a);//将用户输入的数字给到a
    ret = jc(a);//调用上面写的阶乘函数，并将函数中的x改为用户输入的a，代入进行运算
    //并且将自己定义的jc函数返回值赋值给ret阶乘结果
    printf("\nthe result is %ld\n",ret);//输出阶乘的结果
    return 0;
}