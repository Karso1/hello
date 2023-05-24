/*
 * 从键盘读入两个整数，iBegin和iEnd，要求输出>=iBegin且<=iEnd的所有整数
 *

*/

#include<stdio.h>
int main()
{
    int ib,ie;
    printf("plz input two number:");
    scanf("%d %d",&ib,&ie);

    printf("\nResult:");

    for(;ib<= ie;ib++)
    {
        printf(" %d",ib);
    }
    putchar('\n');

    return 0;
}