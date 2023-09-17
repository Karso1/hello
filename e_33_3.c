#include<stdio.h>
#include<string.h>

long fun(char *s)
{
    int i,n;
    long a,r;
    a=0;
    r=0;
    n = strlen(s);
    for(i=0;i<n;i++)
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
    printf("plz input a string:\n");
    gets(s);
    r = fun(s)  ;
    printf("r = %ld\n",r);
    return 0;
}
