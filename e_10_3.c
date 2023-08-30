//将s所指字符串中ASCII值为奇数的字符删除，剩余字符形成一个新串放在t数组

#include<stdio.h>
#include<string.h>
void fun(char *s,char t[])
{
    int i,slenth,n=0;
    slenth = strlen(s);
    for(i=0;i<slenth;i++)
        if(s[i]%2==0)
            t[n++]=s[i];
        t[n]='\0';
}
int main()
{
    char s[100],t[100];
    printf("\nPlz enter string:\n");
    scanf("%s",s);
    fun(s,t);
    printf("\nThe result is:%s\n",t);
    return 0;
}