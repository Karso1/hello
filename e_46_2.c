#include<stdio.h>
#include<string.h>
int fun(char *str)
{
    int k,c0,c1;
    c0=c1=-1;
    for(k=0;k<strlen(str);k++)
    {
        if((str[k]>='A')&&(str[k]<='Z'))
        {
            c0=c1=k;
            break;
        }
    }
    if(c0==-1)
        return 0;
    for(k=0;k<strlen(str);k++)
    {
        if((str[k]>='A')&&(str[k]<='Z'))
        {
            if(str[k]<str[c0])
                c0=k;
            if(str[k]>str[c1])
                c1=k;
        }
    }
    return str[c1]-str[c0];
}
int main()
{
    char str[100];
    int l;
    printf("input string:\n");
    scanf("%s",str);
    l = fun(str);
    printf("span:%d\n",l);
    return 0;
}