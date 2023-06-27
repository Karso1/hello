/*
 *  从键盘输入3个可带空格的字符串（约定字符数<=127字节）
 *  输出最大的字符串
 */

#include<stdio.h>
#include<string.h>
int main()
{
    char a1[128],b1[128],c1[128],max[128];
    printf("plz input the first string:\t");
    gets(a1);
    printf("plz input the second string:\t");
    gets(b1);
    printf("plz input the third string:\t");
    gets(c1);
    if(strcmp(a1,b1)>0)
    {
        strcpy(max,a1);//复制字符串strcpy
    }
    else
    {
        strcpy(max,b1);
    }
    if(strcmp(c1,max)>0)//strcmp字符串比较函数
    {
        strcpy(max,c1);
    }
    printf("\nthe biggest string is:%s",max);
    return 0;
}