/*
 * 将形参n中各位上为偶数的数字取出，并按原来从高到低组成新数
 */

#include<stdio.h>
unsigned long fun(unsigned long n)
{
    unsigned long x=0,s,i;
    int t;
    s = n;
    i = 1;
    while(s)
    {
        t = s%10;
        if(t%2==0)
        {
            x=x+t*i;
            i = i*10;
        }
        s = s/10;
    }
    return x;
}
int main()
{
    unsigned long n = -1;
    while(n>9999999999|| n <0)
    {
        printf("plz input(0<n<10000000000):");
        scanf("%ld",&n);
    }
    printf("\nThe result is :%ld\n",fun(n));
    return 0;
}