/*
 * 从键盘上输入一行字符，<=127字节
 * 将其进行转换：A-Z,B-Y,..Z-A;a-z,b-y,z-a
 */
#include<string.h>
#include<stdio.h>
int main()
{
    int i, n;
    char a1[128];
    printf("plz input string:");
    gets(a1);
    for (i = 0; a1[i] != '0'; i++)
    {
        if(a1[i]>='A'&&a1[i]<='Z')
        {
            a1[i] = 'A'+'Z'-a1[i];
        }
        else if(a1[i]>='a'&&a1[i]<='z')
        {
            a1[i] = 'a'+'z'-a1[i];
        }
    }
    n = strlen(a1);
    printf("\nzi fu chuan chang du :%d",n);
    printf("\nzhuan huan wei:");
    puts(a1);
    return 0;
}