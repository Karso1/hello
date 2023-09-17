#include<stdio.h>
#include<string.h>
void fun(char *p,char *q,char *c)
{
    int k=0;
    while(*p || *q)
    {
            if(*p<*q)   c[k]    = *q;
            else c[k]=*p;
            if(*p) p++;
            if(*q) q++;
            k++;
    }
}
int main()
{
    char a[10]="aBCDeFgH",b[10]="ABcd",c[80]={'\0'};
    fun(a,b,c);
    printf("The string a:");
    puts(a) ;
    printf("The string b:");
    puts(b) ;
    printf("The string :");
    puts(c);
    return 0;
}