/*
 * 从低位开始依次取长整型变量s中奇数位上数，构成一个新数方在t中
 */

#include<stdio.h>
void fun(long s,long *t)
{
    long s1=10;
    s /=10;
    *t = s%10;
    while(s>0)
    {
        s=s/100;
        *t = s%10*s1+*t;
        s1 *= 10;
    }
}
int main()
{
    long s, t;
    printf("\nPlz enter long number:");
    scanf("%ld",&s);
    fun(s,&t);
    printf("The result is:%ld\n",t)
    return 0;
}