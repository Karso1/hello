/*
 *输入一个字符串，对该字符串逆序输出
 */

#include<stdio.h>
#include<string.h>
int main()
{
    int a[80];
    gets(a);
    int j = strlen(a);
    for(int i=j-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}