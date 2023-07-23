/*
 * 编写加密程序，加密规则为
 * 将所有字母转化为该字母后的第三个字母即A->D,C->F，小写字母同上
 * 其他字符不做转化
 * 输入任意字符串，输出加密后的结果
 */

#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    gets(s);//输入一行文本用gets
    int len = strlen(s);
    for(int i=1;i<len;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i] += 3;
            if(s[i]>'Z') s[i] -= 26;//溢出循环
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            s[i] += 3;
            if(s[i]>'z') s[i] -= 26;//溢出循环
        }
        else
        {
            continue;
        }
    }
    puts(s);
    return 0;
}