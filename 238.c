/*
 * 先从键盘读入五个整数，然后倒序输出
 */

#include<stdio.h>
int main()
{
    int a1[5],i;
    printf("plz input 5 number:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("\n:");
    for(i = 4;i>=0;i--)
    {
        printf("%d",a1[i]);

    }
return 0;
}