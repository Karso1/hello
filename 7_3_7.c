/*
 * 提取一个字符串中的所有数字字符，0——9，将其转换为一个整数输出
 */

#include<stdio.h>
#include<string.h>
int main()
{
    char c[81];
    int n =1,sum=0;
    gets(c);
    for(int i =strlen(c);i>=0;i--)
        if(c[i]>='0'&&c[i]<='9')
        {
            sum += n*(c[i]-48);
            n*= 10;
        }
    printf("%d",sum);
        return 0;
}