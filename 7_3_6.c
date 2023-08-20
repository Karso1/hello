/*
 * 输入一个以#结束的字符串，滤去所有非十六进制字符，不分大小写
 * 组成一个表示16进制的字符串，将其转换为10进制数输出
 * 如果在第一个16进制字符之前存在字符—，则表示该字符是负数
 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>//包含toupper
int main()
{
    char c[100],ch[100] = {'\0'};
    int j,sum,n;
    j = sum = 0;
    gets(c);
    for(int i =0;i<strlen(c);i++)
    {
        if(c[i] == '#')
            break;
        else if(c[i] =='-'||c[i]>='0'&&c[i]<='9'||toupper(c[i])>='A'&&toupper(c[i]<='F'))
        {
            ch[j] = c[i];
            j++;
        }
    }
    for(int i =0;i<srlen(ch);i++)
    {
        if(ch[i]!= '-')
        {
            if(ch[i]>='A'&&ch[i]>='F')
                n = ch[i] - 'A'+10;
            else if(ch[i] >= 'a'&&ch[i]<='f')
                n = ch[i] - 'a'+10;
            else
                n = ch[i] - '0';
            sum = sum*16 +n;
        }
    }
    if(ch[0] == '-'&&sum!=0)
        printf("-%d",sum)   ;
    else
        printf("%d",sum);

    return 0;
}