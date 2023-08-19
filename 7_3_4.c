#include<stdio.h>
int main()
{
    char ch[81];
    char c;
    int i;
    gets(ch);
    for(i=0;(c=ch[i])!='\0';i++)
    {
        if(c>='A'&&c<='Z')
        {
            c='Z'-(c-'A');
            printf("%c",c);
        }
        else
            printf("%c",c);
    }
    return 0;
}