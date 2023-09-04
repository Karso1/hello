//将s所指字符串中的字母转换为后一个字母
#include<stdio.h>
#include<ctype.h>
void fun(char *s)
{
    while(*s != 0)
    {
        if(*s>='A' && *s<='Z' || *s>='a' && *s<='z')
        {
            if(*s == 'Z') *s = 'A';
            else if(*s == 'z') *s = 'z';
            else *s += 1;
        }
        s++;
    }
}
int main()
{
    char s[80];
    printf("\n Enter a string with length < 80:\n\n");
    gets(s);
    printf("The string :\n");
    puts(s);
    fun(s);
    printf("\nThe cords:\n");
    puts(s);
    return 0;
}