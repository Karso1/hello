#include<stdio.h>
#include<string.h>
void fun(char *s,char *t)
{
    int i,sl;
    i=0;
    sl=strlen(s);
    for(;i<sl;i++)
        t[i]=s[sl-i-1];
    for(i=0;i<sl;i++)
        t[sl+i]=s[i];
    t[2*sl]='\0';
}
int main()
{
    char s[100],t[100];
    printf("\nPlz enter string s:\n");
    scanf("%s",s);
    fun(s,t);
    printf("The result is:%s\n",t);
    return 0;
}