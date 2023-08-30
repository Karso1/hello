//将ASCII码值小于97的字符存入形参t所指字符数组中，形成新串，返回符合条件的字符个数
#include<stdio.h>
int fun(char *s,char *s);
int main()
{
    char s[81],t[81];
    int n;
    printf("enter a string:\n");
    gets(s);
    n = fun(s,t);
    printf("There are %d letter which ASCII code is less than 97:%S\n",n,t);
    return 0;
}

int fun(char *s,char *)
{
    int n=0;
    while(*s)
    {
        if(*s<97)
        {
            *(t+n)=*s;
            n++;
        }
        s++;
    }
    *(t+n)=0;
    return n;
}