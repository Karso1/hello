/*
 * 输入月份，输出2003年该月有多少天
 * 当输入月份超范围时，输出
 *invalid month input
 */

#include<stdio.h>
int main()
{
    int m,n;
    printf("plz input the month number:");
    scanf("%d",&m);
    if(m<=12&&m>=1)
    {
        if(m == 4 || m == 6 || m == 9 || m == 11)
        {
            n = 30;
        }
        else if(m == 2)
        {
            n = 28;
        }
        else
        {
            n = 31;
        }
        printf("\n2003.%d has %d days\n",m,n);
    }
    else
    {
        printf("\nInvalid month input!\n");
    }
    return 0;
}