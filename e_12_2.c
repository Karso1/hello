//计算s所指字符串中含有t所指字符串的数目
#include<stdio.h>
#include<string.h>
#define N 80
int fun(char *s,char *t)
{
    int n;
    char *p,*r;
    n=0;
    while(*s)
    {
        p = s;
        r = t;
        while(*r)
            if(*r == *p)
            {
                r++;
                p++;
            }
        else break;
        if(*r == 0)
            n++;
        s++;
    }
    return n;
}

int main()
{
    char a[N],b[N];
    int m;
    printf("\nplz enter string a :");
    gets(a);
    printf("\nplz enter substring b :");
    gets(b) ;
    m = fun(a,b);
    printf("\nThe result is:m = %d\n",m);
    return 0;
}