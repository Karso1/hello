//judge the string whether a 连续增加字母序列

#include<stdio.h>
#include<string.h>
int fun(char *t)
{
    int k=0,i=0;
    while(t[i+1])
    {
        if(t[i+1] == t[i]+1)
        {
            k++;
            i++;
        }
        else
        {
            k=0;break;
        }
    }
    return k;
}
int main()
{
    char s[26];
    printf("plz enter a string:\n");
    gets(s);
    if(fun(s))
        printf("%s is a continue string:\n  ",s);
    else
        printf("%s is not a continue string:\n",s);
    return 0;
}