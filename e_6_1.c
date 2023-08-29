/*
 * 将形参n中各位上为偶数的数取出，并按原来从高位到低位相反的顺序组成一个新数
 */

#include<stdio.h>
unsigned long fun(unsigned long n)
{
    unsigned long x=0;
    int t;
    while(n)
    {
        t = n%10;
        if(t%2==0)
            x = x*10+t;
        n = n/10;
    }
    return x;
}

int main()
{
    unsigned long n = -1;
    while(n>9999999999||n<0)
    {
        printf("please input(0<n<1000000000):");
        scanf("%ld",&n);
    }
    printf("\n The result is :%ld\n",fun(n));
    return 0;
}