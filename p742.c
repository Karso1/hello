/*
 * 现有两个一维数组，各含5个整形元素，设为AB，从键盘分别输入数据给这两个数组
 * 计算A正序位置与B逆序对应位置积的和
 *
 */

#include<stdio.h>
int main()
{
    int a1[5],b1[5],i,j,sum=0;
    printf("input A:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("input B:");
    for(i= 0;i<5;i++)
    {
        scanf("%d",&b1[i]);
    }
    for(i=0,j=4;i<=4,j>=0;i++,j--)
    {
        sum = sum + a1[i] * b1[j];
    }
    printf("\n sum = %d\n",sum);
    return 0;
}