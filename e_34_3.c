#include<stdio.h>
void fun(char *a)
{
    char *p,*q;
    int n=0;
    p=a;
    while(*p == '*')
    {
        n++;
        p++;
    }
    q=a;
    while(*p)
    {
        *q=*p;
        q++;
        p++;
    }
    for(;n>0;n--)
        *q++='*';
    *q='\0';
}

int main()
{
    char s[81];
    int n=0;
    printf("Enter a string:\n");
    gets(s);
    fun(s);
    printf("The string after moving:\n");
    puts(s);
    return 0;
}
