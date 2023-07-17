/*
 * 从键盘读入一行字符，删除除英文字母意外的所有其它字符，并输出剩余字符
 */

#include<stdio.h>
int main()
{
    char str[100];
    printf("plz input the string:\n");
    gets(str);
    deleteother(str);
    printf("\noutput:%s\n",str);
    return 0;
}
void deleteother(char *pp)
{
    int i,j=0;
    for (i = 0; *(pp + i) != '\0'; i ++)
    {
        if ((*(pp + i) >= 'a' && *(pp + i) <= 'z') || (*(pp + i) >= 'A' && *(pp + i) <= 'Z'))
        {
            *(pp + j) = *(pp + i);

            j ++;
        }
    }
    *(pp + j) = '\0';
}