/*
 * 当奇数次调用时需要把字符串中的小写字母转换成大写字母
 * 偶数次调用时按输入字符串的逆序输出字符串
 */
#include<ctype.h>
#include<stdio.h>
#include<string.h>
void fun(char *s)
{
    int i;
    static int n=1;
    if(n++%2)
        for(i=0;i<strlen(s);i++)
            printf("%c",(islower[i])?toupper(s[i]):s[i]);
        else
            for(i=strlen(s)-1;i>=0;i--)
                printf("%c",s[i]);
}
int main()
{
    int i;
    char s[] = "Hello";
    for(i=0;i<5;i++)
    {
        fun(s);
        printf("\n");
    }
    return 0;
}