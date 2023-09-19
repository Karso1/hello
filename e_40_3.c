#include<stdio.h>
void fun(char *a)
{
    int i=0,k;
    while(a[i]=='*')
        i++;
    k=i;
    while(a[i]!='\0')
    {
        if(a[i]!='*')
            a[k++]=a[i];
        i++;
    }
    a[k]='\0';
}

int main()
{
    char s[81];
    printf("Enter a string:\n");
    gets(s);
    fun(s);
    printf("The string after deleter :\n");
    puts(s);
    return 0;
}