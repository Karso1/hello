#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    while((ch = getchar())!= '#')
    {
        if(ch>='a'&&ch<='z')
            printf("%c",ch-32);
        else if(ch>='A'&&ch<='Z')
            printf("%c",ch + 32);
        else
            printf("%c",ch) ;
    }
    return 0;
}