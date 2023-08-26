/*
 *fun的功能是将ss所指字符串中所有下标位置为奇数的字母转换为大写
 */

#include<stdio.h>
#include<string.h>

void fun(char *ss);
void main()
{
    char tt[51];
    printf("\nPlease enter an character string within 50 characters:\n");
    gets(tt);
    printf("\nAfter changing ,the string\n%s\n",tt);
    fun(tt);
    printf("\nbecomes\n \"%s\"",tt);
    getchar();
}

void fun(char *ss)
{
    int i,n =0;
    char *p;
    p =ss;
    while(*p ++ != '\0' )
        n++;
    for(i=1;i<n;i+=2)
        if(ss[i]>='a' && ss[i]<='z')
            ss[i]=ss[i]-'a'+'A';
}