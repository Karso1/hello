/*
 * 组成最小数
 * 给定数字0-9若干，任意顺序排列这些数字，但必须全部使用，目标时使得最后的数尽可能少
 * 0不能放在首位
 *
 * 输入格式：在一行中给出10个非负整数，中间用空格隔开
 */

#include<stdio.h>
int main()
{
    int a[10],n,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++)
    {
        if(a[i] != 0)
        {
            printf("%d",i);
            a[i]--;
            break;
        }
    }
    for(i=0;i<10;i++)
    {
        while(a[i] != 0)
        {
            printf("%d",i);
            a[i]--;
        }
    }
    return 0;
}

