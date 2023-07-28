/*
 * 输入在一行中给4个整数，其间以空格分隔
 * 输出：在一行中按照格式“sum = 和；average = 平均值”顺序输出和与平均值
 * 其中平均值精确到小数点后一位
 */
#include<stdio.h>
int main()
{
    int sum = 0,a[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("sum = %d,average = %.1f",sum,sum/4.0);
    return 0;
}