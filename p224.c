/*
 * 猴子吃桃问题，第一天摘下若干个桃子，吃了一半，又多吃了一个
 * 第二天早上有将剩下的桃子吃了一半，多吃了一个，日复一日
 * 到第n天，早上想吃的时候，就只有一个桃子了，求共有多少桃子
 */

#include<stdio.h>
int main()
{
    int n,m = 1, i;
    printf("plz input n:");
    scanf("%d",&n);

    for(i = 1; i < n; i++)
    {
        m = (m+1)*2;
    }
    printf("\ntotal = %d",m);
    return 0;
}