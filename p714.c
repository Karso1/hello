/*
 * 输入10个整数，计算所有正数的和，负数的和，以及10个数的和
 */

#include<stdio.h>
int main()
{
    int a1[10],i,sum1= 0,sum2 = 0,sum = 0;
    printf("plz input 10 number:");
    for(i = 0;i<10;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i = 0;i<10;i++)
    {
        sum = sum+a1[i];
        if(a1[i]>0)
        {
            sum1 = sum1+a1[i];
        }
        else
        {
            sum2 = sum2+a1[i];
        }

    }
    printf("\nzhengshu = %d,fushu = %d",sum1,sum2,sum);
    return 0;
}