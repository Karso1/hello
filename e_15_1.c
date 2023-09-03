/*
 * 将形参s所指字符串最右边的n个字符复制到形参t所指字符数组中形成一个新串
 * 若s所指字符串的长度小于n，则将整个字符串复制到形参t送至数组中
 */

#include<stdio.h>
#include<string.h>
#define N 80
void fun(char *s,int n,char *t)
{
    int len,i,j=0;
    len =strlen(s);
    if(n>=len)strcpy(t,s);
    else
    {
        for(i=len-n;i<=len-1;i++)
        {
            t[j++]=s[i];
        }
        t[j]='\0';
    }
}
int main()
{
    char s[N],t[N];
    int n;
    printf("Enter a string:\n");
    gets(s);
    printf("Enter n:");
    scanf("%d",&n);
    fun(s,n,t);
    printf("The string t:\n");
    puts(t);
    return 0;
}