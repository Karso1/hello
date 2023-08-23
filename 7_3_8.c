#include<stdio.h>
int main()
{
    char ch[81];
    char c,s;
    int i,count=0;
    gets(ch);
    c=getchar();
    for(i=0;(s=ch[i])!='\0';i++)
    {
        if(c==s)
            count++;
    }
    printf("%d",count);
    return 0;
}