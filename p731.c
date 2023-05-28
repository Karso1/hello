/*
 * 输入一个数字，输出n行星号
 * 每行5个*
 *
 */

#include<stdio.h>
int main()
{
    int i,n;

    printf("plz input n:");
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        printf("* * * * *\n");
    }
    return 0;
}