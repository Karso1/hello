/*
 * 输入字符串s(约定字符数<=100字节）
 * 将字符串s中的所有字符“*”删除
 * 并将修改后的字符串显示出来
 */

#include<stdio.h>
int main()
{
    int i,j=0;
    char a1[101];
    printf("plz input a string:");
    gets(a1);
    for(i=0;a1[i]!='\0';i++)
    {
        if(a1[i]!='*')
        {
            a1[j]=a1[i];
            j++;
        }
    }
    a1[j]='\0';
    printf("\nThe result is: ");
    puts(a1);
    return 0;
}