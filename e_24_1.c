/*
 * 将一个二进制字符串转换成十进制
 */

#include<stdio.h>
#define N 16
int fun(char *s)
{
    int i,n=0;
    for(i=0;s[i]!=0;++i)
    {
        n = n*2 + (s[i]-48);
    }
    return n;
}
int main()
{
    char num[] = "10001";
    int n;
    n = fun(num);
    printf("%s --> %d\n",num,n);
    return 0;
}