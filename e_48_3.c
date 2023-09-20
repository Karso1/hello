#include<stdio.h>
#define N 20
void fun(char *a,char *s)
{
    int i=0;
    while(*s!='\0')
    {
        a[i]=*s;
        s++;
        i++;
    }
    a[i]='\0';
}
int  main()
{
    char s1[N],*s2="abcdeghijk";
    fun(s1,s2);
    printf("%s\n",s1);
    printf("%s\n",s2);
    return 0;
}