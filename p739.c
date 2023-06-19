/*
 * 从键盘输入年月日，计算该日期时公元纪年第几天
 */

#include<stdio.h>
int main()
{
    int a1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,nn,yy,rr,sum = 0;
    printf("input a data(year-month-year):");
    scanf("%d-%d-%d",&nn,&yy,&rr)  ;
    for(i = 1;i<=nn-1;i++)
    {
        if(i%400 == 0 || (i%100 != 0&& i %4 == 0))
        {
            sum = sum +366;
        }
        else
        {
            sum = sum+365;
        }
    }
    for(i = 0;i<yy-1;i++)
    {
        sum = sum+a1[i];
    }
    sum = sum + rr;
    if((nn%400 == 0 || (nn%100 != 0 && nn%4==0)) && (yy>2))
    {
        sum++;
    }
    printf("\n the result is %d\n",sum);
    return 0;

}