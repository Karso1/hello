//将一个数字字符串转换成其逆向串面值相同的的长整型整数

#include<stdio.h>
#include<string.h>
long fun(char *s)
{
    int i,n;
    long a,r;
    a=0;
    r=0;
    n = strlen(s);
    for(i=n-1;i>=0;i--)
    {
        a=*(s+i)-48;
        r=r*10+a;
    }
    return r;
}
int main()
{
    char s[10];
    long r;
    printf("plz input a number string:\n");
    gets(s);
    r = fun(s);
    printf("r = %ld\n",r);
    return 0;
}