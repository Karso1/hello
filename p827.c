/*
 * 从键盘输入3个可带空格字符串，要求字符数<=127字节，输出长度最大的字符串的长度
 */

#include<stdio.h>
#include<string.h>
int main()
{
    int x1,x2,x3,max;
    char a1[128],b1[128],c1[128];
    printf("plz input the first string:\t");
    gets(a1);//\t是转义字符，水平制表符，相当于tab
    printf("plz input the second sting:\t");
    gets(b1);
    printf("plz input the third string:\t");
    gets(c1);
    x1=strlen(a1);
    x2=strlen(b1);
    x3=strlen(c1);
    if(x1>x2)
    {
        max=x1;
    }
    else
    {
        max=x2;
    }
    if(x3>max)
    {
        max=x3;
    }
    printf("\nthe longest string length is %d",max);
    return 0;
}