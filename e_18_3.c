//统计一行字符串中单词的个数作为函数值返回
//字符串在主函数中输入，并且全部由小写字母组成，单词之间有若干个空格隔开
#include<stdio.h>
#include<string.h>
#define N 80
int fun(char *s)
{
    int i=1,j=0;
    while(*s)
    {
        if((i==1)&&(*s!=32))
        {
            j++;
            i=0;
        }
        if(*s == 32)
            i=1;
        s++;
    }
    return j;
}

int main()
{
    char line[N];
    int num = 0;
    printf("Enter a string:\n");
    gets(line);
    num = fun(line);
    printf("The number of word is:%d\n",num)    ;
    return 0;
}