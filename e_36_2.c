#include<stdio.h>
void fun(char *a,char *b,char *c)
{
    int i=0,j=0;
    while(a[i]!='\0'&&b[i]!='\0')
    {
        c[j++]=a[i];
        if(b[i+1]!='\0')
            c[j++]=b[i+1];
        else
            break;
        if(a[i+1]=='\0')
            break;
        i+=2;
    }
    c[j]='\0';
}
int main()
{
    char a[40]="asderty",b[40]="zxcvb",c[80];
    fun(a,b,c);
    puts(c);
    return 0;
}