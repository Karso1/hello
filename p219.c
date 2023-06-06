/*
 * 从键盘读入一行字符，字符数《=127字节
 * 将其中的数字字符以及数量显示出来
 */

#include<stdio.h>
int main()
{
    int n = 0,i;
    char a1[128];

    printf("plz input string:");
    gets(a1);

    for(i=0;a1[i] != '\0'; i++)
    {
        if(a1[i]>='0' && a1[i]<='9')
        {
            n++;
        }
    }
    printf("\nshu zi ge shu wei :%d",n);
    printf("\nshu zi wei:");

    for(i=0;a1[i] != '\0'; i++)
    {
        if(a1[i]>='0' && a1[i]<='9')
        {
            printf("%c",a1[i]);
        }
    }
    return 0;
}