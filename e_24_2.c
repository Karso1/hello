#include<stdio.h>
void fun(char *s)
{
    int i,j;
    for(i=0,j=0;s[i]!='\0';i++)
        if(s[i]>='0' && s[i]<='9')
            s[j++]=s[i];
        s[j]='\0';
}
int main()
{
    char item[80];
    printf("\nEnter a string:");
    gets(item);
    printf("\nThe string is:\"%s\"\n",item );
    return 0;
}