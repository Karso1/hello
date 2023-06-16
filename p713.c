/*
 * 用scanf输入某年某月某日，判断这一天是这一年的第几天
 */

#include<stdio.h>
int main()
{
    int a1[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i,sum = 0,nn,yy,rr;

    printf("plz input year-month-day:");
    scanf("%d-%d-%d",&nn,&yy,&rr);

    for(i = 0;i<yy-1;i++)
    {
        sum =sum+a1[i];
    }
    sum = sum +rr;
    if((nn%400 == 0||(nn%100!=0&&nn%4==0))   &&yy>2)
    {
        sum++;
    }
    printf("\nit is the %dth day.\n",sum);
    return 0;


}