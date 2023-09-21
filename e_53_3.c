#include<stdio.h>
#include<stdlib.h>
void fun(char *a)
{
    int i;
    for(i=strlen(a)-i;i>=0  ;i--    )
        if(a[i]!='*')
            break;
        a[i+1]=0;
}
int main()
{
    char s[81];
    printf("Enter a string:\n");
    gets(s);
    fun(s);
    printf("The string after deleted:\n");
    puts(s);
    return 0;
}