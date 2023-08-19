/*
 * 输入一行带查找字符
 * 第二行以回车结束的非空字符串
 * 若找到，则输出 index = 下标，否则Not Found
 */

#include<stdio.h>
#include<string.h>
int main()
{
    char ch,a[81];
    int flag = 0;
    ch = getchar();
    getchar();
    gets(a);
    for(int i = strlen(a)-1;i>=0;i--)
        if(a[i]==ch)
        {
            printf("index = %d",i);
            flag = 1;
            break;
        }
    if(flag == 0)
        printf("Not Found\n");
    return 0;
}