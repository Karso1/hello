/*
 * 将一个由八进制数组组成的字符串转换为十进制整数
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fun(char *p)
{
    int n;
    n = *p - '0';
    p++;
    while(*p != 0)
    {
        n = n*8+*p-'0';
        p++;
    }
    return n;
}
int main()
{
    char s[6];
    int i;
    int n;
    printf("Enter a string (0catal digits): ");
    gets(s);
    if(strlen(s)>5)
    {
        printf("Error:string too longer!\n\n");
        exit(0);
    }
    for(i=0;s[i];i++) {
        if (s[i] < '0' || s[i] > '7') {
            printf("Error:%c not is ocatal digits!\n", s[i]);
            exit(0);
        }
    }
    printf("The original string: ");
    puts(s);
    n = fun(s);
    printf("\n%s is convered to integer number:%d\n",s,n);
    return 0;
}