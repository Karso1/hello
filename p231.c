/*
 * 从键盘读入两个整数iBegin和iCount，呀求输出<=iBegin的iCount个整数
 *
 */

#include<stdio.h>
int main()
{
    int iB,i,n;
    printf("plz input two number:");
    scanf("%d %d",&iB,&n);

    printf("\nResult:");

    for(i = 0;i<n;i++)
    {
        printf(" %d",iB);
        iB = iB - 7;
    }
    return 0;
}