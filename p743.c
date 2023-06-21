/*
 * 从键盘输入一行可带空格的字符串（<=127字节）按逆序输出该字符串
 *
 */

#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char a1[128];
    printf("input a string:");
    gets(a1);
    n = strlen(a1);
    printf("the result is :");
    for(i = n-1;i>=0;i--)
    {
        printf("%c",a1[i]);
    }
    return 0;
}